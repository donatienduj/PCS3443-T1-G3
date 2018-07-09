#ifndef BURACO_H
#define BURACO_H
//Begin section for file Buraco.h
//TODO: Add definitions that you want preserved
//End section for file Buraco.h

#include <string>

class Notificacao; //Dependency Generated Source:Buraco Target:Notifica��o


class Ordem_de_Servico; //Dependency Generated Source:Buraco Target:Ordem_de_Servi�o


class Foto; //Dependency Generated Source:Buraco Target:Foto


class Regiao; //Dependency Generated Source:Buraco Target:Regi�o


//@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
class Buraco
{
    //Begin section for Buraco
    //TODO: Add attributes that you want preserved
    //End section for Buraco

    private:


        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int ID;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int nReclamacoes;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string posicao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string dataInclusao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string endereco;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int tamanho;

		std::string horaInclusao;

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notificacao * notificacao;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servico * ordem_de_Servico;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Foto * foto;



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Regiao * regiao;




    public:

        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Buraco();



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        ~Buraco(); 



        //get ID
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_ID(); 



        //set ID
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ID(int ID); 



        //get nReclama��es
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_nReclamacoes(); 



        //set nReclama��es
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_nReclamacoes(int nReclama��es); 



        //get posi��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string get_posicao(); 



        //set posi��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_posicao(std::string posi��o);



        //get dataInclus�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        std::string get_dataInclusao(); 



        //set dataInclus�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_dataInclusao(std::string dataInclus�o); 



        //get localiza��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
		std::string get_endereco();

		void set_endereco(std::string endereco);

        //get tamanho
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        int get_tamanho(); 



        //set tamanho
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_tamanho(int tamanho); 

		std::string get_horaInclusao();

		void set_horaInclusao(std::string horaInclusao);

        //get notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Notificacao * get_notificacao(); 



        //set notifica��o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_notificacao(Notificacao * notifica��o); 



        //get ordem_de_Servi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Ordem_de_Servico * get_ordem_de_Servico(); 



        //set ordem_de_Servi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_ordem_de_Servico(Ordem_de_Servico * ordem_de_Servico); 



        //get foto
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Foto * get_foto(); 



        //set foto
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_foto(Foto * foto); 



        //get regi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        Regiao * get_regiao(); 



        //set regi�o
        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void set_regiao(Regiao * regiao); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void addNotificacao(); 



        //@generated "UML to C++ (com.ibm.xtools.transform.uml2.cpp.CPPTransformation)"
        void createBuraco(); 



};  //end class Buraco



#endif#endif#endif
