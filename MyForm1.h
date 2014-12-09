#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include "MyForm.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include "MyForm21.h"
#include "admin.h"


namespace Projet2 {
	using System::Runtime::InteropServices::Marshal;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>

	

	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(211, 268);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Connection";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(211, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Inscription";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(158, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(221, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Login";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(158, 185);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(221, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(541, 423);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"Connection ARCHE";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void connection(void){
				string etuco;
				char * type;
				int len_pass = textBox1->TextLength;
				int len_log = textBox2->TextLength;

				if (len_pass > 0 && len_log > 0){
					char* buf_log;
					buf_log = (char*)GlobalAlloc(GPTR, len_log + 1);
					char* buf_pass;
					buf_pass = (char*)GlobalAlloc(GPTR, len_pass + 1);
					String^ pass = textBox2->Text;
					String^ log = textBox1->Text;
					ifstream fichier("log_pw.txt");
					string monTableau;
					if (!fichier.is_open())
					{
					}
					else{
						bool res = false;
						while (getline(fichier, monTableau))
						{
							char *str1 = new char[monTableau.length() + 1];
							strcpy(str1, monTableau.c_str());
							char str2[] = ";";
							char * logfile;
							char * passfile;

							logfile = strtok(str1, str2);
							passfile = strtok(NULL, str2);
							String^ subslog = gcnew String(logfile);
							String^ subspass = gcnew String(passfile);
							
							
							if (subslog == log && subspass == pass){
								etuco = std::string(logfile);
							
								res = true;
								type = strtok(NULL, str2);
								String^ c = gcnew String(type);
								
								
								
							}
						}
						if (res){
							String^ c = gcnew String(type);
							if (c == "ETU"){
								std::ofstream fichier("etu_co.txt", std::ios_base::app);
								if (fichier){
									FILE *f = fopen("etu_co.txt", "w");
										
									remove("azertyuiopqsdfghjklmwxcvbn");
									fichier << etuco;
									MyForm2 ^etu = gcnew MyForm2();
									etu->Show();
									etuco.end();
									fclose(f);

								}
							}
							else{
								if (c == "ADM"){
									admin ^adm = gcnew admin();
									adm->Show();
								}
								else{
									if (c == "ENS"){

									}
								}
							}

						}
						else{

						}
					}
					fichier.close();
					GlobalFree((HANDLE)buf_log);
					GlobalFree((HANDLE)buf_pass);
				}

	}
			
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->connection();


	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 MyForm ^ins = gcnew MyForm();
			 ins->Show();
			 
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
}
};

}
