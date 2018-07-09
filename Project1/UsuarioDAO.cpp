#include "UsuarioDAO.h"
#include <time.h>
#include <stdio.h>

UsuarioDAO::UsuarioDAO()
{
}

UsuarioDAO::~UsuarioDAO()
{

}

bool UsuarioDAO::existUsuarioByLoginSenha(std::string login, std::string senha) {
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
		preparedStatement = connection->prepareStatement("SELECT * FROM `Usuario` WHERE `login` = ? AND `senha` = ?;");
		preparedStatement->setString(1, login.c_str());
		preparedStatement->setString(2, senha.c_str());

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

std::string UsuarioDAO::getCargoByLoginSenha(std::string login, std::string senha)
{
	std::string cargo;
	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("SELECT `cargo` FROM `Usuario` WHERE `login` = ? AND `senha` = ?;");
		preparedStatement->setString(1, login.c_str());
		preparedStatement->setString(2, senha.c_str());
		resultSet = preparedStatement->executeQuery();
		if (resultSet->next()) {
			cargo = resultSet->getString(1).c_str();
		}
	}

	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return cargo;
}
