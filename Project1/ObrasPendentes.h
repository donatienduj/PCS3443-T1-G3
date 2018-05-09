#pragma once
#include "ConfirmacaoOSS.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para ObrasPendentes
	/// </summary>
	public ref class ObrasPendentes : public System::Windows::Forms::Form
	{
	public:
		ObrasPendentes(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~ObrasPendentes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  Prioridade;
	private: System::Windows::Forms::ColumnHeader^  Numero;
	private: System::Windows::Forms::ColumnHeader^  Buraco;
	private: System::Windows::Forms::ColumnHeader^  Pessoas;
	private: System::Windows::Forms::ColumnHeader^  Custo;
	private: System::Windows::Forms::ColumnHeader^  Horas;
	private: System::Windows::Forms::ColumnHeader^  Detalhes;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ColumnHeader^  Nome;
	private: System::Windows::Forms::ColumnHeader^  numeropessoas;
	private: System::Windows::Forms::ColumnHeader^  custohora;
	private: System::Windows::Forms::ColumnHeader^  data;
	private: System::Windows::Forms::ColumnHeader^  detalhesequipes;
	protected:

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Prioridade = (gcnew System::Windows::Forms::ColumnHeader());
			this->Numero = (gcnew System::Windows::Forms::ColumnHeader());
			this->Buraco = (gcnew System::Windows::Forms::ColumnHeader());
			this->Pessoas = (gcnew System::Windows::Forms::ColumnHeader());
			this->Custo = (gcnew System::Windows::Forms::ColumnHeader());
			this->Horas = (gcnew System::Windows::Forms::ColumnHeader());
			this->Detalhes = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Nome = (gcnew System::Windows::Forms::ColumnHeader());
			this->numeropessoas = (gcnew System::Windows::Forms::ColumnHeader());
			this->custohora = (gcnew System::Windows::Forms::ColumnHeader());
			this->data = (gcnew System::Windows::Forms::ColumnHeader());
			this->detalhesequipes = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(7) {
				this->Prioridade, this->Numero,
					this->Buraco, this->Pessoas, this->Custo, this->Horas, this->Detalhes
			});
			this->listView1->Location = System::Drawing::Point(0, 34);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(769, 196);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// listView2
			// 
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Nome, this->numeropessoas,
					this->custohora, this->data, this->detalhesequipes
			});
			this->listView2->Location = System::Drawing::Point(0, 269);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(769, 196);
			this->listView2->TabIndex = 1;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(622, 471);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Linkar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ObrasPendentes::button1_Click);
			// 
			// Prioridade
			// 
			this->Prioridade->Text = L"Prioridade";
			this->Prioridade->Width = 89;
			// 
			// Numero
			// 
			this->Numero->Text = L"Numero";
			this->Numero->Width = 78;
			// 
			// Buraco
			// 
			this->Buraco->Text = L"Buraco";
			this->Buraco->Width = 110;
			// 
			// Pessoas
			// 
			this->Pessoas->Text = L"Est. Pessoas";
			this->Pessoas->Width = 99;
			// 
			// Custo
			// 
			this->Custo->Text = L"Est. Custo";
			this->Custo->Width = 126;
			// 
			// Horas
			// 
			this->Horas->Text = L"Est. Horas";
			this->Horas->Width = 96;
			// 
			// Detalhes
			// 
			this->Detalhes->Text = L"Detalhes";
			this->Detalhes->Width = 99;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ORDENS DE SERVIÇO";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"EQUIPES";
			this->label2->Click += gcnew System::EventHandler(this, &ObrasPendentes::label2_Click);
			// 
			// Nome
			// 
			this->Nome->Text = L"Nome";
			this->Nome->Width = 138;
			// 
			// numeropessoas
			// 
			this->numeropessoas->Text = L"N Profissionais";
			this->numeropessoas->Width = 119;
			// 
			// custohora
			// 
			this->custohora->Text = L"Custo/Hora";
			this->custohora->Width = 100;
			// 
			// data
			// 
			this->data->Text = L"Data de Disponiilidade";
			this->data->Width = 168;
			// 
			// detalhesequipes
			// 
			this->detalhesequipes->Text = L"Detalhes";
			this->detalhesequipes->Width = 95;
			// 
			// ObrasPendentes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 524);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
			this->Name = L"ObrasPendentes";
			this->Text = L"ObrasPendentes";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	ConfirmacaoOSS^ caixa = gcnew ConfirmacaoOSS();
	caixa->ShowDialog();
}
};
}
