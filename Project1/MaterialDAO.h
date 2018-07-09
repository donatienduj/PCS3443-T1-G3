#ifndef MATERIAL_H
#define MATERIAL_H

#include "MySQLDAO.h"

#include <vector>

class MaterialDAO
{

public:

	MaterialDAO();

	virtual ~MaterialDAO();

	bool createMaterial(std::string nome, std::string tipo, int custoUnidade, std::string unidade);

	bool updateMaterial(std::string nome, std::string tipo, int custoUnidade, std::string unidade);

	bool existMaterial(std::string nome);

	bool deleteMaterial(std::string nome);


};

#endif