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
	/// Ñâîäêà äëÿ MyForm
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
					 èìÿÔàéëàtoolStripStatusLabel1->Text = File_name == nullptr ? "Íîâûé òåêñòîâûé äîêóìåíò.rtf" : Path::GetFileName(File_name);

					 if (needSave)
						 èìÿÔàéëàtoolStripStatusLabel1->Text += " *";
				 }
				 bool get()
				 {
					 return needSave;
				 }
			 }
	private: System::Windows::Forms::ToolStripMenuItem^  ñåğâèñToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  îÏğîãğàììåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  íàéòèÂÑëîâàğåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator10;
	private: System::Windows::Forms::ToolStripMenuItem^  ñëîâàğüToolStripMenuItem;
	public:
		MyForm(void)
		{
			InitializeComponent();

			ñîçäàòüToolStripMenuItem1_Click(nullptr, nullptr);
			richTextBox1_SelectionChanged(nullptr, nullptr);
			MyForm_KeyDown(nullptr, nullptr);

			dictionary = gcnew Dictionary("dictionary.db");
			dictionary->View(listBoxDictionaryWords);
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	private: System::Windows::Forms::ToolStripButton^  ñëîâàğütoolStripButton1;
	private: System::Windows::Forms::ListBox^  listBoxDictionaryWords;
	private: System::Windows::Forms::RichTextBox^  richTextBoxDictionaryInfo;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBoxDictionarySearch;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonDictionaryClose;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âûğåçàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  ñîçäàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  îòêğûòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  ñîõğàíèòüToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^  âûğåçàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  êîïèğîâàòüToolStripButton;
	private: System::Windows::Forms::ToolStripButton^  âñòàâêàToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;

	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ôàéëToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîçäàòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  îòêğûòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ñîõğàíèòüêàêToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
	private: System::Windows::Forms::ToolStripMenuItem^  ïå÷àòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^  âûõîäToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ïğàâêàToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  âûğåçàòüToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  êîïèğîâàòüToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  âñòàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator9;
	private: System::Windows::Forms::ToolStripMenuItem^  âûäåëèòüâñåToolStripMenuItem1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripButton^  öâåòStripButton1;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ToolStripButton^  ôîğìàòStripButton1;
	private: System::Windows::Forms::ToolStripButton^  æèğíûéStripButton1;
	private: System::Windows::Forms::ToolStripButton^  êóğñèâStripButton1;
	private: System::Windows::Forms::ToolStripButton^  ïîä÷åğêèâàíèåStripButton1;

private: System::Windows::Forms::ToolStripStatusLabel^  èìÿÔàéëàtoolStripStatusLabel1;
private: System::Windows::Forms::ToolStripStatusLabel^  äàòàtoolStripStatusLabel1;
private: System::Windows::Forms::ToolStripStatusLabel^  inscapsscrtoolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripTextBox^  òåêñòÍàéòètoolStripTextBox1;

	private: System::Windows::Forms::ToolStripButton^  íàéòètoolStripButton1;

	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîçäàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñîõğàíèòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüêàêToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ïå÷àòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator10 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûõîäToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğåçàòüToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûäåëèòüâñåToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñåğâèñToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñëîâàğüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îÏğîãğàììåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->âûğåçàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->íàéòèÂÑëîâàğåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->ñîçäàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->îòêğûòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->ñîõğàíèòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âûğåçàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->êîïèğîâàòüToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->âñòàâêàToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->öâåòStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->ôîğìàòStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->æèğíûéStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->êóğñèâStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->ïîä÷åğêèâàíèåStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->òåêñòÍàéòètoolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->íàéòètoolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ñëîâàğütoolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->èìÿÔàéëàtoolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->äàòàtoolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
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
				this->ôàéëToolStripMenuItem1,
					this->ïğàâêàToolStripMenuItem1, this->ñåğâèñToolStripMenuItem, this->îÏğîãğàììåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->ShowItemToolTips = true;
			this->menuStrip1->Size = System::Drawing::Size(980, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem1
			// 
			this->ôàéëToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->ñîçäàòüToolStripMenuItem1,
					this->îòêğûòüToolStripMenuItem1, this->toolStripSeparator5, this->ñîõğàíèòüToolStripMenuItem1, this->ñîõğàíèòüêàêToolStripMenuItem1,
					this->toolStripSeparator6, this->ïå÷àòüToolStripMenuItem1, this->ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1, this->toolStripSeparator10,
					this->âûõîäToolStripMenuItem1
			});
			this->ôàéëToolStripMenuItem1->Name = L"ôàéëToolStripMenuItem1";
			this->ôàéëToolStripMenuItem1->Size = System::Drawing::Size(48, 20);
			this->ôàéëToolStripMenuItem1->Text = L"&Ôàéë";
			// 
			// ñîçäàòüToolStripMenuItem1
			// 
			this->ñîçäàòüToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîçäàòüToolStripMenuItem1.Image")));
			this->ñîçäàòüToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîçäàòüToolStripMenuItem1->Name = L"ñîçäàòüToolStripMenuItem1";
			this->ñîçäàòüToolStripMenuItem1->ShortcutKeyDisplayString = L"";
			this->ñîçäàòüToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->ñîçäàòüToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->ñîçäàòüToolStripMenuItem1->Text = L"&Ñîçäàòü";
			this->ñîçäàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñîçäàòüToolStripMenuItem1_Click);
			// 
			// îòêğûòüToolStripMenuItem1
			// 
			this->îòêğûòüToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"îòêğûòüToolStripMenuItem1.Image")));
			this->îòêğûòüToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->îòêğûòüToolStripMenuItem1->Name = L"îòêğûòüToolStripMenuItem1";
			this->îòêğûòüToolStripMenuItem1->ShortcutKeyDisplayString = L"";
			this->îòêğûòüToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->îòêğûòüToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->îòêğûòüToolStripMenuItem1->Text = L"&Îòêğûòü";
			this->îòêğûòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüToolStripMenuItem1_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(230, 6);
			// 
			// ñîõğàíèòüToolStripMenuItem1
			// 
			this->ñîõğàíèòüToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîõğàíèòüToolStripMenuItem1.Image")));
			this->ñîõğàíèòüToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõğàíèòüToolStripMenuItem1->Name = L"ñîõğàíèòüToolStripMenuItem1";
			this->ñîõğàíèòüToolStripMenuItem1->ShortcutKeyDisplayString = L"";
			this->ñîõğàíèòüToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->ñîõğàíèòüToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->ñîõğàíèòüToolStripMenuItem1->Text = L"&Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüToolStripMenuItem1_Click);
			// 
			// ñîõğàíèòüêàêToolStripMenuItem1
			// 
			this->ñîõğàíèòüêàêToolStripMenuItem1->Name = L"ñîõğàíèòüêàêToolStripMenuItem1";
			this->ñîõğàíèòüêàêToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->ñîõğàíèòüêàêToolStripMenuItem1->Text = L"Ñîõğàíèòü &êàê";
			this->ñîõğàíèòüêàêToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüêàêToolStripMenuItem1_Click);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(230, 6);
			// 
			// ïå÷àòüToolStripMenuItem1
			// 
			this->ïå÷àòüToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïå÷àòüToolStripMenuItem1.Image")));
			this->ïå÷àòüToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ïå÷àòüToolStripMenuItem1->Name = L"ïå÷àòüToolStripMenuItem1";
			this->ïå÷àòüToolStripMenuItem1->ShortcutKeyDisplayString = L"";
			this->ïå÷àòüToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->ïå÷àòüToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->ïå÷àòüToolStripMenuItem1->Text = L"&Ïå÷àòü";
			// 
			// ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1
			// 
			this->ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1.Image")));
			this->ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1->Name = L"ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1";
			this->ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->ïğåäâàğèòåëüíûéïğîñìîòğToolStripMenuItem1->Text = L"Ïğåäâàğèòåëüíûé ïğî&ñìîòğ";
			// 
			// toolStripSeparator10
			// 
			this->toolStripSeparator10->Name = L"toolStripSeparator10";
			this->toolStripSeparator10->Size = System::Drawing::Size(230, 6);
			// 
			// âûõîäToolStripMenuItem1
			// 
			this->âûõîäToolStripMenuItem1->Name = L"âûõîäToolStripMenuItem1";
			this->âûõîäToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->âûõîäToolStripMenuItem1->Size = System::Drawing::Size(233, 22);
			this->âûõîäToolStripMenuItem1->Text = L"Âû&õîä";
			this->âûõîäToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::âûõîäToolStripMenuItem1_Click);
			// 
			// ïğàâêàToolStripMenuItem1
			// 
			this->ïğàâêàToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->âûğåçàòüToolStripMenuItem2,
					this->êîïèğîâàòüToolStripMenuItem2, this->âñòàâêàToolStripMenuItem, this->toolStripSeparator9, this->âûäåëèòüâñåToolStripMenuItem1
			});
			this->ïğàâêàToolStripMenuItem1->Name = L"ïğàâêàToolStripMenuItem1";
			this->ïğàâêàToolStripMenuItem1->Size = System::Drawing::Size(59, 20);
			this->ïğàâêàToolStripMenuItem1->Text = L"&Ïğàâêà";
			// 
			// âûğåçàòüToolStripMenuItem2
			// 
			this->âûğåçàòüToolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âûğåçàòüToolStripMenuItem2.Image")));
			this->âûğåçàòüToolStripMenuItem2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âûğåçàòüToolStripMenuItem2->Name = L"âûğåçàòüToolStripMenuItem2";
			this->âûğåçàòüToolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->âûğåçàòüToolStripMenuItem2->Size = System::Drawing::Size(190, 22);
			this->âûğåçàòüToolStripMenuItem2->Text = L"Âûğåçàò&ü";
			this->âûğåçàòüToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::âûğåçàòüToolStripButton_Click);
			// 
			// êîïèğîâàòüToolStripMenuItem2
			// 
			this->êîïèğîâàòüToolStripMenuItem2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"êîïèğîâàòüToolStripMenuItem2.Image")));
			this->êîïèğîâàòüToolStripMenuItem2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->êîïèğîâàòüToolStripMenuItem2->Name = L"êîïèğîâàòüToolStripMenuItem2";
			this->êîïèğîâàòüToolStripMenuItem2->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->êîïèğîâàòüToolStripMenuItem2->Size = System::Drawing::Size(190, 22);
			this->êîïèğîâàòüToolStripMenuItem2->Text = L"&Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::êîïèğîâàòüToolStripButton_Click);
			// 
			// âñòàâêàToolStripMenuItem
			// 
			this->âñòàâêàToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âñòàâêàToolStripMenuItem.Image")));
			this->âñòàâêàToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âñòàâêàToolStripMenuItem->Name = L"âñòàâêàToolStripMenuItem";
			this->âñòàâêàToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->âñòàâêàToolStripMenuItem->Size = System::Drawing::Size(190, 22);
			this->âñòàâêàToolStripMenuItem->Text = L"Âñò&àâêà";
			this->âñòàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âñòàâêàToolStripButton_Click);
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			this->toolStripSeparator9->Size = System::Drawing::Size(187, 6);
			// 
			// âûäåëèòüâñåToolStripMenuItem1
			// 
			this->âûäåëèòüâñåToolStripMenuItem1->Name = L"âûäåëèòüâñåToolStripMenuItem1";
			this->âûäåëèòüâñåToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->âûäåëèòüâñåToolStripMenuItem1->Size = System::Drawing::Size(190, 22);
			this->âûäåëèòüâñåToolStripMenuItem1->Text = L"Âûäåëèòü &âñå";
			this->âûäåëèòüâñåToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::âûäåëèòüâñåToolStripMenuItem1_Click);
			// 
			// ñåğâèñToolStripMenuItem
			// 
			this->ñåğâèñToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ñëîâàğüToolStripMenuItem });
			this->ñåğâèñToolStripMenuItem->Name = L"ñåğâèñToolStripMenuItem";
			this->ñåğâèñToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ñåğâèñToolStripMenuItem->Text = L"Ñåğâèñ";
			// 
			// ñëîâàğüToolStripMenuItem
			// 
			this->ñëîâàğüToolStripMenuItem->Name = L"ñëîâàğüToolStripMenuItem";
			this->ñëîâàğüToolStripMenuItem->Size = System::Drawing::Size(211, 22);
			this->ñëîâàğüToolStripMenuItem->Text = L"Ğåäàêòèğîâàíèå ñëîâàğÿ";
			this->ñëîâàğüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñëîâàğüToolStripMenuItem_Click_1);
			// 
			// îÏğîãğàììåToolStripMenuItem
			// 
			this->îÏğîãğàììåToolStripMenuItem->Name = L"îÏğîãğàììåToolStripMenuItem";
			this->îÏğîãğàììåToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->îÏğîãğàììåToolStripMenuItem->Text = L"Î ïğîãğàììå";
			this->îÏğîãğàììåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::îÏğîãğàììåToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->âûğåçàòüToolStripMenuItem,
					this->êîïèğîâàòüToolStripMenuItem, this->âñòàâèòüToolStripMenuItem, this->toolStripSeparator2, this->íàéòèÂÑëîâàğåToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(182, 98);
			// 
			// âûğåçàòüToolStripMenuItem
			// 
			this->âûğåçàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âûğåçàòüToolStripMenuItem.Image")));
			this->âûğåçàòüToolStripMenuItem->Name = L"âûğåçàòüToolStripMenuItem";
			this->âûğåçàòüToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl+X";
			this->âûğåçàòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->âûğåçàòüToolStripMenuItem->Text = L"Âûğåçàòü";
			this->âûğåçàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âûğåçàòüToolStripButton_Click);
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"êîïèğîâàòüToolStripMenuItem.Image")));
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			this->êîïèğîâàòüToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl+C";
			this->êîïèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->êîïèğîâàòüToolStripMenuItem->Text = L"Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êîïèğîâàòüToolStripButton_Click);
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âñòàâèòüToolStripMenuItem.Image")));
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			this->âñòàâèòüToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl+V";
			this->âñòàâèòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->âñòàâèòüToolStripMenuItem->Text = L"Âñòàâèòü";
			this->âñòàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âñòàâêàToolStripButton_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(178, 6);
			// 
			// íàéòèÂÑëîâàğåToolStripMenuItem
			// 
			this->íàéòèÂÑëîâàğåToolStripMenuItem->Name = L"íàéòèÂÑëîâàğåToolStripMenuItem";
			this->íàéòèÂÑëîâàğåToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->íàéòèÂÑëîâàğåToolStripMenuItem->Text = L"Íàéòè â ñëîâàğå";
			this->íàéòèÂÑëîâàğåToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íàéòèÂÑëîâàğåToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(19) {
				this->ñîçäàòüToolStripButton,
					this->îòêğûòüToolStripButton, this->ñîõğàíèòüToolStripButton, this->toolStripSeparator, this->âûğåçàòüToolStripButton, this->êîïèğîâàòüToolStripButton,
					this->âñòàâêàToolStripButton, this->toolStripSeparator4, this->öâåòStripButton1, this->ôîğìàòStripButton1, this->toolStripSeparator1,
					this->æèğíûéStripButton1, this->êóğñèâStripButton1, this->ïîä÷åğêèâàíèåStripButton1, this->toolStripSeparator3, this->òåêñòÍàéòètoolStripTextBox1,
					this->íàéòètoolStripButton1, this->toolStripSeparator8, this->ñëîâàğütoolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 24);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(980, 25);
			this->toolStrip1->TabIndex = 2;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// ñîçäàòüToolStripButton
			// 
			this->ñîçäàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîçäàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîçäàòüToolStripButton.Image")));
			this->ñîçäàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîçäàòüToolStripButton->Name = L"ñîçäàòüToolStripButton";
			this->ñîçäàòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ñîçäàòüToolStripButton->Text = L"&Ñîçäàòü";
			this->ñîçäàòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::ñîçäàòüToolStripMenuItem1_Click);
			// 
			// îòêğûòüToolStripButton
			// 
			this->îòêğûòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->îòêğûòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"îòêğûòüToolStripButton.Image")));
			this->îòêğûòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->îòêğûòüToolStripButton->Name = L"îòêğûòüToolStripButton";
			this->îòêğûòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->îòêğûòüToolStripButton->Text = L"&Îòêğûòü";
			this->îòêğûòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::îòêğûòüToolStripMenuItem1_Click);
			// 
			// ñîõğàíèòüToolStripButton
			// 
			this->ñîõğàíèòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ñîõğàíèòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñîõğàíèòüToolStripButton.Image")));
			this->ñîõğàíèòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñîõğàíèòüToolStripButton->Name = L"ñîõğàíèòüToolStripButton";
			this->ñîõğàíèòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->ñîõğàíèòüToolStripButton->Text = L"&Ñîõğàíèòü";
			this->ñîõğàíèòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::ñîõğàíèòüToolStripMenuItem1_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 25);
			// 
			// âûğåçàòüToolStripButton
			// 
			this->âûğåçàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âûğåçàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âûğåçàòüToolStripButton.Image")));
			this->âûğåçàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âûğåçàòüToolStripButton->Name = L"âûğåçàòüToolStripButton";
			this->âûğåçàòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->âûğåçàòüToolStripButton->Text = L"Â&ûğåçàòü";
			this->âûğåçàòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::âûğåçàòüToolStripButton_Click);
			// 
			// êîïèğîâàòüToolStripButton
			// 
			this->êîïèğîâàòüToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->êîïèğîâàòüToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"êîïèğîâàòüToolStripButton.Image")));
			this->êîïèğîâàòüToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->êîïèğîâàòüToolStripButton->Name = L"êîïèğîâàòüToolStripButton";
			this->êîïèğîâàòüToolStripButton->Size = System::Drawing::Size(23, 22);
			this->êîïèğîâàòüToolStripButton->Text = L"&Êîïèğîâàòü";
			this->êîïèğîâàòüToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::êîïèğîâàòüToolStripButton_Click);
			// 
			// âñòàâêàToolStripButton
			// 
			this->âñòàâêàToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->âñòàâêàToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âñòàâêàToolStripButton.Image")));
			this->âñòàâêàToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->âñòàâêàToolStripButton->Name = L"âñòàâêàToolStripButton";
			this->âñòàâêàToolStripButton->Size = System::Drawing::Size(23, 22);
			this->âñòàâêàToolStripButton->Text = L"Âñò&àâêà";
			this->âñòàâêàToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::âñòàâêàToolStripButton_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 25);
			// 
			// öâåòStripButton1
			// 
			this->öâåòStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->öâåòStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"öâåòStripButton1.Image")));
			this->öâåòStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->öâåòStripButton1->Name = L"öâåòStripButton1";
			this->öâåòStripButton1->Size = System::Drawing::Size(37, 22);
			this->öâåòStripButton1->Text = L"Öâåò";
			this->öâåòStripButton1->Click += gcnew System::EventHandler(this, &MyForm::öâåòStripButton1_Click);
			// 
			// ôîğìàòStripButton1
			// 
			this->ôîğìàòStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ôîğìàòStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ôîğìàòStripButton1.Image")));
			this->ôîğìàòStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ôîğìàòStripButton1->Name = L"ôîğìàòStripButton1";
			this->ôîğìàòStripButton1->Size = System::Drawing::Size(54, 22);
			this->ôîğìàòStripButton1->Text = L"Ôîğìàò";
			this->ôîğìàòStripButton1->Click += gcnew System::EventHandler(this, &MyForm::ôîğìàòStripButton1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// æèğíûéStripButton1
			// 
			this->æèğíûéStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->æèğíûéStripButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->æèğíûéStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"æèğíûéStripButton1.Image")));
			this->æèğíûéStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->æèğíûéStripButton1->Name = L"æèğíûéStripButton1";
			this->æèğíûéStripButton1->Size = System::Drawing::Size(23, 22);
			this->æèğíûéStripButton1->Text = L"Æ";
			this->æèğíûéStripButton1->Click += gcnew System::EventHandler(this, &MyForm::æèğíûéStripButton1_Click);
			// 
			// êóğñèâStripButton1
			// 
			this->êóğñèâStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->êóğñèâStripButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic));
			this->êóğñèâStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"êóğñèâStripButton1.Image")));
			this->êóğñèâStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->êóğñèâStripButton1->Name = L"êóğñèâStripButton1";
			this->êóğñèâStripButton1->Size = System::Drawing::Size(23, 22);
			this->êóğñèâStripButton1->Text = L"Ê";
			this->êóğñèâStripButton1->Click += gcnew System::EventHandler(this, &MyForm::êóğñèâStripButton1_Click);
			// 
			// ïîä÷åğêèâàíèåStripButton1
			// 
			this->ïîä÷åğêèâàíèåStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ïîä÷åğêèâàíèåStripButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Underline));
			this->ïîä÷åğêèâàíèåStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ïîä÷åğêèâàíèåStripButton1.Image")));
			this->ïîä÷åğêèâàíèåStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ïîä÷åğêèâàíèåStripButton1->Name = L"ïîä÷åğêèâàíèåStripButton1";
			this->ïîä÷åğêèâàíèåStripButton1->Size = System::Drawing::Size(23, 22);
			this->ïîä÷åğêèâàíèåStripButton1->Text = L"Ï";
			this->ïîä÷åğêèâàíèåStripButton1->Click += gcnew System::EventHandler(this, &MyForm::ïîä÷åğêèâàíèåStripButton1_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// òåêñòÍàéòètoolStripTextBox1
			// 
			this->òåêñòÍàéòètoolStripTextBox1->Name = L"òåêñòÍàéòètoolStripTextBox1";
			this->òåêñòÍàéòètoolStripTextBox1->Size = System::Drawing::Size(100, 25);
			// 
			// íàéòètoolStripButton1
			// 
			this->íàéòètoolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->íàéòètoolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"íàéòètoolStripButton1.Image")));
			this->íàéòètoolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->íàéòètoolStripButton1->Name = L"íàéòètoolStripButton1";
			this->íàéòètoolStripButton1->Size = System::Drawing::Size(45, 22);
			this->íàéòètoolStripButton1->Text = L"Íàéòè";
			this->íàéòètoolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::íàéòètoolStripButton1_Click);
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(6, 25);
			// 
			// ñëîâàğütoolStripButton1
			// 
			this->ñëîâàğütoolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->ñëîâàğütoolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ñëîâàğütoolStripButton1.Image")));
			this->ñëîâàğütoolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ñëîâàğütoolStripButton1->Name = L"ñëîâàğütoolStripButton1";
			this->ñëîâàğütoolStripButton1->Size = System::Drawing::Size(58, 22);
			this->ñëîâàğütoolStripButton1->Text = L"Ñëîâàğü";
			this->ñëîâàğütoolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::ñëîâàğütoolStripButton1_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->èìÿÔàéëàtoolStripStatusLabel1,
					this->äàòàtoolStripStatusLabel1, this->inscapsscrtoolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 568);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(980, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// èìÿÔàéëàtoolStripStatusLabel1
			// 
			this->èìÿÔàéëàtoolStripStatusLabel1->AutoSize = false;
			this->èìÿÔàéëàtoolStripStatusLabel1->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->èìÿÔàéëàtoolStripStatusLabel1->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->èìÿÔàéëàtoolStripStatusLabel1->Name = L"èìÿÔàéëàtoolStripStatusLabel1";
			this->èìÿÔàéëàtoolStripStatusLabel1->Size = System::Drawing::Size(300, 17);
			this->èìÿÔàéëàtoolStripStatusLabel1->Text = L"Èìÿ ôàéëà";
			this->èìÿÔàéëàtoolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// äàòàtoolStripStatusLabel1
			// 
			this->äàòàtoolStripStatusLabel1->AutoSize = false;
			this->äàòàtoolStripStatusLabel1->BorderSides = static_cast<System::Windows::Forms::ToolStripStatusLabelBorderSides>((((System::Windows::Forms::ToolStripStatusLabelBorderSides::Left | System::Windows::Forms::ToolStripStatusLabelBorderSides::Top)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Right)
				| System::Windows::Forms::ToolStripStatusLabelBorderSides::Bottom));
			this->äàòàtoolStripStatusLabel1->BorderStyle = System::Windows::Forms::Border3DStyle::SunkenInner;
			this->äàòàtoolStripStatusLabel1->Name = L"äàòàtoolStripStatusLabel1";
			this->äàòàtoolStripStatusLabel1->Size = System::Drawing::Size(80, 17);
			this->äàòàtoolStripStatusLabel1->Text = L"Äàòà";
			this->äàòàtoolStripStatusLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->openFileDialog1->FileName = L"Òåêñòîâûé äîêóìåíò.rtf";
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
			this->groupBoxDictionary->Text = L"Ñëîâàğü";
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
			this->label2->Text = L"Îïğåäåëåíèå";
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
			this->label1->Text = L"Ïîèñê";
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

private: System::Void ñîçäàòüToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	File_name = nullptr;
	richTextBox1->Text = "";
	äàòàtoolStripStatusLabel1->Text = DateTime::Now.ToShortDateString();
	NeedSave = false;
}

private: System::Void îòêğûòüToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->InitialDirectory = Directory::GetCurrentDirectory();
	openFileDialog1->Filter = "RTF-ôàéëû (*.rtf)|*.rtf|Âñå ôàéëû (*.*)|*.*";
	openFileDialog1->FileName = File_name;

	if (openFileDialog1->ShowDialog() == Forms::DialogResult::OK)
	{
		File_name = openFileDialog1->FileName;
		richTextBox1->LoadFile(File_name, RichTextBoxStreamType::RichText);
		èìÿÔàéëàtoolStripStatusLabel1->Text = Path::GetFileName(File_name);
		äàòàtoolStripStatusLabel1->Text = File::GetCreationTime(File_name).ToShortDateString();
		NeedSave = false;
	}
}

private: System::Void ñîõğàíèòüToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (File_name == nullptr)
		ñîõğàíèòüêàêToolStripMenuItem1_Click(sender, e);
	else
	{
		richTextBox1->SaveFile(File_name, RichTextBoxStreamType::RichText);
		äàòàtoolStripStatusLabel1->Text = DateTime::Now.ToShortDateString();
		NeedSave = false;
	}
}

private: System::Void ñîõğàíèòüêàêToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->InitialDirectory = Directory::GetCurrentDirectory();
	saveFileDialog1->Filter = "RTF-ôàéëû (*.rtf)|*.rtf|Âñå ôàéëû (*.*)|*.*";
	saveFileDialog1->FileName = File_name;

	if (saveFileDialog1->ShowDialog() == Forms::DialogResult::OK)
	{
		File_name = saveFileDialog1->FileName;
		richTextBox1->SaveFile(File_name, RichTextBoxStreamType::RichText);
		äàòàtoolStripStatusLabel1->Text = DateTime::Now.ToShortDateString();
		NeedSave = false;
	}
}

private: System::Void âûğåçàòüToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	DataFormats::Format ^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
	if (richTextBox1->SelectionLength > 0)
	{
		Clipboard::SetData(myFormat->Name, richTextBox1->SelectedRtf);
		richTextBox1->SelectedRtf = "";
	}
}

private: System::Void êîïèğîâàòüToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	DataFormats::Format ^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
	if (richTextBox1->SelectionLength > 0)
	{
		Clipboard::SetData(myFormat->Name, richTextBox1->SelectedRtf);
	}
}

private: System::Void âñòàâêàToolStripButton_Click(System::Object^  sender, System::EventArgs^  e) {
	DataFormats::Format ^ myFormat = DataFormats::GetFormat(DataFormats::Rtf);
	if (Clipboard::ContainsData(myFormat->Name))
	{
		richTextBox1->Paste(myFormat);
		richTextBox1->Refresh();
	}
}

private: System::Void richTextBox1_SelectionChanged(System::Object^  sender, System::EventArgs^  e) {
	bool notEmpty = richTextBox1->SelectedText != "";

	âûğåçàòüToolStripButton->Enabled = notEmpty;
	âûğåçàòüToolStripMenuItem->Enabled = notEmpty;
	âûğåçàòüToolStripMenuItem2->Enabled = notEmpty;
	êîïèğîâàòüToolStripButton->Enabled = notEmpty;
	êîïèğîâàòüToolStripMenuItem->Enabled = notEmpty;
	êîïèğîâàòüToolStripMenuItem2->Enabled = notEmpty;
	íàéòèÂÑëîâàğåToolStripMenuItem->Enabled = notEmpty;
}

private: System::Void âûäåëèòüâñåToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	richTextBox1->SelectAll();
}

private: System::Void öâåòStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	ColorDialog ^ MyDialog = gcnew ColorDialog();
	MyDialog->Color = richTextBox1->ForeColor;

	if (MyDialog->ShowDialog() == Forms::DialogResult::OK)
		richTextBox1->SelectionColor = MyDialog->Color;
}

private: System::Void ôîğìàòStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	fontDialog1->Font = richTextBox1->Font;

	if (fontDialog1->ShowDialog() == Forms::DialogResult::OK)
		richTextBox1->SelectionFont = fontDialog1->Font;
}

private: System::Void æèğíûéStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
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

private: System::Void âûõîäToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

private: System::Void êóğñèâStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	FontStyle fs = richTextBox1->SelectionFont->Style;
	if (fs.HasFlag(FontStyle::Italic))
		fs = fs - FontStyle::Italic;
	else
		fs = fs + FontStyle::Italic;

	richTextBox1->SelectionFont = gcnew Drawing::Font(richTextBox1->SelectionFont->FontFamily, richTextBox1->SelectionFont->Size, fs);
}

private: System::Void ïîä÷åğêèâàíèåStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
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
		Forms::DialogResult res = MessageBox::Show("Òåêñòîâûé äîêóìåíò \""
			+ (File_name == nullptr ? "Íîâûé òåêñòîâûé äîêóìåíò.rtf" : File_name)
			+ "\" íå ñîõğàíåí. Ñîõğàíèòü?", "Ñîõğàíèòü äîêóìåíò?",
			MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);

		if (res == Forms::DialogResult::Cancel)
		{
			e->Cancel = true;
			return;
		}
		else if (res == Forms::DialogResult::Yes)
			ñîõğàíèòüToolStripMenuItem1_Click(sender, e);
	}
}
private: System::Void íàéòètoolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
	int from = richTextBox1->SelectionStart + richTextBox1->SelectionLength;
	int i = richTextBox1->Text->IndexOf(òåêñòÍàéòètoolStripTextBox1->Text, from);
	if (i == -1)
	{
		i = richTextBox1->Text->IndexOf(òåêñòÍàéòètoolStripTextBox1->Text);
		if (i == -1)
		{
			MessageBox::Show("Íå íàéäåíî", "Ïîèñê", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}
		MessageBox::Show("Äîñòèãíóò êîíåö äîêóìåíòà. Ïîèñê ñ íà÷àëà...", "Ïîèñê", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	richTextBox1->SelectionStart = i;
	richTextBox1->SelectionLength = òåêñòÍàéòètoolStripTextBox1->Text->Length;
}
private: System::Void ñëîâàğütoolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
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
private: System::Void ñëîâàğüToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
	DictionaryForm ^ dictionaryForm;
	dictionaryForm = gcnew DictionaryForm(dictionary);
	dictionaryForm->ShowDialog();
	dictionary->ViewWordsStartWith(listBoxDictionaryWords, textBoxDictionarySearch->Text);
}
private: System::Void îÏğîãğàììåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("WordPad++\n\nÑàëüêîâ Ìèõàèë 2018", "Î ïğîãğàììå", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void íàéòèÂÑëîâàğåToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBoxDictionary->Show();
	textBoxDictionarySearch->Text = richTextBox1->SelectedText;
}
};
}
