#include "MaterialDAO.h"
#include <time.h>
#include <stdio.h>



MaterialDAO::MaterialDAO()
{
}

MaterialDAO::~MaterialDAO()
{

}

bool MaterialDAO::createMaterial(std::string nome, std::string tipo, int custoUnidade, std::string unidade) {

	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO `Material` (`nome`, `tipo`, `custoUnidade`, `unidade`) VALUES (?,?,?,?);");
		preparedStatement->setString(1, nome.c_str());
		preparedStatement->setString(2, tipo.c_str());
		preparedStatement->setInt(3, custoUnidade);
		preparedStatement->setString(4, unidade.c_str());
		resultSet = preparedStatement->executeQuery();
	}

	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}

bool MaterialDAO::updateMaterial(std::string nome, std::string tipo, int custoUnidade, std::string unidade) {

	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE `Material` SET `tipo` = ?, `custoUnidade` = ?, `unidade` = ? WHERE `nome` = ?;");
		preparedStatement->setString(1, tipo.c_str());
		preparedStatement->setInt(2, custoUnidade);
		preparedStatement->setString(3, unidade.c_str());
		preparedStatement->setString(4, nome.c_str());
		resultSet = preparedStatement->executeQuery();
	}

	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}

bool MaterialDAO::existMaterial(std::string nome)
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
		preparedStatement = connection->prepareStatement("SELECT `nome` FROM `Material` WHERE `nome`=?;");
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

bool MaterialDAO::deleteMaterial(std::string nomeEquipe) {

	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM `Material` WHERE `nome` = ?;");
		preparedStatement->setString(1, nomeEquipe.c_str());
		resultSet = preparedStatement->executeQuery();
	}

	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}
