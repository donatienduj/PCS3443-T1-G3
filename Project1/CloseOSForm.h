#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CloseOSForm
	/// </summary>
	public ref class CloseOSForm : public System::Windows::Forms::Form
	{
	public:
		CloseOSForm(void)
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
		~CloseOSForm()
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
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  OSNumbertextBox;
	private: System::Windows::Forms::TextBox^  HoursTextBox;
	private: System::Windows::Forms::TextBox^  MaterialTextBox;

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
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->OSNumbertextBox = (gcnew System::Windows::Forms::TextBox());
			this->HoursTextBox = (gcnew System::Windows::Forms::TextBox());
			this->MaterialTextBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(203, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N° da OS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(80, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Numero de horas de pessoal";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Quantitativo de material utilisada";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(142, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Data de finalizaçao";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(114, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Foto do buraco fechado";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(300, 164);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(169, 22);
			this->dateTimePicker1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(345, 283);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Validar a Finalizaçao";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// OSNumbertextBox
			// 
			this->OSNumbertextBox->Location = System::Drawing::Point(299, 44);
			this->OSNumbertextBox->Name = L"OSNumbertextBox";
			this->OSNumbertextBox->Size = System::Drawing::Size(169, 22);
			this->OSNumbertextBox->TabIndex = 7;
			// 
			// HoursTextBox
			// 
			this->HoursTextBox->Location = System::Drawing::Point(300, 83);
			this->HoursTextBox->Name = L"HoursTextBox";
			this->HoursTextBox->Size = System::Drawing::Size(168, 22);
			this->HoursTextBox->TabIndex = 8;
			// 
			// MaterialTextBox
			// 
			this->MaterialTextBox->Location = System::Drawing::Point(303, 122);
			this->MaterialTextBox->Name = L"MaterialTextBox";
			this->MaterialTextBox->Size = System::Drawing::Size(166, 22);
			this->MaterialTextBox->TabIndex = 9;
			// 
			// CloseOSForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 322);
			this->Controls->Add(this->MaterialTextBox);
			this->Controls->Add(this->HoursTextBox);
			this->Controls->Add(this->OSNumbertextBox);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"CloseOSForm";
			this->Text = L"Finalizar uma OS";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
