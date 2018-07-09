#include "AssociacaoOSEquipamentoDAO.h"
#include <time.h>
#include <stdio.h>



AssociacaoOSEquipamentoDAO::AssociacaoOSEquipamentoDAO()
{
}

AssociacaoOSEquipamentoDAO::~AssociacaoOSEquipamentoDAO()
{

}

bool AssociacaoOSEquipamentoDAO::createAssociacaoOsEquipamento(int idOs, std::string nomeEquipamento) {
	std::string log;
	sql::Connection * connection;
	sql::Statement * statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet * resultSet;
	try {
		MySQLDAO * mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO `AssociacaoOSEquipamentoD` (`idOs`, `nome`) VALUES (?,?);");
		preparedStatement->setInt(1, idOs);
		preparedStatement->setString(2, nomeEquipamento.c_str());
		resultSet = preparedStatement->executeQuery();
	}

	catch (sql::SQLException e)
	{
		log = e.what();
	}
	return true;
}
