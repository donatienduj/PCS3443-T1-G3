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
	/// Summary for CRUD_Equipamento
	/// </summary>
	public ref class CRUD_Equipamento : public System::Windows::Forms::Form
	{
	public:

		CRUD_Equipamento(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		property String^ tipo {
			String^ get() {
				return textBoxTipo->Text;
			}
		}
		property String^ nome {
			String^ get() {
				return textBoxNome->Text;
			}
		}
		property String^ custoHora {
			String^ get() {
				return textBoxCustoHora->Text;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CRUD_Equipamento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxCustoHora;
	protected:


	private: System::Windows::Forms::TextBox^  textBoxNome;
	private: System::Windows::Forms::TextBox^  textBoxTipo;
	protected:


	private: System::Windows::Forms::Button^  createUpdateButton;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  removerButton;
	private: System::Windows::Forms::Label^  label1;

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
			this->textBoxCustoHora = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNome = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTipo = (gcnew System::Windows::Forms::TextBox());
			this->createUpdateButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->removerButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxCustoHora
			// 
			this->textBoxCustoHora->Location = System::Drawing::Point(245, 131);
			this->textBoxCustoHora->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCustoHora->Name = L"textBoxCustoHora";
			this->textBoxCustoHora->Size = System::Drawing::Size(42, 22);
			this->textBoxCustoHora->TabIndex = 0;
			// 
			// textBoxNome
			// 
			this->textBoxNome->Location = System::Drawing::Point(245, 58);
			this->textBoxNome->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNome->Name = L"textBoxNome";
			this->textBoxNome->Size = System::Drawing::Size(132, 22);
			this->textBoxNome->TabIndex = 1;
			// 
			// textBoxTipo
			// 
			this->textBoxTipo->Location = System::Drawing::Point(245, 97);
			this->textBoxTipo->Margin = System::Windows::Forms::Padding(4);
			this->textBoxTipo->Name = L"textBoxTipo";
			this->textBoxTipo->Size = System::Drawing::Size(132, 22);
			this->textBoxTipo->TabIndex = 2;
			// 
			// createUpdateButton
			// 
			this->createUpdateButton->Location = System::Drawing::Point(71, 198);
			this->createUpdateButton->Margin = System::Windows::Forms::Padding(4);
			this->createUpdateButton->Name = L"createUpdateButton";
			this->createUpdateButton->Size = System::Drawing::Size(129, 42);
			this->createUpdateButton->TabIndex = 4;
			this->createUpdateButton->Text = L"Criar / Atualizar";
			this->createUpdateButton->UseVisualStyleBackColor = true;
			this->createUpdateButton->Click += gcnew System::EventHandler(this, &CRUD_Equipamento::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(141, 97);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Tipo";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(132, 61);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Nome";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(98, 131);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Custo Hora";
			this->label4->Click += gcnew System::EventHandler(this, &CRUD_Equipamento::label4_Click);
			// 
			// removerButton
			// 
			this->removerButton->Location = System::Drawing::Point(232, 198);
			this->removerButton->Name = L"removerButton";
			this->removerButton->Size = System::Drawing::Size(118, 42);
			this->removerButton->TabIndex = 9;
			this->removerButton->Text = L"Remover";
			this->removerButton->UseVisualStyleBackColor = true;
			this->removerButton->Click += gcnew System::EventHandler(this, &CRUD_Equipamento::removerButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(388, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Para Remover, precisa unicamente o nome do Equipamento";
			// 
			// CRUD_Equipamento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(413, 321);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->removerButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->createUpdateButton);
			this->Controls->Add(this->textBoxTipo);
			this->Controls->Add(this->textBoxNome);
			this->Controls->Add(this->textBoxCustoHora);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CRUD_Equipamento";
			this->Text = L"CRUD_Equipamento";
			this->Load += gcnew System::EventHandler(this, &CRUD_Equipamento::CRUD_Equipamento_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void CRUD_Equipamento_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->nome == String::Empty) {
			this->textBoxNome->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->tipo == String::Empty) {
			this->textBoxTipo->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->custoHora == String::Empty) {
			this->textBoxCustoHora->BackColor = System::Drawing::Color::Yellow;
		}
		if ((this->nome != String::Empty) & (this->tipo != String::Empty) & (this->custoHora != String::Empty)) {
			ControllerOS* controllerOS = new ControllerOS();
			std::string tipo = msclr::interop::marshal_as<std::string>(this->tipo);
			std::string nome = msclr::interop::marshal_as<std::string>(this->nome);
			int custoHora = std::stoi(msclr::interop::marshal_as<std::string>(this->custoHora));
			bool responseController;
			responseController = controllerOS->createUpdateEquipamento(nome, tipo, custoHora);
			if (responseController == true) {
				this->Hide();
			}
		}
		
	}
	private: System::Void removerButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->nome == String::Empty) {
			this->textBoxNome->BackColor = System::Drawing::Color::Yellow;
		}
		if ((this->nome != String::Empty) & (this->tipo != String::Empty) & (this->custoHora != String::Empty)) {
			ControllerOS* controllerOS = new ControllerOS();
			std::string nome = msclr::interop::marshal_as<std::string>(this->nome);
			bool responseController;
			responseController = controllerOS->deleteEquipamento(nome);
			if (responseController == true) {
				this->Hide();
			}
		}
	}
};
}

