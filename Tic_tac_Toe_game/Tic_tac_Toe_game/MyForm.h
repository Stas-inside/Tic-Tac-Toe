#pragma once

#include "Subsidiary.h"

namespace TictacToegame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//srand(time(NULL));

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

	private: System::Windows::Forms::ToolStripMenuItem^ createdByStasToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ followMeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ eToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ wTHUDontKnowHowToPlayToolStripMenuItem;






	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ b33;
	private: System::Windows::Forms::Button^ b32;
	private: System::Windows::Forms::Button^ b31;
	private: System::Windows::Forms::Button^ b23;
	private: System::Windows::Forms::Button^ b22;
	private: System::Windows::Forms::Button^ b21;
	private: System::Windows::Forms::Button^ b13;
	private: System::Windows::Forms::Button^ b12;
	private: System::Windows::Forms::Button^ b11;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ crossWin;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ CircleWin;
	private: System::Windows::Forms::Panel^ Background;
	private: System::Windows::Forms::TabControl^ tabControl;
	private: System::Windows::Forms::TabPage^ tabPage1;




	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ randSv;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ SetCross;
	private: System::Windows::Forms::Button^ SetCircle;
	private: System::Windows::Forms::Button^ ClearButt;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ Sim;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ Count;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ WinCross;
	private: System::Windows::Forms::Panel^ WinCircle;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;













































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
			this->wTHUDontKnowHowToPlayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createdByStasToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->followMeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->crossWin = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->CircleWin = (gcnew System::Windows::Forms::Label());
			this->Background = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->WinCross = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->WinCircle = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Count = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Sim = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->randSv = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SetCross = (gcnew System::Windows::Forms::Button());
			this->SetCircle = (gcnew System::Windows::Forms::Button());
			this->ClearButt = (gcnew System::Windows::Forms::Button());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->Menu->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->Background->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->WinCross->SuspendLayout();
			this->WinCircle->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabControl->SuspendLayout();
			this->SuspendLayout();
			// 
			// Menu
			// 
			this->Menu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->settToolStripMenuItem,
					this->helpToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->Menu->Location = System::Drawing::Point(0, 0);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(548, 24);
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
			this->themeToolStripMenuItem->Size = System::Drawing::Size(116, 22);
			this->themeToolStripMenuItem->Text = L"Theme";
			// 
			// darkTool
			// 
			this->darkTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"darkTool.Image")));
			this->darkTool->Name = L"darkTool";
			this->darkTool->Size = System::Drawing::Size(101, 22);
			this->darkTool->Text = L"Dark";
			this->darkTool->Click += gcnew System::EventHandler(this, &MyForm::DarkMode_Click);
			// 
			// lightTool
			// 
			this->lightTool->Checked = true;
			this->lightTool->CheckState = System::Windows::Forms::CheckState::Checked;
			this->lightTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lightTool.Image")));
			this->lightTool->Name = L"lightTool";
			this->lightTool->Size = System::Drawing::Size(101, 22);
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
			this->difficultToolStripMenuItem->Size = System::Drawing::Size(116, 22);
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
			// wTHUDontKnowHowToPlayToolStripMenuItem
			// 
			this->wTHUDontKnowHowToPlayToolStripMenuItem->Name = L"wTHUDontKnowHowToPlayToolStripMenuItem";
			this->wTHUDontKnowHowToPlayToolStripMenuItem->Size = System::Drawing::Size(246, 22);
			this->wTHUDontKnowHowToPlayToolStripMenuItem->Text = L"WTH, u dont know how to play \?";
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
			this->meToolStripMenuItem->Size = System::Drawing::Size(95, 22);
			this->meToolStripMenuItem->Text = L"Me)";
			this->meToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::meToolStripMenuItem_Click);
			// 
			// createdByStasToolStripMenuItem1
			// 
			this->createdByStasToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"createdByStasToolStripMenuItem1.Image")));
			this->createdByStasToolStripMenuItem1->Name = L"createdByStasToolStripMenuItem1";
			this->createdByStasToolStripMenuItem1->Size = System::Drawing::Size(530, 22);
			this->createdByStasToolStripMenuItem1->Text = L"Created by Stas";
			// 
			// eToolStripMenuItem
			// 
			this->eToolStripMenuItem->Name = L"eToolStripMenuItem";
			this->eToolStripMenuItem->Size = System::Drawing::Size(527, 6);
			// 
			// followMeToolStripMenuItem
			// 
			this->followMeToolStripMenuItem->Name = L"followMeToolStripMenuItem";
			this->followMeToolStripMenuItem->Size = System::Drawing::Size(530, 22);
			this->followMeToolStripMenuItem->Text = L"Follow me";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripMenuItem2.Image")));
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(530, 22);
			this->toolStripMenuItem2->Text = L" ";
			// 
			// wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem
			// 
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Name = L"wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem";
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Size = System::Drawing::Size(470, 23);
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Text = L"youtube.com/channel/UCKcWOEWJ1hrUW1irBZz-8xQ/videos";
			this->wwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::httpswwwyoutubecomchannelUCKcWOEWJ1hrUW1irBZz8xQvideosToolStripMenuItem_Click);
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
			this->b33->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b33->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b33->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			this->b32->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b32->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b32->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			this->b31->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b31->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b31->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			this->b23->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b23->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			this->b22->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b22->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			this->b21->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b21->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			this->b13->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b13->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			this->b12->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b12->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			this->b11->FlatAppearance->BorderColor = System::Drawing::Color::Brown;
			this->b11->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->b11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
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
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(375, 5);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(62, 58);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"You play";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 23, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->crossWin);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Candara", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(372, 238);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(65, 56);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"X";
			// 
			// crossWin
			// 
			this->crossWin->AutoSize = true;
			this->crossWin->Font = (gcnew System::Drawing::Font(L"Candara", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crossWin->Location = System::Drawing::Point(16, 20);
			this->crossWin->Name = L"crossWin";
			this->crossWin->Size = System::Drawing::Size(21, 24);
			this->crossWin->TabIndex = 0;
			this->crossWin->Text = L"0";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->CircleWin);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Candara", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(372, 300);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(65, 46);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"O";
			// 
			// CircleWin
			// 
			this->CircleWin->AutoSize = true;
			this->CircleWin->Font = (gcnew System::Drawing::Font(L"Candara", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CircleWin->Location = System::Drawing::Point(16, 15);
			this->CircleWin->Name = L"CircleWin";
			this->CircleWin->Size = System::Drawing::Size(21, 24);
			this->CircleWin->TabIndex = 0;
			this->CircleWin->Text = L"0";
			// 
			// Background
			// 
			this->Background->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Background->Controls->Add(this->panel2);
			this->Background->Controls->Add(this->tableLayoutPanel2);
			this->Background->Controls->Add(this->panel1);
			this->Background->Controls->Add(this->groupBox4);
			this->Background->Controls->Add(this->groupBox3);
			this->Background->Controls->Add(this->groupBox2);
			this->Background->Controls->Add(this->tableLayoutPanel1);
			this->Background->Location = System::Drawing::Point(0, 25);
			this->Background->Name = L"Background";
			this->Background->Size = System::Drawing::Size(623, 358);
			this->Background->TabIndex = 7;
			this->Background->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Background_Paint);
			this->Background->Enter += gcnew System::EventHandler(this, &MyForm::Behav);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(375, 69);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(62, 43);
			this->panel2->TabIndex = 9;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->WinCross, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->WinCircle, 0, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(375, 118);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(62, 114);
			this->tableLayoutPanel2->TabIndex = 0;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel2_Paint);
			// 
			// WinCross
			// 
			this->WinCross->BackColor = System::Drawing::Color::LightGreen;
			this->WinCross->Controls->Add(this->label8);
			this->WinCross->Cursor = System::Windows::Forms::Cursors::Default;
			this->WinCross->Location = System::Drawing::Point(3, 3);
			this->WinCross->Name = L"WinCross";
			this->WinCross->Size = System::Drawing::Size(56, 51);
			this->WinCross->TabIndex = 0;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 14);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Player";
			// 
			// WinCircle
			// 
			this->WinCircle->BackColor = System::Drawing::Color::SkyBlue;
			this->WinCircle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->WinCircle->Controls->Add(this->label7);
			this->WinCircle->Cursor = System::Windows::Forms::Cursors::Default;
			this->WinCircle->Location = System::Drawing::Point(3, 60);
			this->WinCircle->Name = L"WinCircle";
			this->WinCircle->Size = System::Drawing::Size(56, 51);
			this->WinCircle->TabIndex = 1;
			this->WinCircle->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::WinCircle_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(10, 17);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 14);
			this->label7->TabIndex = 0;
			this->label7->Text = L"You";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(375, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(62, 113);
			this->panel1->TabIndex = 8;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->Count);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->Sim);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->randSv);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->SetCross);
			this->tabPage2->Controls->Add(this->SetCircle);
			this->tabPage2->Controls->Add(this->ClearButt);
			this->tabPage2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(73, 338);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Debugger";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"/ 9";
			// 
			// Count
			// 
			this->Count->AutoSize = true;
			this->Count->Location = System::Drawing::Point(6, 86);
			this->Count->Name = L"Count";
			this->Count->Size = System::Drawing::Size(13, 13);
			this->Count->TabIndex = 16;
			this->Count->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 69);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Count draw:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// Sim
			// 
			this->Sim->AutoSize = true;
			this->Sim->Location = System::Drawing::Point(6, 52);
			this->Sim->Name = L"Sim";
			this->Sim->Size = System::Drawing::Size(13, 13);
			this->Sim->TabIndex = 14;
			this->Sim->Text = L"\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Simvol:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(56, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Rand:";
			// 
			// randSv
			// 
			this->randSv->AutoSize = true;
			this->randSv->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->randSv->Location = System::Drawing::Point(56, 4);
			this->randSv->Name = L"randSv";
			this->randSv->Size = System::Drawing::Size(14, 16);
			this->randSv->TabIndex = 10;
			this->randSv->Text = L"0";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 170);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 21);
			this->button2->TabIndex = 9;
			this->button2->Text = L"check";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// SetCross
			// 
			this->SetCross->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->SetCross->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SetCross->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SetCross->Location = System::Drawing::Point(3, 228);
			this->SetCross->Name = L"SetCross";
			this->SetCross->Size = System::Drawing::Size(64, 51);
			this->SetCross->TabIndex = 7;
			this->SetCross->Text = L"X";
			this->SetCross->UseVisualStyleBackColor = true;
			this->SetCross->Click += gcnew System::EventHandler(this, &MyForm::cross_b_Click);
			// 
			// SetCircle
			// 
			this->SetCircle->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->SetCircle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SetCircle->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SetCircle->Location = System::Drawing::Point(3, 285);
			this->SetCircle->Name = L"SetCircle";
			this->SetCircle->Size = System::Drawing::Size(64, 50);
			this->SetCircle->TabIndex = 6;
			this->SetCircle->Text = L"O";
			this->SetCircle->UseVisualStyleBackColor = true;
			this->SetCircle->Click += gcnew System::EventHandler(this, &MyForm::circle_b_Click);
			// 
			// ClearButt
			// 
			this->ClearButt->Location = System::Drawing::Point(3, 197);
			this->ClearButt->Name = L"ClearButt";
			this->ClearButt->Size = System::Drawing::Size(64, 23);
			this->ClearButt->TabIndex = 8;
			this->ClearButt->Text = L"clear";
			this->ClearButt->UseVisualStyleBackColor = true;
			this->ClearButt->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(73, 338);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Hide";
			// 
			// tabControl
			// 
			this->tabControl->Alignment = System::Windows::Forms::TabAlignment::Right;
			this->tabControl->Controls->Add(this->tabPage1);
			this->tabControl->Controls->Add(this->tabPage2);
			this->tabControl->Location = System::Drawing::Point(443, 25);
			this->tabControl->Multiline = true;
			this->tabControl->Name = L"tabControl";
			this->tabControl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(100, 346);
			this->tabControl->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 375);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->Background);
			this->Controls->Add(this->Menu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Tag = L"Back";
			this->Text = L"Ti Tac Toe v7.2";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Menu->ResumeLayout(false);
			this->Menu->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->Background->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->WinCross->ResumeLayout(false);
			this->WinCross->PerformLayout();
			this->WinCircle->ResumeLayout(false);
			this->WinCircle->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabControl->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup") //hide console window


		//int setCross(String^ a)
		//{
		//	if (WhatSimvol == 0)
		//	{
		//		//
		//	}

		//	return 0;
		//}

		// for draw
		bool WhatSimvol;
		int Simvol;

		int countNine = 0;
		bool ifWon = 0;

		int drawChecking()
		{
			if (countNine == 9 && ifWon == 0)
			{
				MessageBox::Show("Draw ! XD", "Msg");
				clearAll();
			}

			return 0;
		}

		bool Theme = 1;

		int countWinsCross = 0;
		int countWinsCircle = 0;

		//label2->Text = "43";


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

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b22->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b22->Enabled = false;
	}
	private: System::Void b12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b12->Text = "X";

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b12->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b12->Enabled = false;
	}
	private: System::Void b13_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b13->Text = "X";

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b13->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b13->Enabled = false;
	}
	private: System::Void b21_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b21->Text = "X";

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b21->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b21->Enabled = false;
	}
	private: System::Void b23_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b23->Text = "X";

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b23->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b23->Enabled = false;
	}
	private: System::Void b31_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b31->Text = "X";

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b31->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b31->Enabled = false;
	}
	private: System::Void b32_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b32->Text = "X";

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b32->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b32->Enabled = false;
	}
	private: System::Void b33_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b33->Text = "X";

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b33->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b33->Enabled = false;
	}
	private: System::Void b11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (WhatSimvol == 1)
		{
			b11->Text = "X";

			WhatSimvol = 0;
		}
		else if (WhatSimvol == 0)
		{
			b11->Text = "O";

			WhatSimvol = 1;
		}

		countNine++;
		Count->Text = System::Convert::ToString(countNine);
		winChecking();
		drawChecking();

		//b11->Enabled = false;

		// draw checking
	}


				 //=============================================================================
	private: System::Void circle_b_Click(System::Object^ sender, System::EventArgs^ e) {
		WhatSimvol = 0;

		SetCross->BackColor = Color::WhiteSmoke;
		SetCircle->BackColor = Color::FromArgb(107, 107, 107);
	}
	private: System::Void cross_b_Click(System::Object^ sender, System::EventArgs^ e) {
		WhatSimvol = 1;

		SetCross->BackColor = Color::FromArgb(107, 107, 107);
		SetCircle->BackColor = Color::WhiteSmoke;
	}


				 //=============================================================================


				 void clearAll()
				 {
					 // Clear text
					 b11->Text = " ";
					 b12->Text = " ";
					 b13->Text = " ";

					 b21->Text = " ";
					 b22->Text = " ";
					 b23->Text = " ";

					 b31->Text = " ";
					 b32->Text = " ";
					 b33->Text = " ";

					 // Set theme
					 // When it blue

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
					 Count->Text = "0";

					 label3->Text = System::Convert::ToString(randNum());

					 if (label3->Text == "1")
					 {
						 label1->Text = "X";
						 Sim->Text = "Cross";

						 WhatSimvol = 1;
					 }
					 else if (label3->Text == "2")
					 {
						 label1->Text = "O";
						 Sim->Text = "Circle";

						 WhatSimvol = 0;
					 }

					 // Change color in Debagger buttons
					 SetCross->BackColor = Color::WhiteSmoke;
					 SetCircle->BackColor = Color::WhiteSmoke;

					 // Enable all buttns
					 //b11->Enabled = true;
					 //b12->Enabled = true;
					 //b13->Enabled = true;

					 //b21->Enabled = true;
					 //b22->Enabled = true;
					 //b23->Enabled = true;

					 //b31->Enabled = true;
					 //b32->Enabled = true;
					 //b33->Enabled = true;

				 }

				 //==================================================================================================================================


	private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
		clearAll();

		//MessageBox::Show("Clear !", "Msg");
	}

				 // If win, MAIN FUNCTION !!! =======================================================================================================
				 bool win = 0;

				 int winChecking()
				 {
					 //WinCircle->BorderStyle = "None"

					 // BLUE lines ======================================================
					 if (b11->Text == "X" && b12->Text == "X" && b13->Text == "X")
					 {
						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b21->BackColor = Color::FromArgb(0, 210, 230);
						 b31->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(X) Crosses win !", "Msg");
						 countWinsCross++;
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b31->Text == "X" && b32->Text == "X" && b33->Text == "X")
					 {
						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b21->BackColor = Color::FromArgb(0, 210, 230);
						 b31->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(X) Crosses win !", "Msg");
						 countWinsCross++;
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b11->Text == "X" && b21->Text == "X" && b31->Text == "X")
					 {
						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b21->BackColor = Color::FromArgb(0, 210, 230);
						 b31->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(X) Crosses win !", "Msg");
						 countWinsCross++;
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b13->Text == "X" && b23->Text == "X" && b33->Text == "X")
					 {
						 b13->BackColor = Color::FromArgb(0, 210, 230);
						 b23->BackColor = Color::FromArgb(0, 210, 230);
						 b33->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(X) Crosses win !", "Msg");
						 countWinsCross++;
						 ifWon = 1;
						 clearAll();

					 }
					 // RED lines ======================================================
					 else if (b12->Text == "X" && b22->Text == "X" && b32->Text == "X")
					 {
						 b12->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b32->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(X) Crosses win !", "Msg");
						 countWinsCross++;
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b21->Text == "X" && b22->Text == "X" && b23->Text == "X")
					 {
						 b21->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b23->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(X) Crosses win !", "Msg");
						 countWinsCross++;
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b11->Text == "X" && b22->Text == "X" && b33->Text == "X")
					 {
						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b33->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(X) Crosses win !", "Msg");
						 countWinsCross++;
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b31->Text == "X" && b22->Text == "X" && b13->Text == "X")
					 {

						 b31->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b13->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(X) Crosses win !", "Msg");
						 countWinsCross++;
						 ifWon = 1;
						 clearAll();

					 }

					 // Cicles ============================================================================================================================

					 // BLUE lines ======================================================
					 if (b11->Text == "O" && b12->Text == "O" && b13->Text == "O")
					 {
						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b12->BackColor = Color::FromArgb(0, 210, 230);
						 b13->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Circles win !", "Msg");
						 countWinsCircle++;
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b31->Text == "O" && b32->Text == "O" && b33->Text == "O")
					 {
						 b31->BackColor = Color::FromArgb(0, 210, 230);
						 b32->BackColor = Color::FromArgb(0, 210, 230);
						 b33->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Circles win !", "Msg");
						 countWinsCircle++;
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b11->Text == "O" && b21->Text == "O" && b31->Text == "O")
					 {
						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b21->BackColor = Color::FromArgb(0, 210, 230);
						 b31->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Circles win !", "Msg");
						 countWinsCircle++;
						 ifWon = 1;
						 clearAll();

						 //Beep(300, 300);
					 }
					 else if (b13->Text == "O" && b23->Text == "O" && b33->Text == "O")
					 {
						 b13->BackColor = Color::FromArgb(0, 210, 230);
						 b23->BackColor = Color::FromArgb(0, 210, 230);
						 b33->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Circles win !", "Msg");
						 countWinsCircle++;
						 ifWon = 1;
						 clearAll();

					 }
					 // RED lines ======================================================
					 else if (b12->Text == "O" && b22->Text == "O" && b32->Text == "O")
					 {
						 b12->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b32->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Circles win !", "Msg");
						 countWinsCircle++;
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b21->Text == "O" && b22->Text == "O" && b23->Text == "O")
					 {
						 b21->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b23->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Circles win !", "Msg");
						 countWinsCircle++;
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b11->Text == "O" && b22->Text == "O" && b33->Text == "O")
					 {
						 b11->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b33->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Circles win !", "Msg");
						 countWinsCircle++;
						 ifWon = 1;
						 clearAll();

					 }
					 else if (b31->Text == "O" && b22->Text == "O" && b13->Text == "O")
					 {

						 b31->BackColor = Color::FromArgb(0, 210, 230);
						 b22->BackColor = Color::FromArgb(0, 210, 230);
						 b13->BackColor = Color::FromArgb(0, 210, 230);

						 MessageBox::Show("(O) Circles win !", "Msg");
						 countWinsCircle++;
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


	private: System::Void Background_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		clearAll();
		void todo();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->BackColor = Color::LightGreen;
		button2->Text = "OK";

		randSv->Text = System::Convert::ToString(randNum());
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		clearAll();
		void todo();
	}
	private: System::Void Behav(System::Object^ sender, System::EventArgs^ e) {
		clearAll();
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void WinCircle_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//WinCircle->BorderStyle
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}