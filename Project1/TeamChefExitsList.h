#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeamChefExitsList
	/// </summary>
	public ref class TeamChefExitsList : public System::Windows::Forms::Form
	{
	public:
		TeamChefExitsList(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeamChefExitsList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:




	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  OsNumberColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  localisationColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  estimatedHoursColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  estimatedMaterialColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CloseOSColumn;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  exitNumberColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dateColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NumberOSColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  SeeOSColumn;

	private:
		/// <summary>
		/// Required designer variablef
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->OsNumberColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->localisationColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estimatedHoursColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->estimatedMaterialColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CloseOSColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->exitNumberColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumberOSColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SeeOSColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->exitNumberColumn,
					this->dateColumn, this->NumberOSColumn, this->SeeOSColumn
			});
			this->dataGridView1->Location = System::Drawing::Point(51, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(443, 567);
			this->dataGridView1->TabIndex = 0;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->OsNumberColumn,
					this->localisationColumn, this->estimatedHoursColumn, this->estimatedMaterialColumn, this->CloseOSColumn
			});
			this->dataGridView2->Location = System::Drawing::Point(530, 193);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(543, 481);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeamChefExitsList::dataGridView2_CellContentClick);
			// 
			// OsNumberColumn
			// 
			this->OsNumberColumn->HeaderText = L"N° da OS";
			this->OsNumberColumn->Name = L"OsNumberColumn";
			// 
			// localisationColumn
			// 
			this->localisationColumn->HeaderText = L"Localizaçao";
			this->localisationColumn->Name = L"localisationColumn";
			// 
			// estimatedHoursColumn
			// 
			this->estimatedHoursColumn->HeaderText = L"N° de horas estimadas";
			this->estimatedHoursColumn->Name = L"estimatedHoursColumn";
			// 
			// estimatedMaterialColumn
			// 
			this->estimatedMaterialColumn->HeaderText = L"quantitativo de material estimada";
			this->estimatedMaterialColumn->Name = L"estimatedMaterialColumn";
			// 
			// CloseOSColumn
			// 
			this->CloseOSColumn->HeaderText = L"Finalizar a OS";
			this->CloseOSColumn->Name = L"CloseOSColumn";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::World, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(343, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(393, 33);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Lista das Saidas da Equipe";
			this->label1->Click += gcnew System::EventHandler(this, &TeamChefExitsList::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(704, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(196, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"As OS da Saida";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->UseMnemonic = false;
			// 
			// exitNumberColumn
			// 
			this->exitNumberColumn->HeaderText = L"N° da Saida";
			this->exitNumberColumn->Name = L"exitNumberColumn";
			// 
			// dateColumn
			// 
			this->dateColumn->HeaderText = L"Data";
			this->dateColumn->Name = L"dateColumn";
			this->dateColumn->ReadOnly = true;
			// 
			// NumberOSColumn
			// 
			this->NumberOSColumn->HeaderText = L"Numero de OS da Saida";
			this->NumberOSColumn->Name = L"NumberOSColumn";
			// 
			// SeeOSColumn
			// 
			this->SeeOSColumn->HeaderText = L"Ver as OS";
			this->SeeOSColumn->Name = L"SeeOSColumn";
			// 
			// TeamChefExitsList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1105, 699);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"TeamChefExitsList";
			this->Text = L"Lista das Saidas";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	};
}
