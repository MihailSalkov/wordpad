#pragma once

#include "Dictionary.h"

namespace Practice1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PairForm
	/// </summary>
	public ref class PairForm : public System::Windows::Forms::Form
	{
	private:
		Dictionary ^ dictionary;
		Pair ^ pair;
	public:
		PairForm(Dictionary ^ dictionary)
		{
			InitializeComponent();

			this->dictionary = dictionary;
			pair = nullptr;
			buttonSave->Text = "Добавить";
			Text = "Добавление термина";
		}

		PairForm(Dictionary ^ dictionary, Pair ^ pair)
		{
			InitializeComponent();

			this->dictionary = dictionary;
			this->pair = pair;
			buttonSave->Text = "Сохранить";

			textBoxWord->Text = pair->Word;
			richTextBoxInfo->Text = pair->Info;
			Text = "Редактирование термина";
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PairForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxWord;
	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  richTextBoxInfo;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonCancel;

	private: System::Windows::Forms::Panel^  panel1;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PairForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxWord = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Location = System::Drawing::Point(-1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(485, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Термин";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBoxWord
			// 
			this->textBoxWord->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxWord->Location = System::Drawing::Point(12, 31);
			this->textBoxWord->Name = L"textBoxWord";
			this->textBoxWord->Size = System::Drawing::Size(460, 20);
			this->textBoxWord->TabIndex = 1;
			this->textBoxWord->TextChanged += gcnew System::EventHandler(this, &PairForm::textBoxWord_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Location = System::Drawing::Point(3, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(481, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Определение";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBoxInfo
			// 
			this->richTextBoxInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBoxInfo->Location = System::Drawing::Point(12, 92);
			this->richTextBoxInfo->Name = L"richTextBoxInfo";
			this->richTextBoxInfo->Size = System::Drawing::Size(460, 210);
			this->richTextBoxInfo->TabIndex = 3;
			this->richTextBoxInfo->Text = L"";
			this->richTextBoxInfo->TextChanged += gcnew System::EventHandler(this, &PairForm::textBoxWord_TextChanged);
			// 
			// buttonSave
			// 
			this->buttonSave->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonSave->Dock = System::Windows::Forms::DockStyle::Left;
			this->buttonSave->Enabled = false;
			this->buttonSave->Location = System::Drawing::Point(0, 0);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(92, 40);
			this->buttonSave->TabIndex = 4;
			this->buttonSave->Text = L"Сохранить";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &PairForm::buttonSave_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->Dock = System::Windows::Forms::DockStyle::Right;
			this->buttonCancel->Location = System::Drawing::Point(368, 0);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(92, 40);
			this->buttonCancel->TabIndex = 4;
			this->buttonCancel->Text = L"Отменить";
			this->buttonCancel->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->Controls->Add(this->buttonSave);
			this->panel1->Controls->Add(this->buttonCancel);
			this->panel1->Location = System::Drawing::Point(12, 309);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(460, 40);
			this->panel1->TabIndex = 5;
			// 
			// PairForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->buttonCancel;
			this->ClientSize = System::Drawing::Size(484, 361);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBoxInfo);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxWord);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(250, 250);
			this->Name = L"PairForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Редактирование термина";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pair == nullptr)
	{
		dictionary->Add(textBoxWord->Text, richTextBoxInfo->Text);
	}
	else
	{
		pair->Word = textBoxWord->Text->Trim()->ToUpper();
		pair->Info = richTextBoxInfo->Text->Trim()->Replace("\n", " ");
		dictionary->Save();
	}
}
private: System::Void textBoxWord_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	buttonSave->Enabled = textBoxWord->Text != "" && richTextBoxInfo->Text != "";
}
};
}
