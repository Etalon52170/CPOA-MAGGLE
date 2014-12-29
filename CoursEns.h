#pragma once
#include <windows.h>
#include "Inscription.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>


#include <atlstr.h>
#define _CRT_SECURE_NO_WARNINGS
namespace Projet2 {

	using namespace System::IO;
	using namespace System;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CoursEns
	/// </summary>
	public ref class CoursEns : public System::Windows::Forms::Form
	{
	public:
		CoursEns(void)
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
		~CoursEns()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(422, 384);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(422, 384);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CoursEns::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nom du cours";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Description";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Etat";
			this->Column3->Name = L"Column3";
			// 
			// CoursEns
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 384);
			this->Controls->Add(this->panel1);
			this->Name = L"CoursEns";
			this->Text = L"Arche Enseignant";
			this->Load += gcnew System::EventHandler(this, &CoursEns::CoursEns_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void CoursEns_Load(System::Object^  sender, System::EventArgs^  e) {
				 boolean pareil;
				 
				 String^ name;
				 ifstream fichier1("etu_co.txt");
				 string montableau1;
				 if (!fichier1.is_open())
				 {
				 }
				 else{
					 array<String^>^ tab = gcnew array<String^>(100);
					 bool res = false;
					 int i = 0;
					 while (getline(fichier1, montableau1))
					 {
						 char *str1 = new char[montableau1.length() + 1];
						 strcpy(str1, montableau1.c_str());
						 char str2[] = ";";
						 char * nom;
						 nom = strtok(str1, str2);
						  name = gcnew String(nom);
						  fichier1.close();
					 }
				 }
				 ifstream fichier("liste_cours_ens.txt");
				 string monTableau;
				 if (!fichier.is_open())
				 {
				 }
				 else{
					 array<String^>^ tab = gcnew array<String^>(100);
					 bool res = false;
					 int i = 0;
					 while (getline(fichier, monTableau))
					 {
						 char *str1 = new char[monTableau.length() + 1];
						 strcpy(str1, monTableau.c_str());
						 char str2[] = ";";
						 char * logfile;
						 char * passfile;
						 char * desc;
						 char * n;
						 n = strtok(str1, str2);
						 logfile = strtok(NULL, str2);
						 passfile = strtok(NULL, str2);
						 desc = strtok(NULL, str2);
						 String^ cc = gcnew String(n);
						 String^ c = gcnew String(logfile);
						 String^ c2 = gcnew String(passfile);
						 String^ c3 = gcnew String(desc);
						 MessageBox::Show(cc);
						 ///MessageBox::Show(c2);
						 ///MessageBox::Show(c3);
						 
						 if (cc == name){
							 ///MessageBox::Show(cc + " " + name);
							 if (c != nullptr){
								 ///if (i == 2){
								 ///tab[i - 1] = c;
								 ///}
								 ///else{
								 tab[i] = c;
								 ///}
							 }
							 if (c2 != nullptr){


								 tab[i + 1] = c2;


							 }
							 if (c3 != nullptr){
								 tab[i + 2] = c3;
							 }
						 }
						 i = i + 4;
					 }
					 
					 for (int j = 0; j < 99; j = j + 4){
						 if (tab[j] != nullptr && tab[j + 1] != nullptr){
							 
								 dataGridView1->Rows->Add(tab[j], tab[j + 1], tab[j + 2]);
							 
						 }
						 
					 }
					 fichier.close();
				 }


	}
};
}
