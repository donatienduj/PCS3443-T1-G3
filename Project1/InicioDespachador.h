#pragma once
#include "ObrasMarcadas.h"
#include "ObrasPendentes.h"
#include "CRUD_Material.h"
#include "CRUDEquipe.h"
#include "CRUD_Equipamento.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sum�rio para InicioDespachador
	/// </summary>
	public ref class InicioDespachador : public System::Windows::Forms::Form
	{
	public:
		InicioDespachador(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o c�digo do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que est�o sendo usados.
		/// </summary>
		~InicioDespachador()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private:
		/// <summary>
		/// Vari�vel de designer necess�ria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necess�rio para suporte ao Designer - n�o modifique 
		/// o conte�do deste m�todo com o editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(199, 42);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Obras Pendentes";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &InicioDespachador::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(50, 42);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 38);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Obras Marcadas";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &InicioDespachador::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(287, 214);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 29);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Logout";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &InicioDespachador::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(50, 163);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(102, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"CRUD Equipes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &InicioDespachador::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(199, 104);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(102, 34);
			this->button5->TabIndex = 4;
			this->button5->Text = L"CRUD Equipamento";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &InicioDespachador::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(50, 104);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(102, 34);
			this->button6->TabIndex = 5;
			this->button6->Text = L"CRUD Material";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &InicioDespachador::button6_Click);
			// 
			// InicioDespachador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 254);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"InicioDespachador";
			this->Text = L"InicioDespachador";
			this->Load += gcnew System::EventHandler(this, &InicioDespachador::InicioDespachador_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void InicioDespachador_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		ObrasMarcadas^ caixa = gcnew ObrasMarcadas();
		caixa->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		ObrasPendentes^ caixa = gcnew ObrasPendentes();
		caixa->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		Close();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		CRUD_Material^ caixa = gcnew CRUD_Material();
		caixa->ShowDialog();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		CRUD_Equipamento^ caixa = gcnew CRUD_Equipamento();
		caixa->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		CRUDEquipe^ caixa = gcnew CRUDEquipe();
		caixa->ShowDialog();
	}
	};
}