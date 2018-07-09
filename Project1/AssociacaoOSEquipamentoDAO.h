#ifndef ASSOCIACAOOSEQUIPAMENTODAO_H
#define ASSOCIACAOOSEQUIPAMENTODAO_H

#include "MySQLDAO.h"

#include <vector>

class AssociacaoOSEquipamentoDAO
{

public:

	AssociacaoOSEquipamentoDAO();

	virtual ~AssociacaoOSEquipamentoDAO();

	bool createAssociacaoOsEquipamento(int idOs, std::string nomeEquipamento);

};

#endif