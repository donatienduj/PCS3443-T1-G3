#ifndef EQUIPEDAO_H
#define EQUIPEDAO_H

#include "MySQLDAO.h"

#include <vector>

class EquipeDAO
{

public:

	EquipeDAO();

	virtual ~EquipeDAO();

	bool createEquipe(std::string nomeEquipe, int nPessoas, int custoHora, int maxHoras, std::string login);

	bool updateEquipe(std::string nomeEquipe, int nPessoas, int custoHora, int maxHoras, std::string login);

	bool existEquipe(std::string nome);

	bool deleteEquipe(std::string nome);


};

#endif

