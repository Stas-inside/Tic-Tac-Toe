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
	private: System::Windows::Forms::MenuStrip^ Menu;

	private: System::Windows::Forms::ToolStripMenuItem^ settToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ themeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ darkTool;

	private: System::Windows::Forms::ToolStripMenuItem^ lightTool;


	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ difficultToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ normalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ comingSoonToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ meToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ comingSoonToolStripMenuItem1;
	private: System::Windows::Forms::Panel^ Background;
	private: System::Windows::Forms::ToolStripMenuItem^ createdByStasToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ followMeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ eToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ wTHUDontKnowHowToPlayToolStripMenuItem;




























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
			this->Menu = (gcnew System::Windows::Forms::MenuStrip());
			this->settToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->themeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->darkTool = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lightTool = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->difficultToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->normalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comingSoonToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->comingSoonToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Background = (gcnew System::Windows::Forms::Panel());
			this->createdByStasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->followMeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wTHUDontKnowHowToPlayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->Menu->SuspendLayout();
			this->Background->SuspendLayout();
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(6, 5);
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
			this->b33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->b32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->b31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->b23->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->b23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->b22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->b21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->b13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->b12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->b11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
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
			this->groupBox1->Location = System::Drawing::Point(435, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(72, 347);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Debugger";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// Menu
			// 
			this->Menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->settToolStripMenuItem,
					this->helpToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(519, 24);
			this->Menu->TabIndex = 6;
			this->Menu->Text = L"menuStrip1";
			// 
			// settToolStripMenuItem
			// 
			this->settToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->themeToolStripMenuItem,
					this->difficultToolStripMenuItem
			});
			this->settToolStripMenuItem->Name = L"settToolStripMenuItem";
			this->settToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->settToolStripMenuItem->Text = L"Sett";
			// 
			// themeToolStripMenuItem
			// 
			this->themeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->darkTool,
					this->lightTool
			});
			this->themeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"themeToolStripMenuItem.Image")));
			this->themeToolStripMenuItem->Name = L"themeToolStripMenuItem";
			this->themeToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->themeToolStripMenuItem->Text = L"Theme";
			// 
			// darkTool
			// 
			this->darkTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"darkTool.Image")));
			this->darkTool->Name = L"darkTool";
			this->darkTool->Size = System::Drawing::Size(180, 22);
			this->darkTool->Text = L"Dark";
			this->darkTool->Click += gcnew System::EventHandler(this, &MyForm::DarkMode_Click);
			// 
			// lightTool
			// 
			this->lightTool->Checked = true;
			this->lightTool->CheckState = System::Windows::Forms::CheckState::Checked;
			this->lightTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lightTool.Image")));
			this->lightTool->Name = L"lightTool";
			this->lightTool->Size = System::Drawing::Size(180, 22);
			this->lightTool->Text = L"Light";
			this->lightTool->Click += gcnew System::EventHandler(this, &MyForm::LightMode_Click);
			// 
			// difficultToolStripMenuItem
			// 
			this->difficultToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->normalToolStripMenuItem,
					this->comingSoonToolStripMenuItem, this->comingSoonToolStripMenuItem1
			});
			this->difficultToolStripMenuItem->Name = L"difficultToolStripMenuItem";
			this->difficultToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->difficultToolStripMenuItem->Text = L"Difficult";
			// 
			// normalToolStripMenuItem
			// 
			this->normalToolStripMenuItem->Checked = true;
			this->normalToolStripMenuItem->CheckState = System::Windows::Forms::CheckState::Checked;
			this->normalToolStripMenuItem->Name = L"normalToolStripMenuItem";
			this->normalToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->normalToolStripMenuItem->Text = L"Normal";
			this->normalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::normalToolStripMenuItem_Click);
			// 
			// comingSoonToolStripMenuItem
			// 
			this->comingSoonToolStripMenuItem->Name = L"comingSoonToolStripMenuItem";
			this->comingSoonToolStripMenuItem->Size = System::Drawing::Size(152, 6);
			this->comingSoonToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::comingSoonToolStripMenuItem_Click);
			// 
			// comingSoonToolStripMenuItem1
			// 
			this->comingSoonToolStripMenuItem1->Enabled = false;
			this->comingSoonToolStripMenuItem1->Name = L"comingSoonToolStripMenuItem1";
			this->comingSoonToolStripMenuItem1->Size = System::Drawing::Size(155, 22);
			this->comingSoonToolStripMenuItem1->Text = L"Coming soon...";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->wTHUDontKnowHowToPlayToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->meToolStripMenuItem });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// meToolStripMenuItem
			// 
			this->meToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->createdByStasToolStripMenuItem1,
					this->eToolStripMenuItem, this->followMeToolStripMenuItem, this->toolStripMenuItem2, this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem,
					this->toolStripMenuItem3, this->toolStripMenuItem4
			});
			this->meToolStripMenuItem->Name = L"meToolStripMenuItem";
			this->meToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->meToolStripMenuItem->Text = L"Me)";
			this->meToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::meToolStripMenuItem_Click);
			// 
			// Background
			// 
			this->Background->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Background->Controls->Add(this->tableLayoutPanel1);
			this->Background->Controls->Add(this->groupBox1);
			this->Background->Location = System::Drawing::Point(0, 25);
			this->Background->Name = L"Background";
			this->Background->Size = System::Drawing::Size(700, 358);
			this->Background->TabIndex = 7;
			// 
			// createdByStasToolStripMenuItem1
			// 
			this->createdByStasToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createdByStasToolStripMenuItem1.Image")));
			this->createdByStasToolStripMenuItem1->Name = L"createdByStasToolStripMenuItem1";
			this->createdByStasToolStripMenuItem1->Size = System::Drawing::Size(530, 22);
			this->createdByStasToolStripMenuItem1->Text = L"Created by Stas";
			// 
			// followMeToolStripMenuItem
			// 
			this->followMeToolStripMenuItem->Name = L"followMeToolStripMenuItem";
			this->followMeToolStripMenuItem->Size = System::Drawing::Size(530, 22);
			this->followMeToolStripMenuItem->Text = L"Follow me";
			// 
			// eToolStripMenuItem
			// 
			this->eToolStripMenuItem->Name = L"eToolStripMenuItem";
			this->eToolStripMenuItem->Size = System::Drawing::Size(527, 6);
			// 
			// wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem
			// 
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Name = L"wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem";
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Size = System::Drawing::Size(470, 23);
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Text = L"youtube.com/channel/UCKcWOEWJ1hrUW1irBZz-8xQ/videos";
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::httpswwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(530, 22);
			this->toolStripMenuItem2->Text = L" ";
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem3.Image")));
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(530, 22);
			this->toolStripMenuItem3->Text = L"mani_fastt";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem4.Image")));
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(530, 22);
			this->toolStripMenuItem4->Text = L"Stas-inside";
			// 
			// wTHUDontKnowHowToPlayToolStripMenuItem
			// 
			this->wTHUDontKnowHowToPlayToolStripMenuItem->Name = L"wTHUDontKnowHowToPlayToolStripMenuItem";
			this->wTHUDontKnowHowToPlayToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->wTHUDontKnowHowToPlayToolStripMenuItem->Text = L"WTH, u dont know how to play \?";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 375);
			this->Controls->Add(this->Background);
			this->Controls->Add(this->Menu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"Back";
			this->Text = L"Ti Tac Toe v2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->Menu->ResumeLayout(false);
			this->Menu->PerformLayout();
			this->Background->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

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

		bool Theme = 1;

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

					 if (Theme == 1)
					 {
					 b11->BackColor = Color::WhiteSmoke;
					 b12->BackColor = Color::WhiteSmoke;
					 b13->BackColor = Color::WhiteSmoke;

					 b21->BackColor = Color::WhiteSmoke;
					 b22->BackColor = Color::WhiteSmoke;
					 b23->BackColor = Color::WhiteSmoke;

					 b31->BackColor = Color::WhiteSmoke;
					 b32->BackColor = Color::WhiteSmoke;
					 b33->BackColor = Color::WhiteSmoke;
					 }
					 else if (Theme == 0)
					 {
						 b11->BackColor = Color::DimGray;
						 b12->BackColor = Color::DimGray;
						 b13->BackColor = Color::DimGray;

						 b21->BackColor = Color::DimGray;
						 b22->BackColor = Color::DimGray;
						 b23->BackColor = Color::DimGray;

						 b31->BackColor = Color::DimGray;
						 b32->BackColor = Color::DimGray;
						 b33->BackColor = Color::DimGray;
					 }


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
private: System::Void dificultToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comingSoonToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void normalToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comingSoonToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void DarkMode_Click(System::Object^ sender, System::EventArgs^ e) {
	Theme = 0;

	b11->BackColor = Color::DimGray;
	b12->BackColor = Color::DimGray;
	b13->BackColor = Color::DimGray;

	b21->BackColor = Color::DimGray;
	b22->BackColor = Color::DimGray;
	b23->BackColor = Color::DimGray;

	b31->BackColor = Color::DimGray;
	b32->BackColor = Color::DimGray;
	b33->BackColor = Color::DimGray;

	Background->BackColor = Color::DimGray;

	Menu->BackColor = Color::Gray;

	//checkbox->isChecked()

	//if (lightTool->CheckState == CheckState::Unchecked)
	//{
	//}

	lightTool->CheckState = CheckState::Unchecked;
	darkTool->CheckState = CheckState::Checked;
}
private: System::Void LightMode_Click(System::Object^ sender, System::EventArgs^ e) {
	Theme = 1;

	b11->BackColor = Color::WhiteSmoke;
	b12->BackColor = Color::WhiteSmoke;
	b13->BackColor = Color::WhiteSmoke;

	b21->BackColor = Color::WhiteSmoke;
	b22->BackColor = Color::WhiteSmoke;
	b23->BackColor = Color::WhiteSmoke;

	b31->BackColor = Color::WhiteSmoke;
	b32->BackColor = Color::WhiteSmoke;
	b33->BackColor = Color::WhiteSmoke;

	Background->BackColor = Color::WhiteSmoke;

	Menu->BackColor = Color::WhiteSmoke;

	lightTool->CheckState = CheckState::Checked;
	darkTool->CheckState = CheckState::Unchecked;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void meToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void httpswwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem_Click(System::Object^ sender,
	System::EventArgs^ e) {
}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}