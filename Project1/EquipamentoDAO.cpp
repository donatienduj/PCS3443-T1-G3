#include "EquipamentoDAO.h"
#include <time.h>
#include <stdio.h>


EquipamentoDAO::EquipamentoDAO()
{
}

EquipamentoDAO::~EquipamentoDAO()
{

}

bool EquipamentoDAO::createEquipamento(std::string nome, std::string tipo, int custoHora) 
{
	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO `Equipamento` (`nome`, `tipo`, `custoHora`) VALUES (?,?,?)");
		preparedStatement->setString(1, nome.c_str());
		preparedStatement->setString(2, tipo.c_str());
		preparedStatement->setInt(3, custoHora);
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}

bool EquipamentoDAO::updateEquipamento(std::string nome, std::string tipo, int custoHora)
{
	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("UPDATE `Equipamento` SET `tipo` = ?, `custoHora` = ? WHERE `nome` = ?");
		preparedStatement->setString(1, tipo.c_str());
		preparedStatement->setInt(2, custoHora);
		preparedStatement->setString(3, nome.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}

bool EquipamentoDAO::existEquipamento(std::string nome)
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
		preparedStatement = connection->prepareStatement("SELECT `nome` FROM `Equipamento` WHERE `nome`=?;");
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

bool EquipamentoDAO::deleteEquipamento(std::string nome)
{
	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("DELETE FROM `Equipamento` WHERE `nome` = ?");
		preparedStatement->setString(1, nome.c_str());
		resultSet = preparedStatement->executeQuery();
	}
	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}