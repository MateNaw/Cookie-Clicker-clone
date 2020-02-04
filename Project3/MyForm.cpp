#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
Project3::MyForm::MyForm(void)
{
	InitializeComponent();

}
void Project3::MyForm::InitializeComponent(void)
{
	this->components = (gcnew System::ComponentModel::Container());
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->button2 = (gcnew System::Windows::Forms::Button());
	this->button3 = (gcnew System::Windows::Forms::Button());
	this->button4 = (gcnew System::Windows::Forms::Button());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
	this->button5 = (gcnew System::Windows::Forms::Button());
	this->button6 = (gcnew System::Windows::Forms::Button());
	this->button7 = (gcnew System::Windows::Forms::Button());
	this->ule1 = (gcnew System::Windows::Forms::Button());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->ule2 = (gcnew System::Windows::Forms::Button());
	this->ule3 = (gcnew System::Windows::Forms::Button());
	this->ule4 = (gcnew System::Windows::Forms::Button());
	this->ule5 = (gcnew System::Windows::Forms::Button());
	this->ule6 = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// button1
	// 
	this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
	this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
	this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
	this->button1->Location = System::Drawing::Point(624, 312);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(136, 78);
	this->button1->TabIndex = 0;
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(238)));
	this->label1->Location = System::Drawing::Point(632, 138);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(118, 25);
	this->label1->TabIndex = 1;
	this->label1->Text = L"Ciastka: 0";
	// 
	// button2
	// 
	this->button2->Location = System::Drawing::Point(12, 12);
	this->button2->Name = L"button2";
	this->button2->Size = System::Drawing::Size(184, 86);
	this->button2->TabIndex = 2;
	this->button2->Text = L"Kopalnia\nkoszt: 10\nilosc: 0";
	this->button2->UseVisualStyleBackColor = true;
	this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
	// 
	// button3
	// 
	this->button3->Location = System::Drawing::Point(12, 104);
	this->button3->Name = L"button3";
	this->button3->Size = System::Drawing::Size(184, 86);
	this->button3->TabIndex = 3;
	this->button3->Text = L"rafineria\nkoszt: 30\nilosc: 0";
	this->button3->UseVisualStyleBackColor = true;
	this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
	// 
	// button4
	// 
	this->button4->Location = System::Drawing::Point(12, 196);
	this->button4->Name = L"button4";
	this->button4->Size = System::Drawing::Size(184, 86);
	this->button4->TabIndex = 4;
	this->button4->Text = L"Odlewnia\nkoszt: 100\nilosc: 0";
	this->button4->UseVisualStyleBackColor = true;
	this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label2->Location = System::Drawing::Point(657, 477);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(70, 18);
	this->label2->TabIndex = 5;
	this->label2->Text = L"1 Cia/klik";
	// 
	// timer1
	// 
	this->timer1->Enabled = true;
	this->timer1->Interval = 1000;
	this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
	// 
	// button5
	// 
	this->button5->Location = System::Drawing::Point(12, 288);
	this->button5->Name = L"button5";
	this->button5->Size = System::Drawing::Size(184, 86);
	this->button5->TabIndex = 6;
	this->button5->Text = L"babcia\nkoszt: 1000\nilosc: 0";
	this->button5->UseVisualStyleBackColor = true;
	this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
	// 
	// button6
	// 
	this->button6->Location = System::Drawing::Point(12, 380);
	this->button6->Name = L"button6";
	this->button6->Size = System::Drawing::Size(184, 86);
	this->button6->TabIndex = 7;
	this->button6->Text = L"farma\nkoszt: 10000\nilosc: 0";
	this->button6->UseVisualStyleBackColor = true;
	this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
	// 
	// button7
	// 
	this->button7->Location = System::Drawing::Point(12, 472);
	this->button7->Name = L"button7";
	this->button7->Size = System::Drawing::Size(184, 86);
	this->button7->TabIndex = 8;
	this->button7->Text = L"bank\nkoszt: 10000\nilosc: 0";
	this->button7->UseVisualStyleBackColor = true;
	this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
	// 
	// ule1
	// 
	this->ule1->Location = System::Drawing::Point(1183, 12);
	this->ule1->Name = L"ule1";
	this->ule1->Size = System::Drawing::Size(184, 86);
	this->ule1->TabIndex = 9;
	this->ule1->Text = L"Ule1\n koszt: 300\n zakupiono 0";
	this->ule1->UseVisualStyleBackColor = true;
	this->ule1->Click += gcnew System::EventHandler(this, &MyForm::ule1_Click);
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	this->label3->Location = System::Drawing::Point(657, 505);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(62, 18);
	this->label3->TabIndex = 10;
	this->label3->Text = L"1 Cia/sec";
	// 
	// ule2
	// 
	this->ule2->Location = System::Drawing::Point(1183, 104);
	this->ule2->Name = L"ule2";
	this->ule2->Size = System::Drawing::Size(184, 86);
	this->ule2->TabIndex = 11;
	this->ule2->Text = L"Ule2\n koszt: 900\n zakupiono 0";
	this->ule2->UseVisualStyleBackColor = true;
	this->ule2->Click += gcnew System::EventHandler(this, &MyForm::ule2_Click);
	// 
	// ule3
	// 
	this->ule3->Location = System::Drawing::Point(1183, 196);
	this->ule3->Name = L"ule3";
	this->ule3->Size = System::Drawing::Size(184, 86);
	this->ule3->TabIndex = 12;
	this->ule3->Text = L"Ule3\n koszt: 1600\n zakupiono 0";
	this->ule3->UseVisualStyleBackColor = true;
	this->ule3->Click += gcnew System::EventHandler(this, &MyForm::ule3_Click);
	// 
	// ule4
	// 
	this->ule4->Location = System::Drawing::Point(1183, 288);
	this->ule4->Name = L"ule4";
	this->ule4->Size = System::Drawing::Size(184, 86);
	this->ule4->TabIndex = 13;
	this->ule4->Text = L"Ule4\n koszt: 12000\n zakupiono 0";
	this->ule4->UseVisualStyleBackColor = true;
	this->ule4->Click += gcnew System::EventHandler(this, &MyForm::ule4_Click);
	// 
	// ule5
	// 
	this->ule5->Location = System::Drawing::Point(1183, 380);
	this->ule5->Name = L"ule5";
	this->ule5->Size = System::Drawing::Size(184, 86);
	this->ule5->TabIndex = 14;
	this->ule5->Text = L"Ule5\n koszt: 40000\n zakupiono 0";
	this->ule5->UseVisualStyleBackColor = true;
	this->ule5->Click += gcnew System::EventHandler(this, &MyForm::ule5_Click);
	// 
	// ule6
	// 
	this->ule6->Location = System::Drawing::Point(1183, 472);
	this->ule6->Name = L"ule6";
	this->ule6->Size = System::Drawing::Size(184, 86);
	this->ule6->TabIndex = 15;
	this->ule6->Text = L"Ule6\n koszt: 300000\n zakupiono 0";
	this->ule6->UseVisualStyleBackColor = true;
	this->ule6->Click += gcnew System::EventHandler(this, &MyForm::ule6_Click);
	// 
	// MyForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
	this->ClientSize = System::Drawing::Size(1379, 629);
	this->Controls->Add(this->ule6);
	this->Controls->Add(this->ule5);
	this->Controls->Add(this->ule4);
	this->Controls->Add(this->ule3);
	this->Controls->Add(this->ule2);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->ule1);
	this->Controls->Add(this->button7);
	this->Controls->Add(this->button6);
	this->Controls->Add(this->button5);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->button4);
	this->Controls->Add(this->button3);
	this->Controls->Add(this->button2);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->button1);
	this->Name = L"MyForm";
	this->Text = L"MyForm";
	this->ResumeLayout(false);
	this->PerformLayout();

}
int Project3::MyForm::ulepsz(int ilosc, int koszt, int tick) {
		ciastka -= koszt;
		czk += tick;
		koszt = round(koszt * pow(1.2, ilosc));
	return koszt;
}
Project3::MyForm::~MyForm()
{
	if (components)
	{
		delete components;
	}
}
void Project3::MyForm::wyswguzika( String^ nazwa, int koszt, int ilosc) {
	String ^ il = System::Convert::ToString(ilosc);
	String ^ kszt = System::Convert::ToString(koszt);
	if(nazwa == "kopalnia")
		button2->Text = nazwa + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if(nazwa == "rafineria")
		button3->Text = nazwa + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if(nazwa == "odlewnia")
		button4->Text = nazwa + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if (nazwa == "babcia")
		button5->Text = nazwa + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if (nazwa == "farma")
		button6->Text = nazwa + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if (nazwa == "bank")
		button7->Text = nazwa + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	

}

void Project3::MyForm::wyswule(String ^ naz, int koszt, int ilosc) {
	String ^ il = System::Convert::ToString(ilosc);
	String ^ kszt = System::Convert::ToString(koszt);
	if (nazwa2 == "Ule1")
		ule1->Text = naz + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if (nazwa2 == "Ule2")
		ule2->Text = naz + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if (nazwa2 == "Ule3")
		ule3->Text = naz + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if (nazwa2 == "Ule4")
		ule4->Text = naz + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if (nazwa2 == "Ule5")
		ule5->Text = naz + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
	if (nazwa2 == "Ule6")
		ule6->Text = naz + "\n" + "koszt: " + kszt + "\nzakupiono: " + il;
}


void Project3::MyForm:: wysw() {
	String ^ ab = System::Convert::ToString(czk);
	String ^ Store = System::Convert::ToString(ciastka);
	label1->Text = "Ciastka: " + Store;
	label2->Text = ab + " Cia/klik";
}

void Project3::MyForm:: wysw2() {
	String ^ cos = System::Convert::ToString(cns);
	label3->Text = cos + " cia/sek";
}

int Project3::MyForm::ulepsz2(int ilosc, int koszt, int tick) {
		ciastka -= koszt;
		cns += tick;
		koszt = round(koszt * pow(1.2, ilosc));
		return koszt;
}


[STAThreadAttribute]
int main(array<String^>^ args)
{



	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MyForm form;
	Application::Run(%form);
	

	return 0;
}
