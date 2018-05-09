#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para ObrasMarcadas
	/// </summary>
	public ref class ObrasMarcadas : public System::Windows::Forms::Form
	{
	public:
		ObrasMarcadas(void)
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
		~ObrasMarcadas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  Buraco;
	private: System::Windows::Forms::ColumnHeader^  Grupo;
	private: System::Windows::Forms::ColumnHeader^  Data;
	private: System::Windows::Forms::ColumnHeader^  Custo;
	private: System::Windows::Forms::ColumnHeader^  Ação;

	protected:

	protected:

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
			this->Buraco = (gcnew System::Windows::Forms::ColumnHeader());
			this->Grupo = (gcnew System::Windows::Forms::ColumnHeader());
			this->Data = (gcnew System::Windows::Forms::ColumnHeader());
			this->Custo = (gcnew System::Windows::Forms::ColumnHeader());
			this->Ação = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Buraco, this->Grupo,
					this->Data, this->Custo, this->Ação
			});
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(403, 334);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &ObrasMarcadas::listView1_SelectedIndexChanged);
			// 
			// Buraco
			// 
			this->Buraco->Text = L"Buraco";
			this->Buraco->Width = 77;
			// 
			// Grupo
			// 
			this->Grupo->Text = L"Grupo";
			this->Grupo->Width = 79;
			// 
			// Data
			// 
			this->Data->Text = L"Data*";
			this->Data->Width = 79;
			// 
			// Custo
			// 
			this->Custo->Text = L"Custo*";
			this->Custo->Width = 101;
			// 
			// Ação
			// 
			this->Ação->Text = L"Ação";
			// 
			// ObrasMarcadas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(427, 358);
			this->Controls->Add(this->listView1);
			this->Name = L"ObrasMarcadas";
			this->Text = L"ObrasMarcadas";
			this->Load += gcnew System::EventHandler(this, &ObrasMarcadas::ObrasMarcadas_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ObrasMarcadas_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
