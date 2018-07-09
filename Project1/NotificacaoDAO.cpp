#include "NotificacaoDAO.h"



NotificacaoDAO::NotificacaoDAO()
{
}

NotificacaoDAO::~NotificacaoDAO()
{
}

bool NotificacaoDAO::createNotificacao(int idBuraco, int idCidadao) {
	string log;
	sql::Connection * connection;
	sql::Statement* statement;
	sql::PreparedStatement * preparedStatement;
	sql::ResultSet *resultSet;
	try {
		std::time_t time = std::time(0);
		std::stringstream currentTime;
		currentTime << time;
		std::string currentDate = currentTime.str();

		//Pegar conexão
		MySQLDAO* mysqldao = MySQLDAO::getInstance();
		connection = mysqldao->getConnection();
		preparedStatement = connection->prepareStatement("INSERT INTO `Notificacao` (`data`,`idBuraco`, `idCidadao`) VALUES (?,?,?)");
		preparedStatement->setString(1, currentDate.c_str());
		preparedStatement->setInt(2, idBuraco);
		preparedStatement->setInt(3, idCidadao);

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

