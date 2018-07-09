#ifndef ORDEM_DE_SERVICODAO_H
#define ORDEM_DE_SERVICODAO_H

#include "Ordem_de_Servico.h"

#include "MySQLDAO.h"

class Ordem_de_ServicoDAO
{

public:

	Ordem_de_ServicoDAO();

	virtual ~Ordem_de_ServicoDAO();

	bool createOS(int idBuraco);

	bool existOSbyIdState(int id);

	bool closeOSbyID(int OSNumber, std::string Material, int Hours, std::string EndDate);

};

#endif
