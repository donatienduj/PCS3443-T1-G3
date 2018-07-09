#ifndef BURACODAO_H
#define BURACODAO_H

#include "Buraco.h"

#include "MySQLDAO.h"

class BuracoDAO
{

public:

	BuracoDAO();

	virtual ~BuracoDAO();

	bool createBuraco(std::string holeAddress, int holeSize, std::string holePosition, std::string holeCEP, std::string holeDate, std::string holeHour);

	bool BuracoDAO::updateNreclamacoesBuraco(std::string holeAddress, std::string holePosition, std::string holeCEP);

	bool existBuracoByAddressPositionCEP(std::string holeAddress, std::string holePosition, std::string holeCEP);

	int getIdBuracoByAddressPositionCEP(std::string holeAddress, std::string holePosition, std::string holeCEP);

	Buraco* getBuracoById(int idBuraco);
};

#endif
