#pragma once

namespace My9lroop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for rozklad
	/// </summary>
	public ref class rozklad : public System::Windows::Forms::Form
	{
	public:
		rozklad(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~rozklad()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(rozklad::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Location = System::Drawing::Point(112, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 34);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Розклад";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(36, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(238, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Понеділок: 8:00-22:00";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Green;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(36, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(238, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Вівторок: 8:00-22:00";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Green;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(36, 110);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(238, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Середа: 8:00-22:00";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(36, 139);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(238, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Четвер: 8:00-22:00";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &rozklad::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Green;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(36, 168);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(238, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"П\'ятниця: 8:00-22:00";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Green;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(36, 197);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(238, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Субота: 10:00-19:00";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &rozklad::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Green;
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(36, 226);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(238, 23);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Неділя: 10:00-19:00";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Red;
			this->button9->Location = System::Drawing::Point(112, 274);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 34);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Вийти";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &rozklad::button9_Click);
			// 
			// rozklad
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(298, 346);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"rozklad";
			this->Text = L"rozklad";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
