#pragma once

namespace TictacToegame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ b11;
	private: System::Windows::Forms::Button^ b33;



	private: System::Windows::Forms::Button^ b32;

	private: System::Windows::Forms::Button^ b31;

	private: System::Windows::Forms::Button^ b23;

	private: System::Windows::Forms::Button^ b22;

	private: System::Windows::Forms::Button^ b21;

	private: System::Windows::Forms::Button^ b13;

	private: System::Windows::Forms::Button^ b12;
	private: System::Windows::Forms::Button^ b_circle;

	private: System::Windows::Forms::Button^ b_croos;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;





















	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->b33 = (gcnew System::Windows::Forms::Button());
			this->b32 = (gcnew System::Windows::Forms::Button());
			this->b31 = (gcnew System::Windows::Forms::Button());
			this->b23 = (gcnew System::Windows::Forms::Button());
			this->b22 = (gcnew System::Windows::Forms::Button());
			this->b21 = (gcnew System::Windows::Forms::Button());
			this->b13 = (gcnew System::Windows::Forms::Button());
			this->b12 = (gcnew System::Windows::Forms::Button());
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->b_circle = (gcnew System::Windows::Forms::Button());
			this->b_croos = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33334F)));
			this->tableLayoutPanel1->Controls->Add(this->b33, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->b32, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->b31, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->b23, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->b22, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->b21, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->b13, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->b12, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->b11, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 12);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(363, 341);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// b33
			// 
			this->b33->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b33->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b33->Location = System::Drawing::Point(241, 226);
			this->b33->Margin = System::Windows::Forms::Padding(0);
			this->b33->Name = L"b33";
			this->b33->Size = System::Drawing::Size(122, 115);
			this->b33->TabIndex = 9;
			this->b33->UseVisualStyleBackColor = false;
			this->b33->Click += gcnew System::EventHandler(this, &MyForm::b33_Click);
			// 
			// b32
			// 
			this->b32->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b32->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b32->Location = System::Drawing::Point(120, 226);
			this->b32->Margin = System::Windows::Forms::Padding(0);
			this->b32->Name = L"b32";
			this->b32->Size = System::Drawing::Size(121, 115);
			this->b32->TabIndex = 8;
			this->b32->UseVisualStyleBackColor = false;
			this->b32->Click += gcnew System::EventHandler(this, &MyForm::b32_Click);
			// 
			// b31
			// 
			this->b31->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b31->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b31->Location = System::Drawing::Point(0, 226);
			this->b31->Margin = System::Windows::Forms::Padding(0);
			this->b31->Name = L"b31";
			this->b31->Size = System::Drawing::Size(120, 115);
			this->b31->TabIndex = 7;
			this->b31->UseVisualStyleBackColor = false;
			this->b31->Click += gcnew System::EventHandler(this, &MyForm::b31_Click);
			// 
			// b23
			// 
			this->b23->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b23->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b23->Location = System::Drawing::Point(241, 113);
			this->b23->Margin = System::Windows::Forms::Padding(0);
			this->b23->Name = L"b23";
			this->b23->Size = System::Drawing::Size(122, 113);
			this->b23->TabIndex = 6;
			this->b23->UseVisualStyleBackColor = false;
			this->b23->Click += gcnew System::EventHandler(this, &MyForm::b23_Click);
			// 
			// b22
			// 
			this->b22->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b22->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b22->Location = System::Drawing::Point(120, 113);
			this->b22->Margin = System::Windows::Forms::Padding(0);
			this->b22->Name = L"b22";
			this->b22->Size = System::Drawing::Size(121, 113);
			this->b22->TabIndex = 5;
			this->b22->UseVisualStyleBackColor = false;
			this->b22->Click += gcnew System::EventHandler(this, &MyForm::b22_Click);
			// 
			// b21
			// 
			this->b21->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b21->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b21->Location = System::Drawing::Point(0, 113);
			this->b21->Margin = System::Windows::Forms::Padding(0);
			this->b21->Name = L"b21";
			this->b21->Size = System::Drawing::Size(120, 113);
			this->b21->TabIndex = 4;
			this->b21->UseVisualStyleBackColor = false;
			this->b21->Click += gcnew System::EventHandler(this, &MyForm::b21_Click);
			// 
			// b13
			// 
			this->b13->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b13->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b13->Location = System::Drawing::Point(241, 0);
			this->b13->Margin = System::Windows::Forms::Padding(0);
			this->b13->Name = L"b13";
			this->b13->Size = System::Drawing::Size(122, 113);
			this->b13->TabIndex = 3;
			this->b13->UseVisualStyleBackColor = false;
			this->b13->Click += gcnew System::EventHandler(this, &MyForm::b13_Click);
			// 
			// b12
			// 
			this->b12->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b12->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b12->Location = System::Drawing::Point(120, 0);
			this->b12->Margin = System::Windows::Forms::Padding(0);
			this->b12->Name = L"b12";
			this->b12->Size = System::Drawing::Size(121, 113);
			this->b12->TabIndex = 2;
			this->b12->UseVisualStyleBackColor = false;
			this->b12->Click += gcnew System::EventHandler(this, &MyForm::b12_Click);
			// 
			// b11
			// 
			this->b11->BackColor = System::Drawing::Color::WhiteSmoke;
			this->b11->Font = (gcnew System::Drawing::Font(L"MV Boli", 62, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b11->Location = System::Drawing::Point(0, 0);
			this->b11->Margin = System::Windows::Forms::Padding(0);
			this->b11->Name = L"b11";
			this->b11->Size = System::Drawing::Size(120, 113);
			this->b11->TabIndex = 1;
			this->b11->UseVisualStyleBackColor = false;
			this->b11->Click += gcnew System::EventHandler(this, &MyForm::b11_Click);
			// 
			// b_circle
			// 
			this->b_circle->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_circle->Location = System::Drawing::Point(6, 291);
			this->b_circle->Name = L"b_circle";
			this->b_circle->Size = System::Drawing::Size(60, 50);
			this->b_circle->TabIndex = 1;
			this->b_circle->Text = L"O";
			this->b_circle->UseVisualStyleBackColor = true;
			this->b_circle->Click += gcnew System::EventHandler(this, &MyForm::b_circle_Click);
			// 
			// b_croos
			// 
			this->b_croos->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_croos->Location = System::Drawing::Point(6, 234);
			this->b_croos->Name = L"b_croos";
			this->b_croos->Size = System::Drawing::Size(60, 51);
			this->b_croos->TabIndex = 2;
			this->b_croos->Text = L"X";
			this->b_croos->UseVisualStyleBackColor = true;
			this->b_croos->Click += gcnew System::EventHandler(this, &MyForm::b_croos_Click);
			// 
			// clear
			// 
			this->clear->Location = System::Drawing::Point(6, 203);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(60, 23);
			this->clear->TabIndex = 3;
			this->clear->Text = L"clear";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(60, 21);
			this->button1->TabIndex = 4;
			this->button1->Text = L"check";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->b_croos);
			this->groupBox1->Controls->Add(this->clear);
			this->groupBox1->Controls->Add(this->b_circle);
			this->groupBox1->Location = System::Drawing::Point(441, 6);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(72, 347);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Debugger";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 361);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ti Tac Toe v2";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") //hide console window
		bool WhatSimvol;


		int setCross(String^ a)
		{
			if (WhatSimvol == 0)
			{
				//
			}

			return 0;
		}

		// for draw
		int countNine = 0;
		bool ifWon = 0;

		int drawChecking()
		{
			if (countNine == 10 && ifWon == 0)
			{
				MessageBox::Show("Draw ! XD", "Msg");
				clearAll();
			}

			return 0;
		}

	private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
				 //=============================================================================
	private: System::Void b22_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b22->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b22->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();
	}
	private: System::Void b12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b12->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b12->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();
	}
	private: System::Void b13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b13->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b13->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();
	}
	private: System::Void b21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b21->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b21->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();
	}
	private: System::Void b23_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b23->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b23->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();
	}
	private: System::Void b31_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b31->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b31->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();
	}
	private: System::Void b32_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b32->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b32->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();
	}
	private: System::Void b33_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b33->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b33->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();
	}
	private: System::Void b11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b11->Text = "X";
		}
		else if (WhatSimvol == 0)
		{
			b11->Text = "O";
		}

		winChecking();
		countNine++;
		drawChecking();

		// draw checking
		countNine++;
	}
				 //=============================================================================
	private: System::Void b_circle_Click(System::Object^ sender, System::EventArgs^ e) {
		WhatSimvol = 0;
	}
	private: System::Void b_croos_Click(System::Object^ sender, System::EventArgs^ e) {
		WhatSimvol = 1;
	}
				 //=============================================================================
				 void clearAll()
				 {
					 b11->Text = " ";
					 b12->Text = " ";
					 b13->Text = " ";

					 b21->Text = " ";
					 b22->Text = " ";
					 b23->Text = " ";

					 b31->Text = " ";
					 b32->Text = " ";
					 b33->Text = " ";

					 b11->BackColor = Color::WhiteSmoke;
					 b12->BackColor = Color::WhiteSmoke;
					 b13->BackColor = Color::WhiteSmoke;

					 b21->BackColor = Color::WhiteSmoke;
					 b22->BackColor = Color::WhiteSmoke;
					 b23->BackColor = Color::WhiteSmoke;

					 b31->BackColor = Color::WhiteSmoke;
					 b32->BackColor = Color::WhiteSmoke;
					 b33->BackColor = Color::WhiteSmoke;

					 ifWon = 0;
					 // remove if u want see bag
					 countNine = 0;

				 }
	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		clearAll();

		//MessageBox::Show("Clear !", "Msg");
	}

				 // If win, MAIN FUNCTION !!! =======================================================================================================
				 bool win = 0;

				 int winChecking()
				 {
					 // BLUE lines ======================================================
					 if (b11->Text == "X" && b12->Text == "X" && b13->Text == "X" || b11->Text == "O" && b12->Text == "O" && b13->Text == "O")
					 {
						 b31->Text == "X" && b32->Text == "X" && b33->Text == "X";
						 b11->Text == "X" && b21->Text == "X" && b31->Text == "X";
						 b13->Text == "X" && b23->Text == "X" && b33->Text == "X";
						 b12->Text == "X" && b22->Text == "X" && b32->Text == "X";
						 b21->Text == "X" && b22->Text == "X" && b23->Text == "X";
					   b11->Text == "X" && b22->Text == "X" && b33->Text == "X";
						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b12->BackColor = Color::FromArgb(0, 210, 230);
						 b13->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Crosses win !", "Msg");
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b31->Text == "X" && b32->Text == "X" && b33->Text == "X" || b31->Text == "O" && b32->Text == "O" && b33->Text == "O")
					 {
						 b31->Text == "X" && b32->Text == "X" && b33->Text == "X";
						 b11->Text == "X" && b21->Text == "X" && b31->Text == "X";
						 b13->Text == "X" && b23->Text == "X" && b33->Text == "X";
						 b12->Text == "X" && b22->Text == "X" && b32->Text == "X";
						 b21->Text == "X" && b22->Text == "X" && b23->Text == "X";
					   b11->Text == "X" && b22->Text == "X" && b33->Text == "X";
						 b31->BackColor = Color::FromArgb(0, 210, 230);
						 b32->BackColor = Color::FromArgb(0, 210, 230);
						 b33->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Crosses win !", "Msg");
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b11->Text == "X" && b21->Text == "X" && b31->Text == "X" || b11->Text == "O" && b21->Text == "O" && b31->Text == "O")
					 {
						 b31->Text == "X" && b32->Text == "X" && b33->Text == "X";
						 b11->Text == "X" && b21->Text == "X" && b31->Text == "X";
						 b13->Text == "X" && b23->Text == "X" && b33->Text == "X";
						 b12->Text == "X" && b22->Text == "X" && b32->Text == "X";
						 b21->Text == "X" && b22->Text == "X" && b23->Text == "X";
						 b11->Text == "X" && b22->Text == "X" && b33->Text == "X";

						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b21->BackColor = Color::FromArgb(0, 210, 230);
						 b31->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Crosses win !", "Msg");
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b13->Text == "X" && b23->Text == "X" && b33->Text == "X" || b13->Text == "O" && b23->Text == "O" && b33->Text == "O")
					 {
						 b31->Text == "X" && b32->Text == "X" && b33->Text == "X";
						 b11->Text == "X" && b21->Text == "X" && b31->Text == "X";
						 b13->Text == "X" && b23->Text == "X" && b33->Text == "X";
						 b12->Text == "X" && b22->Text == "X" && b32->Text == "X";
						 b21->Text == "X" && b22->Text == "X" && b23->Text == "X";
						 b11->Text == "X" && b22->Text == "X" && b33->Text == "X";

						 b13->BackColor = Color::FromArgb(0, 210, 230);
						 b23->BackColor = Color::FromArgb(0, 210, 230);
						 b33->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Crosses win !", "Msg");
						 ifWon = 1;
						 clearAll();

					 }
					 // RED lines ======================================================
					 else if (b12->Text == "X" && b22->Text == "X" && b32->Text == "X" || b12->Text == "O" && b22->Text == "O" && b32->Text == "O")
					 {
						 b31->Text == "X" && b32->Text == "X" && b33->Text == "X";
						 b11->Text == "X" && b21->Text == "X" && b31->Text == "X";
						 b13->Text == "X" && b23->Text == "X" && b33->Text == "X";
						 b12->Text == "X" && b22->Text == "X" && b32->Text == "X";
						 b21->Text == "X" && b22->Text == "X" && b23->Text == "X";
						 b11->Text == "X" && b22->Text == "X" && b33->Text == "X";

						 b12->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b32->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Crosses win !", "Msg");
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b21->Text == "X" && b22->Text == "X" && b23->Text == "X" || b21->Text == "O" && b22->Text == "O" && b23->Text == "O")
					 {
						 b31->Text == "X" && b32->Text == "X" && b33->Text == "X";
						 b11->Text == "X" && b21->Text == "X" && b31->Text == "X";
						 b13->Text == "X" && b23->Text == "X" && b33->Text == "X";
						 b12->Text == "X" && b22->Text == "X" && b32->Text == "X";
						 b21->Text == "X" && b22->Text == "X" && b23->Text == "X";
						 b11->Text == "X" && b22->Text == "X" && b33->Text == "X";

						 b21->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b23->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Crosses win !", "Msg");
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b11->Text == "X" && b22->Text == "X" && b33->Text == "X" || b11->Text == "O" && b22->Text == "O" && b33->Text == "O")
					 {
						 b31->Text == "X" && b32->Text == "X" && b33->Text == "X";
						 b11->Text == "X" && b21->Text == "X" && b31->Text == "X";
						 b13->Text == "X" && b23->Text == "X" && b33->Text == "X";
						 b12->Text == "X" && b22->Text == "X" && b32->Text == "X";
						 b21->Text == "X" && b22->Text == "X" && b23->Text == "X";
						 b11->Text == "X" && b22->Text == "X" && b33->Text == "X";

						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b33->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Crosses win !", "Msg");
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b31->Text == "X" && b22->Text == "X" && b13->Text == "X" || b31->Text == "O" && b22->Text == "O" && b13->Text == "O")
					 {

						 b31->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b13->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Crosses win !", "Msg");
						 ifWon = 1;
						 clearAll();

					 }

					 // draw !
					  
					 

					 return 0;
					 //====================================================================================================================================
				 }



	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		winChecking();
	}
	private: System::Void toolStripStatusLabel1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void toolStripStatusLabel1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}