#pragma once
#include <windows.h>
#include "Inscription.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>

#include <atlstr.h>

namespace Projet2 {
	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de NewEnseignant
	/// </summary>
	public ref class NewEnseignant : public System::Windows::Forms::Form
	{
	public:
		NewEnseignant(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~NewEnseignant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(492, 414);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login enseignant";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mot de Passe";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(199, 206);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(209, 22);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(93, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewEnseignant::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(283, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Retour";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NewEnseignant::button2_Click);
			// 
			// NewEnseignant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 414);
			this->Controls->Add(this->panel1);
			this->Name = L"NewEnseignant";
			this->Text = L"Création enseignant";
			this->Load += gcnew System::EventHandler(this, &NewEnseignant::NewEnseignant_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
		public: string netStr2CppStr(String ^ ns)
		{
					char* str = (char*)Marshal::StringToHGlobalAnsi(ns).ToPointer();
					string ret(str);
					Marshal::FreeHGlobal(IntPtr(str));
					return ret;
		}
	public: void inscription(void){
				if (textBox1->Text != nullptr && textBox1->Text != nullptr){
					std::ofstream fichier("log_pw.txt", std::ios_base::app);
					if (fichier){
						String^ log = textBox1->Text + ";";
						String^ pass = textBox2->Text + ";";
						if (log != nullptr && pass != nullptr){


							string charslog = netStr2CppStr(log);
							string charspass = netStr2CppStr(pass);
							fichier << charslog;
							fichier << charspass;
							fichier << "ENS\n";
							fichier.close();
						}
						else{
							MessageBox::Show("Champs non remplis");
						}

					}
				}
	}
					
#pragma endregion
	private: System::Void NewEnseignant_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->inscription();
				 this->Hide();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
}
};
}
