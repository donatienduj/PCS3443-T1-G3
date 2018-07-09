#ifndef CONTROLLEROS_H
#define CONTROLLEROS_H

#include "Ordem_de_Servico.h"
#include "Ordem_de_ServicoDAO.h"

#include "UsuarioDAO.h"

#include "Buraco.h"
#include "BuracoDAO.h"

#include "CidadaoDAO.h"

#include "NotificacaoDAO.h"
#include "EquipeDAO.h"
#include "EquipamentoDAO.h"
#include "MaterialDAO.h"

#include <string>

	class ControllerOS
	{

	public:

		ControllerOS();

		virtual ~ControllerOS();

		std::string getCargoByLoginSenha(std::string login, std::string senha);

		bool closeOS(int OSNumber, std::string Material, int Hours, std::string EndDate);

		bool registerHole(std::string holeAddress, int holeSize, std::string holePosition, std::string holeCEP, std::string holeDate, std::string holeHour, std::string nomeCidadao, std::string contatoCidadao);

		bool createUpdateEquipe(std::string nome, int nPessoas, int custoHora, int maxHoras, std::string login);
		bool deleteEquipe(std::string nome);

		bool createUpdateEquipamento(std::string nome, std::string tipo, int custoHora);
		bool deleteEquipamento(std::string nome);

		bool createUpdateMaterial(std::string nome, std::string tipo, int custoUnidade, std::string unidade);
		bool deleteMaterial(std::string nome);

	};
#endif


