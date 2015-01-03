#pragma once
#include <windows.h>
#include "MyForm.h"
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
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CoursEtu
	/// </summary>
	public ref class CoursEtu : public System::Windows::Forms::Form
	{
	public:
		CoursEtu(void)
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
		~CoursEtu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(826, 592);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nom etudiant";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Nom du cours";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Enseignant responsable";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Description";
			this->Column4->Name = L"Column4";
			// 
			// CoursEtu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(826, 592);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"CoursEtu";
			this->Text = L"CoursEtu";
			this->Load += gcnew System::EventHandler(this, &CoursEtu::CoursEtu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CoursEtu_Load(System::Object^  sender, System::EventArgs^  e) {
				 ifstream file("etu_co.txt");
				 String^ nom;
				 string tabl;
				 if (!file.is_open())
				 {
				 }
				 else{
					 array<String^>^ tab = gcnew array<String^>(100);
					 bool res = false;
					 int i = 0;
					 while (getline(file, tabl))
					 {
						 char *str1 = new char[tabl.length() + 1];
						 strcpy(str1, tabl.c_str());
						 char str2[] = ";";
						 char * nometu;
						 nometu = strtok(str1, str2);
						 nom = gcnew String(nometu);
						 file.close();
					 }
				 }
				 ifstream fichier("liste_cours_etu.txt");
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
						 char * cours;
						 char * ens;
						 char * desc;
						 char * nometu;
						 nometu = strtok(str1, str2);
						 cours = strtok(NULL, str2);
						 ens = strtok(NULL, str2);
						 desc = strtok(NULL, str2);
						 String^ c4 = gcnew String(desc);
						 String^ c = gcnew String(nometu);
						 String^ c2 = gcnew String(cours);
						 String^ c3 = gcnew String(ens);
						 if (c == nom){
							 if (c != nullptr){

								 tab[i] = c;

							 }
							 if (c2 != nullptr){


								 tab[i + 1] = c2;


							 }

							 if (c3 != nullptr){
								 tab[i + 2] = c3;
							 }

							 if (c4 != nullptr){
								 tab[i + 3] = c4;
							 }
						 }
							 i = i + 4;
						 }
					 

					 for (int j = 0; j < 99; j = j + 4){
						 if (tab[j] != nullptr && tab[j + 1] != nullptr){

							 dataGridView1->Rows->Add(tab[j], tab[j + 1], tab[j + 2],tab[j+3]);

						 }
					 }

				 }
	}
};
}
