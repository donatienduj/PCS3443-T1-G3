#pragma once
#include <string>
#include "ControllerOS.h"
#include <msclr\marshal_cppstd.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CRUDEquipe
	/// </summary>
	public ref class CRUDEquipe : public System::Windows::Forms::Form
	{
	public:
		CRUDEquipe(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		property String^ nome {
			String^ get() {
				return textBoxNome->Text;
			}
		}
		property String^ nPessoas {
			String^ get() {
				return textBoxNPessoas->Text;
			}
		}
		property String^ custoHora {
			String^ get() {
				return textBoxCustoHora->Text;
			}
		}
		property String^ maxHoras {
			String^ get() {
				return textBoxMaxHoras->Text;
			}
		}
		property String^ login {
			String^ get() {
				return textBoxLogin->Text;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CRUDEquipe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxNome;
	private: System::Windows::Forms::TextBox^  textBoxNPessoas;
	private: System::Windows::Forms::TextBox^  textBoxCustoHora;
	private: System::Windows::Forms::TextBox^  textBoxMaxHoras;
	private: System::Windows::Forms::TextBox^  textBoxLogin;
	private: System::Windows::Forms::Button^  createUpdateButton;
	private: System::Windows::Forms::Button^  deleteButton;
	private: System::Windows::Forms::Label^  label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxNome = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNPessoas = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCustoHora = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMaxHoras = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->createUpdateButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(71, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nome da Equipe";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(48, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero de Pessoas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(99, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Custo / hora";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(111, 153);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Max horas";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 184);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Login do Chefe da Equipe";
			// 
			// textBoxNome
			// 
			this->textBoxNome->Location = System::Drawing::Point(202, 49);
			this->textBoxNome->Name = L"textBoxNome";
			this->textBoxNome->Size = System::Drawing::Size(146, 22);
			this->textBoxNome->TabIndex = 5;
			// 
			// textBoxNPessoas
			// 
			this->textBoxNPessoas->Location = System::Drawing::Point(202, 83);
			this->textBoxNPessoas->Name = L"textBoxNPessoas";
			this->textBoxNPessoas->Size = System::Drawing::Size(43, 22);
			this->textBoxNPessoas->TabIndex = 6;
			// 
			// textBoxCustoHora
			// 
			this->textBoxCustoHora->Location = System::Drawing::Point(202, 119);
			this->textBoxCustoHora->Name = L"textBoxCustoHora";
			this->textBoxCustoHora->Size = System::Drawing::Size(43, 22);
			this->textBoxCustoHora->TabIndex = 7;
			// 
			// textBoxMaxHoras
			// 
			this->textBoxMaxHoras->Location = System::Drawing::Point(202, 153);
			this->textBoxMaxHoras->Name = L"textBoxMaxHoras";
			this->textBoxMaxHoras->Size = System::Drawing::Size(43, 22);
			this->textBoxMaxHoras->TabIndex = 8;
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(202, 184);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(146, 22);
			this->textBoxLogin->TabIndex = 9;
			// 
			// createUpdateButton
			// 
			this->createUpdateButton->Location = System::Drawing::Point(74, 233);
			this->createUpdateButton->Name = L"createUpdateButton";
			this->createUpdateButton->Size = System::Drawing::Size(146, 32);
			this->createUpdateButton->TabIndex = 10;
			this->createUpdateButton->Text = L"Criar / Atualizar";
			this->createUpdateButton->UseVisualStyleBackColor = true;
			this->createUpdateButton->Click += gcnew System::EventHandler(this, &CRUDEquipe::createUpdateButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(258, 235);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(76, 30);
			this->deleteButton->TabIndex = 12;
			this->deleteButton->Text = L"Remover";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &CRUDEquipe::deleteButton_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 280);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(424, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Para Remover uma Equipe unicamente o Nome dela é necessario";
			// 
			// CRUDEquipe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(426, 328);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->createUpdateButton);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->textBoxMaxHoras);
			this->Controls->Add(this->textBoxCustoHora);
			this->Controls->Add(this->textBoxNPessoas);
			this->Controls->Add(this->textBoxNome);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CRUDEquipe";
			this->Text = L"CRUD Equipe";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void createUpdateButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (this->nome == String::Empty) {
			this->textBoxNome->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->nPessoas == String::Empty) {
			this->textBoxNPessoas->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->custoHora == String::Empty) {
			this->textBoxCustoHora->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->maxHoras == String::Empty) {
			this->textBoxMaxHoras->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->login == String::Empty) {
			this->textBoxLogin->BackColor = System::Drawing::Color::Yellow;
		}
		if ((this->nome != String::Empty) & (this->nPessoas != String::Empty) & (this->custoHora != String::Empty) & (this->maxHoras != String::Empty) & (this->login != String::Empty)) {
			ControllerOS* controllerOS = new ControllerOS();
			std::string nome = msclr::interop::marshal_as<std::string>(this->nome);
			int nPessoas = std::stoi(msclr::interop::marshal_as<std::string>(this->nPessoas));
			int custoHora = std::stoi(msclr::interop::marshal_as<std::string>(this->custoHora));
			int maxHoras = std::stoi(msclr::interop::marshal_as<std::string>(this->maxHoras));
			std::string login = msclr::interop::marshal_as<std::string>(this->login);
			bool responseController;
			responseController = controllerOS->createUpdateEquipe(nome, nPessoas, custoHora, maxHoras, login);
			if (responseController == true) {
				this->Hide();
			}
		}
	}
	
	private: System::Void deleteButton_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (this->nome == String::Empty) {
			this->textBoxNome->BackColor = System::Drawing::Color::Yellow;
		}
		else {
			ControllerOS* controllerOS = new ControllerOS();
			std::string nome = msclr::interop::marshal_as<std::string>(this->nome);

			bool responseController;
			responseController = controllerOS->deleteEquipe(nome);
			if (responseController == true) {
				this->Hide();
			}
		}
	}
};
}
