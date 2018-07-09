#include "../Project1/Ordem_de_ServicoDAO.h"
#include <time.h>
#include <stdio.h>

Ordem_de_ServicoDAO::Ordem_de_ServicoDAO()
{

}

Ordem_de_ServicoDAO::~Ordem_de_ServicoDAO()
{

}

bool Ordem_de_ServicoDAO::createOS(int idBuraco) {
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
		preparedStatement = connection->prepareStatement("INSERT INTO `OrdemDeServico` (`nPessoasEstimado`, `horasPessoasEstimadas`, `prioridade`, `estado`, `nome`, `idBuraco`, `idOSaida`) VALUES (4,10,3,'Em andamento','Equipe1',?,1)");

		preparedStatement->setInt(1, idBuraco);

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

bool Ordem_de_ServicoDAO::existOSbyIdState(int id)
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
		preparedStatement = connection->prepareStatement("SELECT * FROM `OrdemDeServico` where `idOs` = ? AND `estado` = 'Em andamento'");

		preparedStatement->setInt(1, id);

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
bool Ordem_de_ServicoDAO::closeOSbyID(int OSNumber, std::string Material, int Hours, std::string EndDate) {
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE `OrdemDeServico` SET `estado` =?, `horasPessoasReal` = ?, `dataFinalizacao` = ? WHERE `idOs` = ?;");

		preparedStatement->setString(1, "Fechado");
		preparedStatement->setInt(2, Hours);
		preparedStatement->setString(3, EndDate.c_str());
		preparedStatement->setInt(4, OSNumber);

		//Escrever consulta
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
		}
	}
	catch (sql::SQLException e)
	{
		//connection->close();
		log = e.what();
	}

	return true;

}
