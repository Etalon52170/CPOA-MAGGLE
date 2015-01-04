#pragma once

#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <atlstr.h>
#define _CRT_SECURE_NO_WARNINGS

namespace Projet2 {

	using namespace System::IO;
	using System::Runtime::InteropServices::Marshal;
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ProposeCours
	/// </summary>
	public ref class ProposeCours : public System::Windows::Forms::Form
	{
	public:
		ProposeCours(void)
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
		~ProposeCours()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(514, 385);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom du Cours";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Description";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 305);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProposeCours::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(328, 305);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Retour";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ProposeCours::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(188, 81);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(215, 22);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(188, 166);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(215, 84);
			this->textBox2->TabIndex = 5;
			// 
			// ProposeCours
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 385);
			this->Controls->Add(this->panel1);
			this->Name = L"ProposeCours";
			this->Text = L"ProposeCours";
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

	public: void Propose(void){

				//récupération Ens Co
				std::ifstream fichier0("etu_co.txt");
				std::string monNom;
				if (fichier0.is_open())
				{
					getline(fichier0, monNom);
					fichier0.close();
				}

				//Récupération Last ID générer
				std::ifstream fichier1("LastInsertID.txt");
				std::string monId;
				if (fichier1.is_open())
				{
					getline(fichier1, monId);
					fichier1.close();
				}

				int IDNum = atoi(monId.c_str());
				IDNum ++;

				/*String^ c;
				ifstream fichier1("etu_co.txt");
				string monTableau;
				if (!fichier1.is_open())
				{
				}
				else{
					bool res = false;
					int i = 0;
					while (getline(fichier1, monTableau))
					{
						char *str1 = new char[monTableau.length() + 1];
						strcpy(str1, monTableau.c_str());
						char str2[] = ";";
						char * ensco;
						ensco = strtok(str1, str2);

						c = gcnew String(ensco);
						fichier1.close();
					}
				}*/
				String^ C = gcnew String(monNom.c_str());

				string ID = std::to_string(IDNum);
				String^ ID2 = gcnew String(ID.c_str());
				string ID3 = netStr2CppStr(ID2);

				if (textBox1->Text != nullptr && textBox1->Text != nullptr){
					std::ofstream fichier("Cours_en_attente.txt", std::ios_base::app);
					if (fichier){
						String^ nom = textBox1->Text + ";";
						String^ description = textBox2->Text;
						if (nom != nullptr && description != nullptr){
							
							
							string name = netStr2CppStr(nom);

							string ensconnecte = netStr2CppStr(C);

							string desc = netStr2CppStr(description);
							fichier << ID3 + ";";
							fichier << name;
							fichier << ensconnecte + ";";
							fichier << desc + "\n";
							fichier.close();
						}
						else{
							MessageBox::Show("Champs non remplis");
						}

					}
					std::ofstream fichier2("liste_cours_ens.txt", std::ios_base::app);
					if (fichier2){
						String^ nomm = textBox1->Text;
						String^ description = textBox2->Text;
						if (nomm != nullptr && description != nullptr){


							string name = netStr2CppStr(nomm);
							string ensconnecte = netStr2CppStr(C);
							string desc = netStr2CppStr(description);
							fichier2 << ID3 + ";";
							fichier2 << ensconnecte + ";";
							fichier2 << name + ";";
							fichier2 << desc + ";en attente\n";
							fichier2.close();
						}
						else{
							MessageBox::Show("Champs non remplis");
						}

					}
				}
				//Modification de l'id inseré
				std::ofstream fichier("LastInsertID.txt", std::ios_base::app);
				if (fichier){
					FILE *f = fopen("LastInsertID.txt", "w");

					remove("azertyuiopqsdfghjklmwxcvbn0123456789");
					fichier << IDNum;
					fclose(f);
				}


	}
#pragma endregion
	private:System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Propose();

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();

	}
	};
}
