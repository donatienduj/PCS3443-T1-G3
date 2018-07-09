#ifndef ORDEM_DE_SAIDA_H
#define ORDEM_DE_SAIDA_H
#include <string>
//Begin section for file Ordem_de_Saida.h
//TODO: Add definitions that you want preserved
//End section for file Ordem_de_Saida.h



class Ordem_de_Servico; //Dependency Generated Source:Ordem_de_Saida Target:Ordem_de_Servico





//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Ordem_de_Saida
{
    //Begin section for Ordem_de_Saida
    //TODO: Add attributes that you want preserved
    //End section for Ordem_de_Saida

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string data;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
		Ordem_de_Servico * ordem_de_Servico;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
		Ordem_de_Saida();



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ~Ordem_de_Saida();



        //get data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
		std::string get_data();



        //set data
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_data(std::string data);



        //get ordem_de_Servico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
		Ordem_de_Servico * get_ordem_de_Servico();



        //set ordem_de_Servico
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordem_de_Servico(Ordem_de_Servico * ordem_de_Servico);



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void alterarEstado(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void destroyOSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Criação_de_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Atribui_a_OS_a_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Atribui_Equipe_a_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Lista_de_OSS_em_aberto(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Detalhes_da_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Remove_OS_da_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Remove_Equipe_da_OS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Remove_Equipe_da_OSS(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void Altera_o_estado_para__OSS_Removida_(); 



};  //end class Ordem_de_Saída



#endif#endif#endif
