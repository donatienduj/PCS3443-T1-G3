#ifndef CIDADAODAO_H
#define CIDADAODAO_H

#include "MySQLDAO.h"

class CidadaoDAO
{

public:

	CidadaoDAO();

	virtual ~CidadaoDAO();

	bool createCidadao(std::string nomeCidadao, std::string contatoCidadao);

	bool existCidadaoByNomeContato(std::string nomeCidadao, std::string contato);

	int getIdCidadaoByNomeContato(std::string nomeCidadao, std::string contato);
};

#endif

