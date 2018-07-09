#include "CidadaoDAO.h"



CidadaoDAO::CidadaoDAO()
{
}

CidadaoDAO::~CidadaoDAO()
{
}

bool CidadaoDAO::createCidadao(std::string nomeCidadao, std::string contatoCidadao)
{
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {

		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		//preparedStatement = connection->prepareStatement("INSERT INTO Buraco (endereco, tamanho, localizacao, cep, dataInclusao, horaInclusao) VALUES (?,?,?,?,?,?)");
		preparedStatement = connection->prepareStatement("INSERT INTO `Cidadao` (`nome`, `contato`) VALUES (?,?)");
		preparedStatement->setString(1, nomeCidadao.c_str());
		preparedStatement->setString(2, contatoCidadao.c_str());

		//Escrever consulta
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		//connection->close();
		log = e.what();
	}
	return resultSet;
}

bool CidadaoDAO::existCidadaoByNomeContato(std::string nomeCidadao, std::string contatoCidadao) {
	bool response;
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		response = false;
		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT `idCidadao` FROM `Cidadao` WHERE `nome`=? AND `contato`=?");
		preparedStatement->setString(1, nomeCidadao.c_str());
		preparedStatement->setString(2, contatoCidadao.c_str());

		//Escrever consulta
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
			response = true;
		}
	}
	catch (sql::SQLException e)
	{
		//connection->close();
		log = e.what();
	}
	return response;
}

int CidadaoDAO::getIdCidadaoByNomeContato(std::string nomeCidadao, std::string contatoCidadao) {
	int idCidadao;
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT `idCidadao` FROM `Cidadao` WHERE `nome`=? AND `contato`=?");
		preparedStatement->setString(1, nomeCidadao.c_str());
		preparedStatement->setString(2, contatoCidadao.c_str());

		//Escrever consulta
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
			idCidadao = resultSet->getInt(1);
		}
	}
	catch (sql::SQLException e)
	{
		//connection->close();
		log = e.what();
	}
	return idCidadao;
}
