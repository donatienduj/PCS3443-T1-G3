#pragma once
#include "TeamChefExitsList.h"
#include "CloseOsForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeamChefMainForm
	/// </summary>
	public ref class TeamChefMainForm : public System::Windows::Forms::Form
	{
	public:
		TeamChefMainForm(void)
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
		~TeamChefMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(42, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(198, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ver as Saídas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TeamChefMainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(41, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Finalisar uma OS";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TeamChefMainForm::button2_Click);
			// 
			// TeamChefMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 196);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"TeamChefMainForm";
			this->Text = L"Menu do Chefe da Equipe";
			this->Load += gcnew System::EventHandler(this, &TeamChefMainForm::TeamChefMainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		TeamChefExitsList^ exitsList = gcnew TeamChefExitsList();
		exitsList->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		CloseOSForm^ closeOsForm = gcnew CloseOSForm();
		closeOsForm->ShowDialog();
	}
	private: System::Void TeamChefMainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
