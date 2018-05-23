#pragma once

#include "RegionalMF.h"
#include "RegionalMR.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegionalMH
	/// </summary>
	public ref class RegionalMH : public System::Windows::Forms::Form
	{
	public:
		RegionalMH(void)
		{
			windowMF = gcnew RegionalMF();
			windowMR = gcnew RegionalMR();

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegionalMH()
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

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  Reparos;
	private: System::Windows::Forms::Label^  Finanças;
	private: System::Windows::Forms::Label^  Previsão;
	private: System::Windows::Forms::Label^  Gastos;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Label^  gastop;
	private: System::Windows::Forms::Label^  gastoA;
	private: static RegionalMF^ windowMF;
	private: static RegionalMR^ windowMR;





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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Reparos = (gcnew System::Windows::Forms::Label());
			this->Finanças = (gcnew System::Windows::Forms::Label());
			this->Previsão = (gcnew System::Windows::Forms::Label());
			this->Gastos = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->gastop = (gcnew System::Windows::Forms::Label());
			this->gastoA = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(4, 60);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(207, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Home";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(4, 137);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 46);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Finanças";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegionalMH::MFClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(4, 214);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(207, 46);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Reparos";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &RegionalMH::MRClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(220, 6);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(8, 769);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// Reparos
			// 
			this->Reparos->AutoSize = true;
			this->Reparos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Reparos->Location = System::Drawing::Point(315, 71);
			this->Reparos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Reparos->Name = L"Reparos";
			this->Reparos->Size = System::Drawing::Size(78, 22);
			this->Reparos->TabIndex = 5;
			this->Reparos->Text = L"Reparos";
			// 
			// Finanças
			// 
			this->Finanças->AutoSize = true;
			this->Finanças->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Finanças->Location = System::Drawing::Point(315, 335);
			this->Finanças->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Finanças->Name = L"Finanças";
			this->Finanças->Size = System::Drawing::Size(83, 22);
			this->Finanças->TabIndex = 6;
			this->Finanças->Text = L"Finanças";
			// 
			// Previsão
			// 
			this->Previsão->AutoSize = true;
			this->Previsão->Location = System::Drawing::Point(342, 383);
			this->Previsão->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Previsão->Name = L"Previsão";
			this->Previsão->Size = System::Drawing::Size(230, 20);
			this->Previsão->TabIndex = 7;
			this->Previsão->Text = L"Previsão de gastos (mês atual):";
			// 
			// Gastos
			// 
			this->Gastos->AutoSize = true;
			this->Gastos->Location = System::Drawing::Point(342, 423);
			this->Gastos->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Gastos->Name = L"Gastos";
			this->Gastos->Size = System::Drawing::Size(168, 20);
			this->Gastos->TabIndex = 8;
			this->Gastos->Text = L"Gasto até o momento:";
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(320, 111);
			this->listView1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(536, 201);
			this->listView1->TabIndex = 9;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// gastop
			// 
			this->gastop->AutoSize = true;
			this->gastop->Location = System::Drawing::Point(582, 383);
			this->gastop->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->gastop->Name = L"gastop";
			this->gastop->Size = System::Drawing::Size(18, 20);
			this->gastop->TabIndex = 10;
			this->gastop->Text = L"0";
			// 
			// gastoA
			// 
			this->gastoA->AutoSize = true;
			this->gastoA->Location = System::Drawing::Point(514, 423);
			this->gastoA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->gastoA->Name = L"gastoA";
			this->gastoA->Size = System::Drawing::Size(18, 20);
			this->gastoA->TabIndex = 11;
			this->gastoA->Text = L"0";
			// 
			// RegionalMH
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 777);
			this->Controls->Add(this->gastoA);
			this->Controls->Add(this->gastop);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->Gastos);
			this->Controls->Add(this->Previsão);
			this->Controls->Add(this->Finanças);
			this->Controls->Add(this->Reparos);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"RegionalMH";
			this->Text = L"RegionalMH";
			this->Load += gcnew System::EventHandler(this, &RegionalMH::RegionalMH_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MFClick(System::Object^  sender, System::EventArgs^  e)
	{
		this->Hide();
		windowMF->ShowDialog();

		if (windowMF->returnHome())
		{
			this->Show();
		}
		else
		{
			MRClick(sender, e);
		}
	}
	private: System::Void MRClick(System::Object^  sender, System::EventArgs^  e)
	{
		this->Hide();
		windowMR->ShowDialog();

		if (windowMR->returnHome())
		{
			this->Show();
		}
		else
		{
			MFClick(sender, e);
		}
	}
	private: System::Void RegionalMH_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}