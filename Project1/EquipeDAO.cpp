#include "EquipeDAO.h"
#include <time.h>
#include <stdio.h>



EquipeDAO::EquipeDAO()
{
}

EquipeDAO::~EquipeDAO()
{

}

bool EquipeDAO::createEquipe(std::string nomeEquipe, int nPessoas, int custoHora, int maxHoras, std::string login) {

	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO `Equipe` (`nome`, `nPessoas`, `custoHora`, `maxHoras`, `login`) VALUES (?,?,?,?,?);");
		preparedStatement->setString(1, nomeEquipe.c_str());
		preparedStatement->setInt(2, nPessoas);
		preparedStatement->setInt(3, custoHora);
		preparedStatement->setInt(4, maxHoras);
		preparedStatement->setString(5, login.c_str());
		resultSet = preparedStatement->executeQuery();
	}

	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}

bool EquipeDAO::updateEquipe(std::string nomeEquipe, int nPessoas, int custoHora, int maxHoras, std::string login) {

	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE `Equipe` SET `nPessoas` = ?, `custoHora` = ?, `maxHoras` = ?, `login` = ? WHERE `nome` = ?;");
		preparedStatement->setInt(1, nPessoas);
		preparedStatement->setInt(2, custoHora);
		preparedStatement->setInt(3, maxHoras);
		preparedStatement->setString(4, login.c_str());
		preparedStatement->setString(5, nomeEquipe.c_str());
		resultSet = preparedStatement->executeQuery();
	}

	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}

bool EquipeDAO::existEquipe(std::string nome)
{
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
		preparedStatement = connection->prepareStatement("SELECT `nome` FROM `Equipe` WHERE `nome`=?;");
		preparedStatement->setString(1, nome.c_str());

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

bool EquipeDAO::deleteEquipe(std::string nomeEquipe) {

	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM `Equipe` WHERE `nome` = ?;");
		preparedStatement->setString(1, nomeEquipe.c_str());
		resultSet = preparedStatement->executeQuery();
	}

	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}
