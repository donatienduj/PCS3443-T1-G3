#ifndef NOTIFICACAODAO_H
#define NOTIFICACAODAO_H

#include "MySQLDAO.h"
#include <ctime>
#include <sstream>

class NotificacaoDAO
{

public:

	NotificacaoDAO();

	virtual ~NotificacaoDAO();

	bool createNotificacao(int idBuraco, int idCidadao);
};

#endif
