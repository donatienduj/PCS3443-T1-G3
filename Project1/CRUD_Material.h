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
	/// Summary for CRUD_Material
	/// </summary>
	public ref class CRUD_Material : public System::Windows::Forms::Form
	{
	public:
		CRUD_Material(void)
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
		property String^ custoUnidade {
			String^ get() {
				return textBoxCustoUnidade->Text;
			}
		}
		property String^ unidade {
			String^ get() {
				return textBoxUnidade->Text;
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CRUD_Material()
		{
			if (components)
			{
				delete components;
			}

		}
	private: System::Windows::Forms::TextBox^  textBoxNome;
	private: System::Windows::Forms::TextBox^  textBoxTipo;
	private: System::Windows::Forms::TextBox^  textBoxCustoUnidade;

	private: System::Windows::Forms::TextBox^  textBoxUnidade;
	protected:

	protected:



	private: System::Windows::Forms::Button^  createUpdateButton;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  deleteButton;
	private: System::Windows::Forms::Label^  label5;

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
			this->textBoxNome = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTipo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCustoUnidade = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUnidade = (gcnew System::Windows::Forms::TextBox());
			this->createUpdateButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxNome
			// 
			this->textBoxNome->Location = System::Drawing::Point(239, 53);
			this->textBoxNome->Margin = System::Windows::Forms::Padding(4);
			this->textBoxNome->Name = L"textBoxNome";
			this->textBoxNome->Size = System::Drawing::Size(132, 22);
			this->textBoxNome->TabIndex = 0;
			// 
			// textBoxTipo
			// 
			this->textBoxTipo->Location = System::Drawing::Point(239, 99);
			this->textBoxTipo->Margin = System::Windows::Forms::Padding(4);
			this->textBoxTipo->Name = L"textBoxTipo";
			this->textBoxTipo->Size = System::Drawing::Size(132, 22);
			this->textBoxTipo->TabIndex = 1;
			// 
			// textBoxCustoUnidade
			// 
			this->textBoxCustoUnidade->Location = System::Drawing::Point(239, 132);
			this->textBoxCustoUnidade->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCustoUnidade->Name = L"textBoxCustoUnidade";
			this->textBoxCustoUnidade->Size = System::Drawing::Size(39, 22);
			this->textBoxCustoUnidade->TabIndex = 2;
			// 
			// textBoxUnidade
			// 
			this->textBoxUnidade->Location = System::Drawing::Point(239, 170);
			this->textBoxUnidade->Margin = System::Windows::Forms::Padding(4);
			this->textBoxUnidade->Name = L"textBoxUnidade";
			this->textBoxUnidade->Size = System::Drawing::Size(132, 22);
			this->textBoxUnidade->TabIndex = 3;
			// 
			// createUpdateButton
			// 
			this->createUpdateButton->Location = System::Drawing::Point(100, 214);
			this->createUpdateButton->Margin = System::Windows::Forms::Padding(4);
			this->createUpdateButton->Name = L"createUpdateButton";
			this->createUpdateButton->Size = System::Drawing::Size(115, 50);
			this->createUpdateButton->TabIndex = 4;
			this->createUpdateButton->Text = L"Criar / Atualizar";
			this->createUpdateButton->UseVisualStyleBackColor = true;
			this->createUpdateButton->Click += gcnew System::EventHandler(this, &CRUD_Material::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(113, 99);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Tipo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(113, 53);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Nome";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 135);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Custo Unidade";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(97, 170);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Unidade";
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(249, 214);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(112, 50);
			this->deleteButton->TabIndex = 9;
			this->deleteButton->Text = L"Remover";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &CRUD_Material::deleteButton_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 281);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(355, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Para Remover, precisa unicamente o nome do Material";
			// 
			// CRUD_Material
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 331);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->createUpdateButton);
			this->Controls->Add(this->textBoxUnidade);
			this->Controls->Add(this->textBoxCustoUnidade);
			this->Controls->Add(this->textBoxTipo);
			this->Controls->Add(this->textBoxNome);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CRUD_Material";
			this->Text = L"CRUD_Material";
			this->Load += gcnew System::EventHandler(this, &CRUD_Material::CRUD_Material_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CRUD_Material_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->nome == String::Empty) {
			this->textBoxNome->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->tipo == String::Empty) {
			this->textBoxTipo->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->custoUnidade == String::Empty) {
			this->textBoxCustoUnidade->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->unidade == String::Empty) {
			this->textBoxUnidade->BackColor = System::Drawing::Color::Yellow;
		}
		if ((this->nome != String::Empty) & (this->tipo != String::Empty) & (this->custoUnidade != String::Empty) & (this->unidade != String::Empty)) {
			ControllerOS* controllerOS = new ControllerOS();
			std::string tipo = msclr::interop::marshal_as<std::string>(this->tipo);
			std::string nome = msclr::interop::marshal_as<std::string>(this->nome);
			int custoUnidade = std::stoi(msclr::interop::marshal_as<std::string>(this->custoUnidade));
			std::string unidade = msclr::interop::marshal_as<std::string>(this->unidade);
			bool responseController;
			responseController = controllerOS->createUpdateMaterial(nome, tipo, custoUnidade, unidade);
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
		if ((this->nome != String::Empty) & (this->tipo != String::Empty) & (this->custoUnidade != String::Empty) & (this->unidade != String::Empty)) {
			ControllerOS* controllerOS = new ControllerOS();
			std::string tipo = msclr::interop::marshal_as<std::string>(this->tipo);
			std::string nome = msclr::interop::marshal_as<std::string>(this->nome);
			int custoUnidade = std::stoi(msclr::interop::marshal_as<std::string>(this->custoUnidade));
			std::string unidade = msclr::interop::marshal_as<std::string>(this->unidade);
			bool responseController;
			responseController = controllerOS->deleteMaterial(nome);
			if (responseController == true) {
				this->Hide();
			}
		}
	}
};
}
