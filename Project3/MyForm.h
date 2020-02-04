#include <cmath>
#include <ctime>
#include <string>
#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public: MyForm(void);
	protected: ~MyForm();
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  ule1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  ule2;
	private: System::Windows::Forms::Button^  ule3;
	private: System::Windows::Forms::Button^  ule4;
	private: System::Windows::Forms::Button^  ule5;
	private: System::Windows::Forms::Button^  ule6;






	private: System::ComponentModel::IContainer^  components;
#pragma region Windows Form Designer generated code
			 void InitializeComponent(void);
#pragma endregion
			 float ciastka = 0;
			 int czk = 1;
	public: String ^ nazwa;
	public: String ^ nazwa2;
			int koszt = 10;
			int koszt1 = 30;
			int koszt2 = 100;
			int koszt3 = 1000;
			int koszt4 = 20000;
			int koszt5 = 100000;		
			int cns = 1;
			int cena = 300;
			int cena1 = 900;
			int cena2 = 1600;
			int cena3 = 12000;
			int cena4 = 40000;
			int cena5 = 300000;
			int il = 0;
			int il1 = 0;
			int il2 = 0;
			int il3 = 0;
			int il4 = 0;
			int il5 = 0;
			int ilosc = 0;
			int ilosc1 = 0;
			int ilosc2 = 0;
			int ilosc3 = 0;
			int ilosc4 = 0;
			int ilosc5 = 0;
			int ulepsz(int ilosc, int koszt, int tick);
			void wysw();
			void wysw2();
			void wyswule(String ^ nazwa, int koszt, int ilosc);
			int ulepsz2(int ilosc, int koszt, int tick);
			void Project3::MyForm::wyswguzika(String^ nazwa, int koszt, int ilosc);
			System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				ciastka += czk;
				wysw();
			}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (koszt <= ciastka) {
			ilosc++;
			koszt = ulepsz(ilosc, koszt, 1);
		}
		nazwa = "kopalnia";
		wyswguzika(nazwa, koszt, ilosc);
		wysw();
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (koszt1 <= ciastka) {
			ilosc1++;
			koszt1 = ulepsz(ilosc1, koszt1, 3);
		}
		nazwa = "rafineria";
		wyswguzika(nazwa, koszt1, ilosc1);
		wysw();
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (koszt2 <= ciastka) {
			ilosc2++;
			koszt2 = ulepsz(ilosc2, koszt2, 10);
		}
		nazwa = "odlewnia";
		wyswguzika(nazwa, koszt2, ilosc2);
		wysw();
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if (koszt3 <= ciastka) {
			ilosc3++;
			koszt3 = ulepsz(ilosc3, koszt3, 100);
		}
		nazwa = "babcia";
		wyswguzika(nazwa, koszt3, ilosc3);
		wysw();
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if (koszt4 <= ciastka) {
			ilosc4++;
			koszt4 = ulepsz(ilosc4, koszt4, 2000);
		}
		nazwa = "farma";
		wyswguzika(nazwa, koszt4, ilosc4);
		wysw();
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if (koszt5 <= ciastka) {
			ilosc5++;
			koszt5 = ulepsz(ilosc5, koszt5, 10000);
		}
		nazwa = "bank";
		wyswguzika(nazwa, koszt5, ilosc5);
		wysw();
	}



	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		ciastka += cns;
		wysw();
	}


private: System::Void ule1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cena <= ciastka) {
		il++;
		cena = ulepsz2(il, cena, 1);
	}
	nazwa2 = "Ule1";
	wyswule(nazwa2, cena, il);
	wysw2();
}

private: System::Void ule2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cena1 <= ciastka) {
		il1++;
		cena1 = ulepsz2(il, cena1, 3);
	}
	nazwa2 = "Ule2";
	wyswule(nazwa2, cena1, il1);
	wysw2();

}

private: System::Void ule3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cena2 <= ciastka) {
		il2++;
		cena2 = ulepsz2(il2, cena2, 5);
	}
	nazwa2 = "Ule3";
	wyswule(nazwa2, cena2, il2);
	wysw2();

}

private: System::Void ule4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cena3 <= ciastka) {
		il3++;
		cena3 = ulepsz2(il3, cena, 100);
	}
	nazwa2 = "Ule4";
	wyswule(nazwa2, cena3, il3);
	wysw2();

}

private: System::Void ule5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cena4 <= ciastka) {
		il4++;
		cena4 = ulepsz2(il4, cena4, 400);
	}
	nazwa2 = "Ule5";
	wyswule(nazwa2, cena4, il4);
	wysw2();

}

private: System::Void ule6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cena5 <= ciastka) {
		il5++;
		cena5 = ulepsz2(il5, cena5, 3000);
	}
	nazwa2 = "Ule6";
	wyswule(nazwa2, cena5, il5);
	wysw2();

}

};

}

