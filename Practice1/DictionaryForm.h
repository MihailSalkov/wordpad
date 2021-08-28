#pragma once

#include "Dictionary.h"
#include "PairForm.h"

namespace Practice1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Windows;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� DictionaryForm
	/// </summary>
	public ref class DictionaryForm : public System::Windows::Forms::Form
	{
	private:
		Dictionary ^ dictionary;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem1;

			 Pair ^ selectPair;

			 property Pair ^ SelectPair {
				 void set(Pair ^ selectPair)
				 {
					 this->selectPair = selectPair;

					 if (selectPair == nullptr)
					 {
						 �������������ToolStripMenuItem->Enabled = false;
						 �������������ToolStripMenuItem1->Enabled = false;
						 �������ToolStripMenuItem->Enabled = false;
						 �������ToolStripMenuItem1->Enabled = false;
						 richTextBoxInfo->Text = "";
					 }
					 else
					 {
						 �������������ToolStripMenuItem->Enabled = true;
						 �������������ToolStripMenuItem1->Enabled = true;
						 �������ToolStripMenuItem->Enabled = true;
						 �������ToolStripMenuItem1->Enabled = true;
						 richTextBoxInfo->Text = selectPair->Word + ", " +selectPair->Info;
					 }
				 }
				 Pair ^ get()
				 {
					 return selectPair;
				 }
			 }

	public:
		DictionaryForm(Dictionary ^ dictionary)
		{
			InitializeComponent();
			
			this->dictionary = dictionary;
			dictionary->View(listBoxWords);
			SelectPair = nullptr;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~DictionaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBoxWords;
	private: System::Windows::Forms::TextBox^  textBoxSearch;
	protected:

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBoxInfo;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DictionaryForm::typeid));
			this->listBoxWords = (gcnew System::Windows::Forms::ListBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->�������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBoxWords
			// 
			this->listBoxWords->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBoxWords->ContextMenuStrip = this->contextMenuStrip1;
			this->listBoxWords->FormattingEnabled = true;
			this->listBoxWords->Location = System::Drawing::Point(6, 44);
			this->listBoxWords->Name = L"listBoxWords";
			this->listBoxWords->Size = System::Drawing::Size(188, 290);
			this->listBoxWords->TabIndex = 0;
			this->listBoxWords->SelectedIndexChanged += gcnew System::EventHandler(this, &DictionaryForm::listBoxWords_SelectedIndexChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�������������ToolStripMenuItem1,
					this->�������ToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(155, 48);
			// 
			// �������������ToolStripMenuItem1
			// 
			this->�������������ToolStripMenuItem1->Name = L"�������������ToolStripMenuItem1";
			this->�������������ToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->�������������ToolStripMenuItem1->Text = L"�������������";
			this->�������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &DictionaryForm::�������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
			this->�������ToolStripMenuItem1->Text = L"�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &DictionaryForm::�������ToolStripMenuItem_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxSearch->Location = System::Drawing::Point(6, 20);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(188, 20);
			this->textBoxSearch->TabIndex = 1;
			this->textBoxSearch->TextChanged += gcnew System::EventHandler(this, &DictionaryForm::textBoxSearch_TextChanged);
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�����";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBoxInfo
			// 
			this->richTextBoxInfo->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBoxInfo->ContextMenuStrip = this->contextMenuStrip1;
			this->richTextBoxInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBoxInfo->Location = System::Drawing::Point(200, 44);
			this->richTextBoxInfo->Name = L"richTextBoxInfo";
			this->richTextBoxInfo->ReadOnly = true;
			this->richTextBoxInfo->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBoxInfo->Size = System::Drawing::Size(284, 317);
			this->richTextBoxInfo->TabIndex = 3;
			this->richTextBoxInfo->Text = L"";
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Location = System::Drawing::Point(200, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(284, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"�����������";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->listBoxWords);
			this->panel1->Controls->Add(this->textBoxSearch);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 337);
			this->panel1->TabIndex = 5;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����������ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->�����������ToolStripMenuItem->Text = L"����� ������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &DictionaryForm::�����������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Enabled = false;
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->�������������ToolStripMenuItem->Text = L"�������������";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &DictionaryForm::�������������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Enabled = false;
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(63, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &DictionaryForm::�������ToolStripMenuItem_Click);
			// 
			// DictionaryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 361);
			this->Controls->Add(this->richTextBoxInfo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(440, 140);
			this->Name = L"DictionaryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"�������������� �������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DictionaryForm::DictionaryForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &DictionaryForm::DictionaryForm_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DictionaryForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void DictionaryForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
}
private: System::Void listBoxWords_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (listBoxWords->SelectedIndex == -1)
	{
		SelectPair = nullptr;
		return;
	}

	SelectPair = dictionary->FindByWord((String^)listBoxWords->SelectedItem);
}
private: System::Void textBoxSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	dictionary->ViewWordsStartWith(listBoxWords, textBoxSearch->Text);

	if (listBoxWords->Items->Count == 1)
		listBoxWords->SelectedIndex = 0;
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("������� ������ \"" + SelectPair->Word + "\"?", "�������?",
		MessageBoxButtons::OKCancel, MessageBoxIcon::Question
	   ) == Forms::DialogResult::OK)
	{
		dictionary->Remove(SelectPair);
		dictionary->View(listBoxWords);
	}
}
private: System::Void �����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PairForm ^ pairForm = gcnew PairForm(dictionary);
	if (pairForm->ShowDialog() == Forms::DialogResult::OK)
	{
		MessageBox::Show("������ ��������.", "���������� �������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		textBoxSearch->Text = "";
		dictionary->View(listBoxWords);
	}
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	PairForm ^ pairForm = gcnew PairForm(dictionary, SelectPair);
	if (pairForm->ShowDialog() == Forms::DialogResult::OK)
	{
		MessageBox::Show("������ ��������.", "�������������� �������", MessageBoxButtons::OK, MessageBoxIcon::Information);
		SelectPair = nullptr;
		dictionary->ViewWordsStartWith(listBoxWords, textBoxSearch->Text);
	}
}
};
}
