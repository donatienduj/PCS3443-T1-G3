#include "MySQLDAO.h"



MySQLDAO* MySQLDAO::instance = 0;
//Begin section for file MySQLDAO.cpp
//TODO: Add definitions that you want preserved
//End section for file MySQLDAO.cpp


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
MySQLDAO::MySQLDAO()
{

	sql::Statement *stmt;
	sql::PreparedStatement *pstmt;
	string log = "";
	this->url = "tcp://143.107.102.55:3306/db03";
	this->pass = "grupo03";
	this->user = "grupo03";
	try
	{
		driver = get_driver_instance();
		//for demonstration only. never save password in the code!
		//conn = driver->connect("tcp://143.107.102.55:3306/teste", "teste", "teste");
		connection = driver->connect(url.c_str(), user.c_str(), pass.c_str());
	}
	catch (sql::SQLException e)
	{
		log = e.what();

	}

	//TODO Auto-generated method stub
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
MySQLDAO::~MySQLDAO()
{
	//TODO Auto-generated method stub
	delete connection;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
MySQLDAO* MySQLDAO::getInstance()
{
	if (instance == 0)
		instance = new MySQLDAO();
	return instance;
}
//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
sql::Connection * MySQLDAO::getConnection()
{
	return connection;
}

