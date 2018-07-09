#ifndef USUARIODAO_H
#define USUARIODAO_H

#include "MySQLDAO.h"

#include <vector>

class UsuarioDAO
{

public:

	UsuarioDAO();

	virtual ~UsuarioDAO();

	bool existUsuarioByLoginSenha(std::string login, std::string senha);
	std::string getCargoByLoginSenha(std::string login, std::string senha);


};

#endif
