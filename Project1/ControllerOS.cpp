#include "ControllerOS.h"

ControllerOS::ControllerOS()
{

}

ControllerOS::~ControllerOS()
{

}

std::string ControllerOS::getCargoByLoginSenha(std::string login, std::string senha) {
	std::string cargo;
	UsuarioDAO* usuariodao = new UsuarioDAO();
	bool existUsuario = usuariodao->existUsuarioByLoginSenha(login, senha);
	if (existUsuario == true) {
			cargo = usuariodao->getCargoByLoginSenha(login, senha);
	}
	else {
		cargo = "";
	}
	return cargo;
}

bool ControllerOS::closeOS(int OSNumber, std::string Material, int Hours, std::string EndDate)
{
	bool response;
	Ordem_de_ServicoDAO* ordem_de_servicodao = new Ordem_de_ServicoDAO;
	bool existOS = ordem_de_servicodao->existOSbyIdState(OSNumber);

	if (existOS == true) {
		response = ordem_de_servicodao->closeOSbyID(OSNumber, Material, Hours, EndDate);
	}
	return response;
}

bool ControllerOS::registerHole(std::string holeAddress, int holeSize, std::string holePosition, std::string holeCEP, std::string holeDate, std::string holeHour, std::string nomeCidadao, std::string contatoCidadao)
{
	BuracoDAO* buracodao = new BuracoDAO;
	Ordem_de_ServicoDAO* ordem_de_servicodao = new Ordem_de_ServicoDAO;

	int idBuraco;
	bool buracoExist = buracodao->existBuracoByAddressPositionCEP(holeAddress, holePosition, holeCEP);
	if (buracoExist == false){
		// Create a new Buraco with the Ordem de Servico
		buracodao->createBuraco(holeAddress, holeSize, holePosition, holeCEP, holeDate, holeHour);
		idBuraco = buracodao->getIdBuracoByAddressPositionCEP(holeAddress, holePosition, holeCEP);
		ordem_de_servicodao->createOS(idBuraco);
	}
	else {
		idBuraco = buracodao->getIdBuracoByAddressPositionCEP(holeAddress, holePosition, holeCEP);
		buracodao->updateNreclamacoesBuraco(holeAddress, holePosition, holeCEP);
	}

	CidadaoDAO* cidadaodao = new CidadaoDAO();
	bool cidadaoExist = cidadaodao->existCidadaoByNomeContato(nomeCidadao, contatoCidadao);
	if (cidadaoExist == false) {
		cidadaodao->createCidadao(nomeCidadao, contatoCidadao);
	}
	int idCidadao = cidadaodao->getIdCidadaoByNomeContato(nomeCidadao, contatoCidadao);
	NotificacaoDAO* notificacaodao = new NotificacaoDAO();
	notificacaodao->createNotificacao(idBuraco, idCidadao);
	
	return true;
}

bool ControllerOS::createUpdateEquipe(std::string nome, int nPessoas, int custoHora, int maxHoras, std::string login) {
	EquipeDAO* equipedao = new EquipeDAO();
	bool existEquipe = equipedao->existEquipe(nome);
	if (existEquipe == true) {
		return equipedao->updateEquipe(nome, nPessoas, custoHora, maxHoras, login);
	}
	else {
		return equipedao->createEquipe(nome, nPessoas, custoHora, maxHoras, login);
	}
}

bool ControllerOS::deleteEquipe(std::string nome)
{
	EquipeDAO* equipedao = new EquipeDAO();
	bool existEquipe = equipedao->existEquipe(nome);
	if (existEquipe == true) {
		return equipedao->deleteEquipe(nome);
	}
	return false;
}

bool ControllerOS::createUpdateEquipamento(std::string nome, std::string tipo, int custoHora) {
	EquipamentoDAO* equipamentodao = new EquipamentoDAO();
	bool existEquipe = equipamentodao->existEquipamento(nome);
	if (existEquipe == true) {
		return equipamentodao->updateEquipamento(nome, tipo, custoHora);
	}
	else {
		return equipamentodao->createEquipamento(nome, tipo, custoHora);
	}
}

bool ControllerOS::deleteEquipamento(std::string nome)
{
	EquipamentoDAO* equipamentodao = new EquipamentoDAO();
	bool existEquipe = equipamentodao->existEquipamento(nome);
	if (existEquipe == true) {
		return equipamentodao->deleteEquipamento(nome);
	}
	return false;
}

bool ControllerOS::createUpdateMaterial(std::string nome, std::string tipo, int custoUnidade, std::string unidade) {
	MaterialDAO* materialdao = new MaterialDAO();
	bool existEquipe = materialdao->existMaterial(nome);
	if (existEquipe == true) {
		return materialdao->updateMaterial(nome, tipo, custoUnidade, unidade);
	}
	else {
		return materialdao->createMaterial(nome, tipo, custoUnidade, unidade);
	}
}

bool ControllerOS::deleteMaterial(std::string nome)
{
	MaterialDAO* materialdao = new MaterialDAO();
	bool existEquipe = materialdao->existMaterial(nome);
	if (existEquipe == true) {
		return materialdao->deleteMaterial(nome);
	}
	return false;
}
