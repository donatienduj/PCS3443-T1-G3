#pragma once

#ifndef EQUIPAMENTODAO_H
#define EQUIPAMENTODAO_H

#include "MySQLDAO.h"

#include <vector>

class EquipamentoDAO
{

public:

	EquipamentoDAO();

	virtual ~EquipamentoDAO();

	bool createEquipamento(std::string nome, std::string tipo, int custoHora);
	bool updateEquipamento(std::string nome, std::string tipo, int custoHora);
	bool existEquipamento(std::string nome);
	bool deleteEquipamento(std::string nome);

};

#endif;

