#pragma once
#using <Microsoft.VisualBasic.dll>
using namespace System::Collections::Generic;
namespace Lab10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(391, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(308, 263);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PapayaWhip;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(228, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 43);
			this->button3->TabIndex = 14;
			this->button3->Text = L"���������";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Moccasin;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(228, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 52);
			this->button2->TabIndex = 13;
			this->button2->Text = L"�������� �������";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PapayaWhip;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(228, 115);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 55);
			this->button1->TabIndex = 12;
			this->button1->Text = L"������ �������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::PapayaWhip;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(20, 115);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(186, 204);
			this->listBox1->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(253, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(216, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"������ ����� �����:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::OrangeRed;
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(706, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"7. �������� ����� ����� �����. ��������� ���� �������� �������� �����.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(768, 527);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"���������� ������ �10";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		System::Collections::Generic::Queue<int> myQueue1; // ���������� �����
		int lastAddedValue;
		bool isQueueInitialized = false;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isQueueInitialized)
		{
			isQueueInitialized = true;
		}
		int size = Convert::ToInt32(textBox1->Text);
		if (myQueue1.Count < size)
		{
			String^ valueInput = Microsoft::VisualBasic::Interaction::InputBox("������ ������� �����:", "��������� ��������", "0");
			if (valueInput == "")
			{
				return;
			}

			int inputValue = Convert::ToInt32(valueInput);
			myQueue1.Enqueue(inputValue);
			listBox1->Items->Add(inputValue.ToString()); lastAddedValue = inputValue;
		}
		else
		{
			listBox1->Items->Add("��������� ��� �����");
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (isQueueInitialized)
	{
		if (myQueue1.Count > 0)
		{
			myQueue1.Dequeue();
			listBox1->Items->Clear();
			for each (int value in myQueue1)
			{
				listBox1->Items->Add(value.ToString());
			}
		}
		else
		{
			listBox1->Items->Add("����� �������");
		}
	}
	else
	{
		listBox1->Items->Add("����� �� �� ���� ������������");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0;
	for each (int value in myQueue1) {
		if (value % 2 == 1) {
			sum += value;
		}
	}
	MessageBox::Show("���� �������� �������� ����� ������� "+ sum.ToString(),"���������");
}
};
}
