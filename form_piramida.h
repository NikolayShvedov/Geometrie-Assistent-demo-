#pragma once
#include "Piramida.h"

namespace Praktika3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� form_piramida
	/// </summary>
	public ref class form_piramida : public System::Windows::Forms::Form
	{
	public:
		form_piramida(void)
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
		~form_piramida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  num1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  num2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  num3;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  num4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  num5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label6;




	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form_piramida::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->num1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->num2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(524, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &form_piramida::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(342, 338);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(377, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������� ����������� ��������� \r\n   ��� ������� ������ ������ �\r\n   ������� ������"
				L" �����������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(377, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"a";
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(396, 76);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(149, 20);
			this->num1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(377, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"b";
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(396, 111);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(149, 20);
			this->num2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(377, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"h";
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(397, 148);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(148, 20);
			this->num3->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(378, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 25;
			this->label7->Text = L"�����:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(525, 234);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 24;
			this->button2->Text = L"���������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &form_piramida::button2_Click);
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(416, 208);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(146, 20);
			this->num4->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(378, 215);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 13);
			this->label5->TabIndex = 22;
			this->label5->Text = L"V";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(525, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 29;
			this->button3->Text = L"���������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &form_piramida::button3_Click);
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(416, 289);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(129, 20);
			this->num5->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(370, 264);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(163, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"������� ������ �����������:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(370, 296);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"S_poln";
			// 
			// form_piramida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 389);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"form_piramida";
			this->Text = L"Piramida";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		double number1 = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double number3 = System::Convert::ToDouble(num3->Text);
		piramida volume;
		if ((number1 > 0) && (number2 > 0) && (number3 > 0))
		{
			double decision1 = volume.Volume(number1, number2, number3);
			num4->Text = System::Convert::ToString(decision1);
		}
		else
		{
			num4->Text = "Error!!!";
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		double number1 = System::Convert::ToDouble(num1->Text);
		double number2 = System::Convert::ToDouble(num2->Text);
		double number3 = System::Convert::ToDouble(num3->Text);
		piramida surface_area;
		if ((number1 > 0) && (number2 > 0) && (number3 > 0))
		{
			double decision2 = surface_area.Surface_area(number1, number2, number3);
			num5->Text = System::Convert::ToString(decision2);
		}
		else
		{
			num5->Text = "Error!!!";
		}
	}
	};
}
