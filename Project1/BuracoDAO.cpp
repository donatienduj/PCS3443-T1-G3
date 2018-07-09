#include "../Project1/BuracoDAO.h"
#include <time.h>
#include <stdio.h>

BuracoDAO::BuracoDAO()
{

}

BuracoDAO::~BuracoDAO()
{

}

bool BuracoDAO::createBuraco(std::string holeAddress, int holeSize, std::string holePosition, std::string holeCEP, std::string holeDate, std::string holeHour)
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
		preparedStatement = connection->prepareStatement("INSERT INTO `Buraco` (`nReclamacoes`, `endereco`, `tamanho`, `posicao`, `dataInclusao`,`siglaRegiao`,  `horaInclusao`) VALUES (1,?,?,?,?,?,?)");
		preparedStatement->setString(1, holeAddress.c_str());
		preparedStatement->setInt(2, holeSize);
		preparedStatement->setString(3, holePosition.c_str());
		preparedStatement->setString(4, holeDate.c_str());
		preparedStatement->setString(5, holeCEP.c_str());
		preparedStatement->setString(6, holeHour.c_str());

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

bool BuracoDAO::updateNreclamacoesBuraco(std::string holeAddress, std::string holePosition, std::string holeCEP)
{
	string log;
	Ordem_de_Servico * ordem_de_servico = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {

		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE `Buraco` SET `nReclamacoes` = `nReclamacoes`+1 WHERE `endereco`=? AND `posicao`=? AND `siglaRegiao`=?");
		preparedStatement->setString(1, holeAddress.c_str());
		preparedStatement->setString(2, holePosition.c_str());
		preparedStatement->setString(3, holeCEP.c_str());

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

bool BuracoDAO::existBuracoByAddressPositionCEP(std::string holeAddress, std::string holePosition, std::string holeCEP)
{
	bool response;
	string log;
	Ordem_de_Servico * ordem_de_servico = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		response = false;
		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT `idBuraco` FROM `Buraco` WHERE `endereco`=? AND `posicao`=? AND `siglaRegiao`=?");
		preparedStatement->setString(1, holeAddress.c_str());
		preparedStatement->setString(2, holePosition.c_str());
		preparedStatement->setString(3, holeCEP.c_str());

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

int BuracoDAO::getIdBuracoByAddressPositionCEP(std::string holeAddress, std::string holePosition, std::string holeCEP)
{
	int id;
	string log;
	Ordem_de_Servico * ordem_de_servico = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT `idBuraco` FROM `Buraco` WHERE `endereco`=? AND `posicao`=? AND `siglaRegiao`=?");
		preparedStatement->setString(1, holeAddress.c_str());
		preparedStatement->setString(2, holePosition.c_str());
		preparedStatement->setString(3, holeCEP.c_str());

		//Escrever consulta
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
			id = resultSet->getInt(1);
		}
	}
	catch (sql::SQLException e)
	{
		//connection->close();
		log = e.what();
	}
	return id;
}

Buraco* getBuracoById(int idBuraco) {
	string log;
	Ordem_de_Servico * ordem_de_servico = nullptr;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	Buraco* buraco = new Buraco();
	try {
		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT * FROM `Buraco` WHERE `idBuraco`=?");
		preparedStatement->setInt(1, idBuraco);

		//Escrever consulta
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
			buraco->set_ID(resultSet->getInt(1));
			buraco->set_nReclamacoes(resultSet->getInt(2));
			buraco->set_posicao(resultSet->getString(3));
			buraco->set_dataInclusao(resultSet->getString(4));
			buraco->set_endereco(resultSet->getString(5));
			buraco->set_tamanho(resultSet->getInt(6));
		}
	}
	catch (sql::SQLException e)
	{
		//connection->close();
		log = e.what();
	}
	return buraco;
}
