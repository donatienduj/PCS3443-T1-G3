#pragma once

namespace Project1 {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class FinanceiroMain : public System::Windows::Forms::Form
	{
	public:
		FinanceiroMain(void)
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
		~FinanceiroMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Button^  button1;


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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(253, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(10, 919);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(3, 12);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(244, 919);
			this->treeView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(318, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 25);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Reparos finalizados:";
			// 
			// listView1
			// 
			this->listView1->Location = System::Drawing::Point(323, 156);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(669, 584);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(323, 801);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Fatura Mensal";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FinanceiroMain::FaturaClick);
			// 
			// FinanceiroMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1070, 943);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"FinanceiroMain";
			this->Text = L"FinanceiroMain";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void FaturaClick(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void LogoutClick(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}

