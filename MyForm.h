#pragma once

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(122, 64);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 45);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox2->Location = System::Drawing::Point(122, 115);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(149, 45);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(122, 166);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(149, 45);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox4->Location = System::Drawing::Point(122, 217);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(149, 45);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox5->Location = System::Drawing::Point(122, 268);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(149, 45);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox6->Location = System::Drawing::Point(122, 319);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(149, 45);
			this->textBox6->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(4, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Risk Free Rate";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(4, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"sig";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(4, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"rbar";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(4, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"dt";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(4, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Alpha";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(4, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 16);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Face";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 24.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(314, 166);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(164, 96);
			this->button1->TabIndex = 13;
			this->button1->Text = L"計算\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 35.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBox7->Location = System::Drawing::Point(534, 166);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(142, 96);
			this->textBox7->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(576, 125);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 35);
			this->label7->TabIndex = 15;
			this->label7->Text = L"結果";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 468);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"新細明體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int output = test(System::Convert::ToInt16(textBox1->Text), System::Convert::ToInt16(textBox2->Text));

		textBox7->Text = System::Convert::ToString(output);
	}

	private: int test(int a, int b) {
		return a + b;
	}
};
}
