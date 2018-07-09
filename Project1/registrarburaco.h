#pragma once
#include "ControllerOS.h"
#include <msclr\marshal_cppstd.h>
//#include "confirmacao.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para registrarburaco
	/// </summary>
	public ref class registrarburaco : public System::Windows::Forms::Form
	{
	public:
		registrarburaco(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}
		property String^ holeAddress {
			String^ get() {
				return textBoxAddress->Text;
			}
			void set(String^ osnumber) {
				textBoxAddress->Text = osnumber;
			}
		}
		property String^ holePosition {
			String^ get() {
				return textBoxPosition->Text;
			}
			void set(String^ osnumber) {
				textBoxPosition->Text = osnumber;
			}
		}
		property String^ holeSize {
			String^ get() {
				return textBoxSize->Text;
			}
			void set(String^ osnumber) {
				textBoxSize->Text = osnumber;
			}
		}
		property String^ holeCEP {
			String^ get() {
				return textBoxCEP->Text;
			}
			void set(String^ osnumber) {
				textBoxCEP->Text = osnumber;
			}
		}
		property String^ holeDate {
			String^ get() {
				return textBoxDate->Text;
			}
			void set(String^ osnumber) {
				textBoxDate->Text = osnumber;
			}
		}
		property String^ holeHour {
			String^ get() {
				return textBoxHour->Text;
			}
			void set(String^ osnumber) {
				textBoxHour->Text = osnumber;
			}
		}

		property String^ nomeCidadao {
			String^ get() {
				return textBoxNomeCidadao->Text;
			}
			void set(String^ nomeCidadao) {
				textBoxNomeCidadao->Text = nomeCidadao;
			}
		}

		property String^ contatoCidadao {
			String^ get() {
				return textBoxContatoCidadao->Text;
			}
			void set(String^ contatoCidadao) {
				textBoxContatoCidadao->Text = contatoCidadao;
			}
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~registrarburaco()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxPosition;
	protected:

	private: System::Windows::Forms::TextBox^  textBoxAddress;
	private: System::Windows::Forms::TextBox^  textBoxSize;
	protected:



	private: System::Windows::Forms::Button^  Validate;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBoxDate;

	private: System::Windows::Forms::TextBox^  textBoxCEP;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBoxHour;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBoxNomeCidadao;
	private: System::Windows::Forms::TextBox^  textBoxContatoCidadao;



	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxPosition = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSize = (gcnew System::Windows::Forms::TextBox());
			this->Validate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxDate = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCEP = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxHour = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxNomeCidadao = (gcnew System::Windows::Forms::TextBox());
			this->textBoxContatoCidadao = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBoxPosition
			// 
			this->textBoxPosition->Location = System::Drawing::Point(455, 64);
			this->textBoxPosition->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPosition->Name = L"textBoxPosition";
			this->textBoxPosition->Size = System::Drawing::Size(132, 22);
			this->textBoxPosition->TabIndex = 1;
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Location = System::Drawing::Point(56, 64);
			this->textBoxAddress->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(132, 22);
			this->textBoxAddress->TabIndex = 2;
			// 
			// textBoxSize
			// 
			this->textBoxSize->Location = System::Drawing::Point(253, 64);
			this->textBoxSize->Margin = System::Windows::Forms::Padding(4);
			this->textBoxSize->Name = L"textBoxSize";
			this->textBoxSize->Size = System::Drawing::Size(132, 22);
			this->textBoxSize->TabIndex = 3;
			// 
			// Validate
			// 
			this->Validate->Location = System::Drawing::Point(253, 312);
			this->Validate->Margin = System::Windows::Forms::Padding(4);
			this->Validate->Name = L"Validate";
			this->Validate->Size = System::Drawing::Size(133, 28);
			this->Validate->TabIndex = 5;
			this->Validate->Text = L"Registrar";
			this->Validate->UseVisualStyleBackColor = true;
			this->Validate->Click += gcnew System::EventHandler(this, &registrarburaco::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(451, 44);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Posição";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(249, 44);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Tamanho";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 44);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Endereço";
			// 
			// textBoxDate
			// 
			this->textBoxDate->Location = System::Drawing::Point(253, 135);
			this->textBoxDate->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDate->Name = L"textBoxDate";
			this->textBoxDate->Size = System::Drawing::Size(132, 22);
			this->textBoxDate->TabIndex = 9;
			// 
			// textBoxCEP
			// 
			this->textBoxCEP->Location = System::Drawing::Point(56, 135);
			this->textBoxCEP->Margin = System::Windows::Forms::Padding(4);
			this->textBoxCEP->Name = L"textBoxCEP";
			this->textBoxCEP->Size = System::Drawing::Size(132, 22);
			this->textBoxCEP->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 116);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"CEP";
			this->label4->Click += gcnew System::EventHandler(this, &registrarburaco::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(249, 116);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Data";
			// 
			// textBoxHour
			// 
			this->textBoxHour->Location = System::Drawing::Point(455, 135);
			this->textBoxHour->Margin = System::Windows::Forms::Padding(4);
			this->textBoxHour->Name = L"textBoxHour";
			this->textBoxHour->Size = System::Drawing::Size(132, 22);
			this->textBoxHour->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(451, 116);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Hora";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(455, 312);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 28);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Fechar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &registrarburaco::button3_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(53, 182);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Nome Cidadao";
			this->label7->Click += gcnew System::EventHandler(this, &registrarburaco::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(249, 182);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 17);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Contato";
			// 
			// textBoxNomeCidadao
			// 
			this->textBoxNomeCidadao->Location = System::Drawing::Point(55, 205);
			this->textBoxNomeCidadao->Name = L"textBoxNomeCidadao";
			this->textBoxNomeCidadao->Size = System::Drawing::Size(132, 22);
			this->textBoxNomeCidadao->TabIndex = 18;
			// 
			// textBoxContatoCidadao
			// 
			this->textBoxContatoCidadao->Location = System::Drawing::Point(252, 205);
			this->textBoxContatoCidadao->Name = L"textBoxContatoCidadao";
			this->textBoxContatoCidadao->Size = System::Drawing::Size(132, 22);
			this->textBoxContatoCidadao->TabIndex = 19;
			// 
			// registrarburaco
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 374);
			this->Controls->Add(this->textBoxContatoCidadao);
			this->Controls->Add(this->textBoxNomeCidadao);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBoxHour);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxCEP);
			this->Controls->Add(this->textBoxDate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Validate);
			this->Controls->Add(this->textBoxSize);
			this->Controls->Add(this->textBoxAddress);
			this->Controls->Add(this->textBoxPosition);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"registrarburaco";
			this->Text = L"registrarburaco";
			this->Load += gcnew System::EventHandler(this, &registrarburaco::registrarburaco_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registrarburaco_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->holeAddress == String::Empty) {
			this->textBoxAddress->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->holePosition == String::Empty) {
			this->textBoxPosition->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->holeSize == String::Empty) {
			this->textBoxSize->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->holeCEP == String::Empty) {
			this->textBoxCEP->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->holeDate == String::Empty) {
			this->textBoxDate->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->holeHour == String::Empty) {
			this->textBoxHour->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->nomeCidadao == String::Empty) {
			this->textBoxNomeCidadao->BackColor = System::Drawing::Color::Yellow;
		}
		if (this->contatoCidadao == String::Empty) {
			this->textBoxContatoCidadao->BackColor = System::Drawing::Color::Yellow;
		}
		if ((this->holeAddress != String::Empty) && (this->holeSize != String::Empty) && (this->holePosition != String::Empty) && (this->holeCEP != String::Empty) && (this->holeDate != String::Empty) && (this->holeHour != String::Empty)) {
			ControllerOS* controllerOS = new ControllerOS();
			std::string holeaddress = msclr::interop::marshal_as<std::string>(this->holeAddress);
			std::string holeposition = msclr::interop::marshal_as<std::string>(this->holePosition);
			int holesize = std::stoi(msclr::interop::marshal_as<std::string>(this->holeSize));
			std::string holecep = msclr::interop::marshal_as<std::string>(this->holeCEP);
			std::string holedate = msclr::interop::marshal_as<std::string>(this->holeDate);
			std::string holehour = msclr::interop::marshal_as<std::string>(this->holeHour);
			std::string nomeCidadao = msclr::interop::marshal_as<std::string>(this->nomeCidadao);
			std::string contatoCidadao = msclr::interop::marshal_as<std::string>(this->contatoCidadao);
			bool responseController;
			responseController = controllerOS->registerHole(holeaddress, holesize, holeposition, holecep, holedate, holehour, nomeCidadao, contatoCidadao);
			if (responseController == true) {
				this->Hide();
			}
		}
	}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
