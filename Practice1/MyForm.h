#pragma once

#include "DictionaryForm.h"

namespace Practice1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Windows::Input;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: String ^ File_name;
			 bool needSave;
			 Dictionary ^ dictionary;
			 property bool NeedSave {
				 void set(bool needSave)
				 {
					 this->needSave = needSave;
					 ��������toolStripStatusLabel1->Text = File_name == nullptr ? "����� ��������� ��������.rtf" : Path::GetFileName(File_name);

					 if (needSave)
						 ��������toolStripStatusLabel1->Text += " *";
				 }
				 bool get()
				 {
					 return needSave;
				 }
			 }
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator10;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	public:
		MyForm(void)
		{
			InitializeComponent();

			�������ToolStripMenuItem1_Click(nullptr, nullptr);
			richTextBox1_SelectionChanged(nullptr, nullptr);
			MyForm_KeyDown(nullptr, nullptr);

			dictionary = gcnew Dictionary("dictionary.db");
			dictionary->View(listBoxDictionaryWords);
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBoxDictionary;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator8;
	private: System::Windows::Forms::ToolStripButton^  �������toolStripButton1;
	private: System::Windows::Forms::ListBox^  listBoxDictionaryWords;
	private: System::Windows::Forms::RichTextBox^  richTextBoxDictionaryInfo;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBoxDictionarySearch;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonDictionaryClose;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  �������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  �������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ���������ToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  ��������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ����������ToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  �������ToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������������������ToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator9;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripButton^  ����StripButton1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ToolStripButton^  ������StripButton1;
	private: System::Windows::Forms::ToolStripButton^  ������StripButton1;
	private: System::Windows::Forms::ToolStripButton^  ������StripButton1;
	private: System::Windows::Forms::ToolStripButton^  �������������StripButton1;

private: System::Windows::Forms::ToolStripStatusLabel^  ��������toolStripStatusLabel1;
private: System::Windows::Forms::ToolStripStatusLabel^  ����toolStripStatusLabel1;
private: System::Windows::Forms::ToolStripStatusLabel^  inscapsscrtoolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripTextBox^  ����������toolStripTextBox1;

	private: System::Windows::Forms::ToolStripButton^  �����toolStripButton1;

	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->���������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator10 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�����������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->���������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->��������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->����������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������ToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����StripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->������StripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->������StripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->������StripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->�������������StripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->����������toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->�����toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�������toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->��������toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->����toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->inscapsscrtoolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->groupBoxDictionary = (gcnew System::Windows::Forms::GroupBox());
			this->buttonDictionaryClose = (gcnew System::Windows::Forms::Button());
			this->richTextBoxDictionaryInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->listBoxDictionaryWords = (gcnew System::Windows::Forms::ListBox());
			this->textBoxDictionarySearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBoxDictionary->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->����ToolStripMenuItem1,
					this->������ToolStripMenuItem1, this->������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(980, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->�������ToolStripMenuItem1,
					this->�������ToolStripMenuItem1, this->toolStripSeparator5, this->���������ToolStripMenuItem1, this->������������ToolStripMenuItem1,
					this->toolStripSeparator6, this->������ToolStripMenuItem1, this->�����������������������ToolStripMenuItem1, this->toolStripSeparator10,
					this->�����ToolStripMenuItem1
			});
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem1->Text = L"&����";
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripMenuItem1.Image")));
			this->�������ToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->ShortcutKeyDisplayString = L"";
			this->�������ToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->�������ToolStripMenuItem1->Text = L"&�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripMenuItem1.Image")));
			this->�������ToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->ShortcutKeyDisplayString = L"";
			this->�������ToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->�������ToolStripMenuItem1->Text = L"&�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem1_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(230, 6);
			// 
			// ���������ToolStripMenuItem1
			// 
			this->���������ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"���������ToolStripMenuItem1.Image")));
			this->���������ToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->���������ToolStripMenuItem1->Name = L"���������ToolStripMenuItem1";
			this->���������ToolStripMenuItem1->ShortcutKeyDisplayString = L"";
			this->���������ToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->���������ToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->���������ToolStripMenuItem1->Text = L"&���������";
			this->���������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem1_Click);
			// 
			// ������������ToolStripMenuItem1
			// 
			this->������������ToolStripMenuItem1->Name = L"������������ToolStripMenuItem1";
			this->������������ToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->������������ToolStripMenuItem1->Text = L"��������� &���";
			this->������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem1_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(230, 6);
			// 
			// ������ToolStripMenuItem1
			// 
			this->������ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������ToolStripMenuItem1.Image")));
			this->������ToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->ShortcutKeyDisplayString = L"";
			this->������ToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->������ToolStripMenuItem1->Text = L"&������";
			// 
			// �����������������������ToolStripMenuItem1
			// 
			this->�����������������������ToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�����������������������ToolStripMenuItem1.Image")));
			this->�����������������������ToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�����������������������ToolStripMenuItem1->Name = L"�����������������������ToolStripMenuItem1";
			this->�����������������������ToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->�����������������������ToolStripMenuItem1->Text = L"��������������� ���&�����";
			// 
			// toolStripSeparator10
			// 
			this->toolStripSeparator10->Name = L"toolStripSeparator10";
			this->toolStripSeparator10->Size = System::Drawing::Size(230, 6);
			// 
			// �����ToolStripMenuItem1
			// 
			this->�����ToolStripMenuItem1->Name = L"�����ToolStripMenuItem1";
			this->�����ToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->�����ToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->�����ToolStripMenuItem1->Text = L"��&���";
			this->�����ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem1_Click);
			// 
			// ������ToolStripMenuItem1
			// 
			this->������ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->��������ToolStripMenuItem2,
					this->����������ToolStripMenuItem2, this->�������ToolStripMenuItem, this->toolStripSeparator9, this->�����������ToolStripMenuItem1
			});
			this->������ToolStripMenuItem1->Name = L"������ToolStripMenuItem1";
			this->������ToolStripMenuItem1->Size = System::Drawing::Size(59, 20);
			this->������ToolStripMenuItem1->Text = L"&������";
			// 
			// ��������ToolStripMenuItem2
			// 
			this->��������ToolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem2.Image")));
			this->��������ToolStripMenuItem2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��������ToolStripMenuItem2->Name = L"��������ToolStripMenuItem2";
			this->��������ToolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->��������ToolStripMenuItem2->Size = System::Drawing::Size(190, 22);
			this->��������ToolStripMenuItem2->Text = L"�������&�";
			this->��������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripButton_Click);
			// 
			// ����������ToolStripMenuItem2
			// 
			this->����������ToolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripMenuItem2.Image")));
			this->����������ToolStripMenuItem2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����������ToolStripMenuItem2->Name = L"����������ToolStripMenuItem2";
			this->����������ToolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->����������ToolStripMenuItem2->Size = System::Drawing::Size(190, 22);
			this->����������ToolStripMenuItem2->Text = L"&����������";
			this->����������ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripButton_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripMenuItem.Image")));
			this->�������ToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->�������ToolStripMenuItem->Text = L"���&����";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripButton_Click);
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			this->toolStripSeparator9->Size = System::Drawing::Size(187, 6);
			// 
			// �����������ToolStripMenuItem1
			// 
			this->�����������ToolStripMenuItem1->Name = L"�����������ToolStripMenuItem1";
			this->�����������ToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->�����������ToolStripMenuItem1->Size = System::Drawing::Size(190, 22);
			this->�����������ToolStripMenuItem1->Text = L"�������� &���";
			this->�����������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem1_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�������ToolStripMenuItem });
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->�������ToolStripMenuItem->Text = L"�������������� �������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click_1);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->��������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->��������ToolStripMenuItem, this->toolStripSeparator2, this->�������������ToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(182, 98);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl+X";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripButton_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripMenuItem.Image")));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl+C";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripButton_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripMenuItem.Image")));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl+V";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripButton_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(178, 6);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->�������������ToolStripMenuItem->Text = L"����� � �������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(19) {
				this->�������ToolStripButton,
					this->�������ToolStripButton, this->���������ToolStripButton, this->toolStripSeparator, this->��������ToolStripButton, this->����������ToolStripButton,
					this->�������ToolStripButton, this->toolStripSeparator4, this->����StripButton1, this->������StripButton1, this->toolStripSeparator1,
					this->������StripButton1, this->������StripButton1, this->�������������StripButton1, this->toolStripSeparator3, this->����������toolStripTextBox1,
					this->�����toolStripButton1, this->toolStripSeparator8, this->�������toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(980, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�������ToolStripButton->Text = L"&�������";
			this->�������ToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�������ToolStripButton->Text = L"&�������";
			this->�������ToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem1_Click);
			// 
			// ���������ToolStripButton
			// 
			this->���������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->���������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"���������ToolStripButton.Image")));
			this->���������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->���������ToolStripButton->Name = L"���������ToolStripButton";
			this->���������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->���������ToolStripButton->Text = L"&���������";
			this->���������ToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem1_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// ��������ToolStripButton
			// 
			this->��������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->��������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������ToolStripButton.Image")));
			this->��������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->��������ToolStripButton->Name = L"��������ToolStripButton";
			this->��������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->��������ToolStripButton->Text = L"�&�������";
			this->��������ToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripButton_Click);
			// 
			// ����������ToolStripButton
			// 
			this->����������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->����������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����������ToolStripButton.Image")));
			this->����������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����������ToolStripButton->Name = L"����������ToolStripButton";
			this->����������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->����������ToolStripButton->Text = L"&����������";
			this->����������ToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripButton_Click);
			// 
			// �������ToolStripButton
			// 
			this->�������ToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->�������ToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������ToolStripButton.Image")));
			this->�������ToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������ToolStripButton->Name = L"�������ToolStripButton";
			this->�������ToolStripButton->Size = System::Drawing::Size(23, 22);
			this->�������ToolStripButton->Text = L"���&����";
			this->�������ToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripButton_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// ����StripButton1
			// 
			this->����StripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->����StripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"����StripButton1.Image")));
			this->����StripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->����StripButton1->Name = L"����StripButton1";
			this->����StripButton1->Size = System::Drawing::Size(37, 22);
			this->����StripButton1->Text = L"����";
			this->����StripButton1->Click += gcnew System::EventHandler(this, &MyForm::����StripButton1_Click);
			// 
			// ������StripButton1
			// 
			this->������StripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->������StripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������StripButton1.Image")));
			this->������StripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->������StripButton1->Name = L"������StripButton1";
			this->������StripButton1->Size = System::Drawing::Size(54, 22);
			this->������StripButton1->Text = L"������";
			this->������StripButton1->Click += gcnew System::EventHandler(this, &MyForm::������StripButton1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// ������StripButton1
			// 
			this->������StripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->������StripButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->������StripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������StripButton1.Image")));
			this->������StripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->������StripButton1->Name = L"������StripButton1";
			this->������StripButton1->Size = System::Drawing::Size(23, 22);
			this->������StripButton1->Text = L"�";
			this->������StripButton1->Click += gcnew System::EventHandler(this, &MyForm::������StripButton1_Click);
			// 
			// ������StripButton1
			// 
			this->������StripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->������StripButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic));
			this->������StripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"������StripButton1.Image")));
			this->������StripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->������StripButton1->Name = L"������StripButton1";
			this->������StripButton1->Size = System::Drawing::Size(23, 22);
			this->������StripButton1->Text = L"�";
			this->������StripButton1->Click += gcnew System::EventHandler(this, &MyForm::������StripButton1_Click);
			// 
			// �������������StripButton1
			// 
			this->�������������StripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->�������������StripButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Underline));
			this->�������������StripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������������StripButton1.Image")));
			this->�������������StripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������������StripButton1->Name = L"�������������StripButton1";
			this->�������������StripButton1->Size = System::Drawing::Size(23, 22);
			this->�������������StripButton1->Text = L"�";
			this->�������������StripButton1->Click += gcnew System::EventHandler(this, &MyForm::�������������StripButton1_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// ����������toolStripTextBox1
			// 
			this->����������toolStripTextBox1->Name = L"����������toolStripTextBox1";
			this->����������toolStripTextBox1->Size = System::Drawing::Size(100, 25);
			// 
			// �����toolStripButton1
			// 
			this->�����toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->�����toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�����toolStripButton1.Image")));
			this->�����toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�����toolStripButton1->Name = L"�����toolStripButton1";
			this->�����toolStripButton1->Size = System::Drawing::Size(45, 22);
			this->�����toolStripButton1->Text = L"�����";
			this->�����toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::�����toolStripButton1_Click);
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(6, 25);
			// 
			// �������toolStripButton1
			// 
			this->�������toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->�������toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"�������toolStripButton1.Image")));
			this->�������toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->�������toolStripButton1->Name = L"�������toolStripButton1";
			this->�������toolStripButton1->Size = System::Drawing::Size(58, 22);
			this->�������toolStripButton1->Text = L"�������";
			this->�������toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::�������toolStripButton1_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������toolStripStatusLabel1,
					this->����toolStripStatusLabel1, this->inscapsscrtoolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 568);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(980, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// ��������toolStripStatusLabel1
			// 
			this->��������toolStripStatusLabel1->AutoSize = false;
			this->��������toolStripStatusLabel1->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->��������toolStripStatusLabel1->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->��������toolStripStatusLabel1->Name = L"��������toolStripStatusLabel1";
			this->��������toolStripStatusLabel1->Size = System::Drawing::Size(300, 17);
			this->��������toolStripStatusLabel1->Text = L"��� �����";
			this->��������toolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ����toolStripStatusLabel1
			// 
			this->����toolStripStatusLabel1->AutoSize = false;
			this->����toolStripStatusLabel1->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->����toolStripStatusLabel1->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->����toolStripStatusLabel1->Name = L"����toolStripStatusLabel1";
			this->����toolStripStatusLabel1->Size = System::Drawing::Size(80, 17);
			this->����toolStripStatusLabel1->Text = L"����";
			this->����toolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// inscapsscrtoolStripStatusLabel2
			// 
			this->inscapsscrtoolStripStatusLabel2->AutoSize = false;
			this->inscapsscrtoolStripStatusLabel2->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->inscapsscrtoolStripStatusLabel2->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->inscapsscrtoolStripStatusLabel2->Name = L"inscapsscrtoolStripStatusLabel2";
			this->inscapsscrtoolStripStatusLabel2->Size = System::Drawing::Size(80, 17);
			this->inscapsscrtoolStripStatusLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// richTextBox1
			// 
			this->richTextBox1->AutoWordSelection = true;
			this->richTextBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 49);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(580, 519);
			this->richTextBox1->TabIndex = 4;
			this->richTextBox1->Text = L"";
			this->richTextBox1->SelectionChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_SelectionChanged);
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"��������� ��������.rtf";
			// 
			// groupBoxDictionary
			// 
			this->groupBoxDictionary->Controls->Add(this->buttonDictionaryClose);
			this->groupBoxDictionary->Controls->Add(this->richTextBoxDictionaryInfo);
			this->groupBoxDictionary->Controls->Add(this->label2);
			this->groupBoxDictionary->Controls->Add(this->panel1);
			this->groupBoxDictionary->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBoxDictionary->Location = System::Drawing::Point(580, 49);
			this->groupBoxDictionary->Name = L"groupBoxDictionary";
			this->groupBoxDictionary->Size = System::Drawing::Size(400, 519);
			this->groupBoxDictionary->TabIndex = 5;
			this->groupBoxDictionary->TabStop = false;
			this->groupBoxDictionary->Text = L"�������";
			this->groupBoxDictionary->Visible = false;
			// 
			// buttonDictionaryClose
			// 
			this->buttonDictionaryClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonDictionaryClose->Location = System::Drawing::Point(376, 0);
			this->buttonDictionaryClose->Name = L"buttonDictionaryClose";
			this->buttonDictionaryClose->Size = System::Drawing::Size(24, 23);
			this->buttonDictionaryClose->TabIndex = 4;
			this->buttonDictionaryClose->Text = L"X";
			this->buttonDictionaryClose->UseVisualStyleBackColor = true;
			this->buttonDictionaryClose->Click += gcnew System::EventHandler(this, &MyForm::buttonDictionaryClose_Click);
			// 
			// richTextBoxDictionaryInfo
			// 
			this->richTextBoxDictionaryInfo->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBoxDictionaryInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBoxDictionaryInfo->Location = System::Drawing::Point(176, 36);
			this->richTextBoxDictionaryInfo->Name = L"richTextBoxDictionaryInfo";
			this->richTextBoxDictionaryInfo->ReadOnly = true;
			this->richTextBoxDictionaryInfo->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBoxDictionaryInfo->Size = System::Drawing::Size(221, 480);
			this->richTextBoxDictionaryInfo->TabIndex = 2;
			this->richTextBoxDictionaryInfo->Text = L"";
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Location = System::Drawing::Point(176, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(221, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"�����������";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->listBoxDictionaryWords);
			this->panel1->Controls->Add(this->textBoxDictionarySearch);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(3, 16);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(173, 500);
			this->panel1->TabIndex = 1;
			// 
			// listBoxDictionaryWords
			// 
			this->listBoxDictionaryWords->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBoxDictionaryWords->FormattingEnabled = true;
			this->listBoxDictionaryWords->Location = System::Drawing::Point(0, 40);
			this->listBoxDictionaryWords->Name = L"listBoxDictionaryWords";
			this->listBoxDictionaryWords->Size = System::Drawing::Size(173, 460);
			this->listBoxDictionaryWords->TabIndex = 0;
			this->listBoxDictionaryWords->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBoxDictionaryWords_SelectedIndexChanged);
			// 
			// textBoxDictionarySearch
			// 
			this->textBoxDictionarySearch->Dock = System::Windows::Forms::DockStyle::Top;
			this->textBoxDictionarySearch->Location = System::Drawing::Point(0, 20);
			this->textBoxDictionarySearch->Name = L"textBoxDictionarySearch";
			this->textBoxDictionarySearch->Size = System::Drawing::Size(173, 20);
			this->textBoxDictionarySearch->TabIndex = 2;
			this->textBoxDictionarySearch->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxDictionarySearch_TextChanged);
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"�����";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 590);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->groupBoxDictionary);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(415, 200);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WordPad++";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBoxDictionary->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void �������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	File_name = nullptr;
	richTextBox1->Text = "";
	����toolStripStatusLabel1->Text = DateTime::Now.ToShortDateString();
	NeedSave = false;
}

private: System::Void �������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->InitialDirectory = Directory::GetCurrentDirectory();
	openFileDialog1->Filter = "RTF-����� (*.rtf)|*.rtf|��� ����� (*.*)|*.*";
	openFileDialog1->FileName = File_name;

	if (openFileDialog1->ShowDialog() == Forms::DialogResult::OK)
	{
		File_name = openFileDialog1->FileName;
		richTextBox1->LoadFile(File_name, RichTextBoxStreamType::RichText);
		��������toolStripStatusLabel1->Text = Path::GetFileName(File_name);
		����toolStripStatusLabel1->Text = File::GetCreationTime(File_name).ToShortDateString();
		NeedSave = false;
	}
}

private: System::Void ���������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (File_name == nullptr)
		������������ToolStripMenuItem1_Click(sender, e);
	else
	{
		richTextBox1->SaveFile(File_name, RichTextBoxStreamType::RichText);
		����toolStripStatusLabel1->Text = DateTime::Now.ToShortDateString();
		NeedSave = false;
	}
}

private: System::Void ������������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->InitialDirectory = Directory::GetCurrentDirectory();
	saveFileDialog1->Filter = "RTF-����� (*.rtf)|*.rtf|��� ����� (*.*)|*.*";
	saveFileDialog1->FileName = File_name;

	if (saveFileDialog1->ShowDialog() == Forms::DialogResult::OK)
	{
		File_name = saveFileDialog1->FileName;
		richTextBox1->SaveFile(File_name, RichTextBoxStreamType::RichText);
		����toolStripStatusLabel1->Text = DateTime::Now.ToShortDateString();
		NeedSave = false;
	}
}

private: System::Void ��������ToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	DataFormats::Format ^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
	if (richTextBox1->SelectionLength > 0)
	{
		Clipboard::SetData(myFormat->Name, richTextBox1->SelectedRtf);
		richTextBox1->SelectedRtf = "";
	}
}

private: System::Void ����������ToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	DataFormats::Format ^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
	if (richTextBox1->SelectionLength > 0)
	{
		Clipboard::SetData(myFormat->Name, richTextBox1->SelectedRtf);
	}
}

private: System::Void �������ToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	DataFormats::Format ^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
	if (Clipboard::ContainsData(myFormat->Name))
	{
		richTextBox1->Paste(myFormat);
		richTextBox1->Refresh();
	}
}

private: System::Void richTextBox1_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
	bool notEmpty = richTextBox1->SelectedText != "";

	��������ToolStripButton->Enabled = notEmpty;
	��������ToolStripMenuItem->Enabled = notEmpty;
	��������ToolStripMenuItem2->Enabled = notEmpty;
	����������ToolStripButton->Enabled = notEmpty;
	����������ToolStripMenuItem->Enabled = notEmpty;
	����������ToolStripMenuItem2->Enabled = notEmpty;
	�������������ToolStripMenuItem->Enabled = notEmpty;
}

private: System::Void �����������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->SelectAll();
}

private: System::Void ����StripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	ColorDialog ^ MyDialog = gcnew ColorDialog();
	MyDialog->Color = richTextBox1->ForeColor;

	if (MyDialog->ShowDialog() == Forms::DialogResult::OK)
		richTextBox1->SelectionColor = MyDialog->Color;
}

private: System::Void ������StripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	fontDialog1->Font = richTextBox1->Font;

	if (fontDialog1->ShowDialog() == Forms::DialogResult::OK)
		richTextBox1->SelectionFont = fontDialog1->Font;
}

private: System::Void ������StripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	FontStyle fs = richTextBox1->SelectionFont->Style;
	if (fs.HasFlag(FontStyle::Bold))
		fs = fs - FontStyle::Bold;
	else
		fs = fs + FontStyle::Bold;
	
	richTextBox1->SelectionFont = gcnew Drawing::Font(
		richTextBox1->SelectionFont->FontFamily,
		richTextBox1->SelectionFont->Size,
		fs);
}

private: System::Void �����ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

private: System::Void ������StripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	FontStyle fs = richTextBox1->SelectionFont->Style;
	if (fs.HasFlag(FontStyle::Italic))
		fs = fs - FontStyle::Italic;
	else
		fs = fs + FontStyle::Italic;

	richTextBox1->SelectionFont = gcnew Drawing::Font(richTextBox1->SelectionFont->FontFamily, richTextBox1->SelectionFont->Size, fs);
}

private: System::Void �������������StripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	FontStyle fs = richTextBox1->SelectionFont->Style;
	if (fs.HasFlag(FontStyle::Underline))
		fs = fs - FontStyle::Underline;
	else
		fs = fs + FontStyle::Underline;

	richTextBox1->SelectionFont = gcnew Drawing::Font(richTextBox1->SelectionFont->FontFamily, richTextBox1->SelectionFont->Size, fs);
}

private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (sender == nullptr || e->KeyCode == Keys::CapsLock || e->KeyCode == Keys::NumLock)
	{
		inscapsscrtoolStripStatusLabel2->Text = "";
		inscapsscrtoolStripStatusLabel2->Text += Console::CapsLock ? "CAPS" : "          ";
		inscapsscrtoolStripStatusLabel2->Text += " " + (Console::NumberLock ? "NUM" : "   ");
	}
}

private: System::Void MyForm_FormClosing(System::Object^   sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (NeedSave)
	{
		Forms::DialogResult res = MessageBox::Show("��������� �������� \""
			+ (File_name == nullptr ? "����� ��������� ��������.rtf" : File_name)
			+ "\" �� ��������. ���������?", "��������� ��������?",
			MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);

		if (res == Forms::DialogResult::Cancel)
		{
			e->Cancel = true;
			return;
		}
		else if (res == Forms::DialogResult::Yes)
			���������ToolStripMenuItem1_Click(sender, e);
	}
}
private: System::Void �����toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	int from = richTextBox1->SelectionStart + richTextBox1->SelectionLength;
	int i = richTextBox1->Text->IndexOf(����������toolStripTextBox1->Text, from);
	if (i == -1)
	{
		i = richTextBox1->Text->IndexOf(����������toolStripTextBox1->Text);
		if (i == -1)
		{
			MessageBox::Show("�� �������", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		MessageBox::Show("��������� ����� ���������. ����� � ������...", "�����", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	richTextBox1->SelectionStart = i;
	richTextBox1->SelectionLength = ����������toolStripTextBox1->Text->Length;
}
private: System::Void �������toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxDictionary->Visible = !groupBoxDictionary->Visible;
}
private: System::Void buttonDictionaryClose_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxDictionary->Hide();
}
private: System::Void textBoxDictionarySearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	dictionary->ViewWordsStartWith(listBoxDictionaryWords, textBoxDictionarySearch->Text);

	if (listBoxDictionaryWords->Items->Count == 1)
		listBoxDictionaryWords->SelectedIndex = 0;
}
private: System::Void listBoxDictionaryWords_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (listBoxDictionaryWords->SelectedIndex != -1)
	{
		Pair ^ pair = dictionary->FindByWord((String^)listBoxDictionaryWords->SelectedItem);
		richTextBoxDictionaryInfo->Text = pair->Word + ", " + pair->Info;
	}
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	NeedSave = true;
}
private: System::Void �������ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	DictionaryForm ^ dictionaryForm;
	dictionaryForm = gcnew DictionaryForm(dictionary);
	dictionaryForm->ShowDialog();
	dictionary->ViewWordsStartWith(listBoxDictionaryWords, textBoxDictionarySearch->Text);
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("WordPad++\n\n������� ������ 2018", "� ���������", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxDictionary->Show();
	textBoxDictionarySearch->Text = richTextBox1->SelectedText;
}
};
}
