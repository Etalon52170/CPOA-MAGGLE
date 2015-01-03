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
	/// Description résumée de MyForm21
	/// </summary>
	public ref class MyForm21 : public System::Windows::Forms::Form
	{
	public:
		MyForm21(void)
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
		~MyForm21()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  sinscrireToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Cours;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Enseignant;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;


	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Cours = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Enseignant = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->sinscrireToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(485, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Cours,
					this->Enseignant, this->Column1
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 24);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(485, 391);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm21::dataGridView1_CellContentClick);
			this->dataGridView1->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &MyForm21::dataGridView1_CellMouseClick);
			// 
			// Cours
			// 
			this->Cours->HeaderText = L"Cours";
			this->Cours->Name = L"Cours";
			this->Cours->ReadOnly = true;
			// 
			// Enseignant
			// 
			this->Enseignant->HeaderText = L"Enseignant Responsable";
			this->Enseignant->Name = L"Enseignant";
			this->Enseignant->ReadOnly = true;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Description";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sinscrireToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(176, 56);
			// 
			// sinscrireToolStripMenuItem
			// 
			this->sinscrireToolStripMenuItem->Name = L"sinscrireToolStripMenuItem";
			this->sinscrireToolStripMenuItem->Size = System::Drawing::Size(175, 24);
			this->sinscrireToolStripMenuItem->Text = L"s\'inscrire";
			this->sinscrireToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm21::sinscrireToolStripMenuItem_Click_1);
			// 
			// MyForm21
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 415);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm21";
			this->Text = L"Arche";
			this->Load += gcnew System::EventHandler(this, &MyForm21::MyForm21_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 contextMenuStrip1->Show();
	
	}
	private: System::Void MyForm21_Load(System::Object^  sender, System::EventArgs^  e) {

				 ifstream fichier("liste_cours.txt");
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

						 cours = strtok(str1, str2);
						 ens = strtok(NULL, str2);
						 desc = strtok(NULL, str2);
						 String^ c = gcnew String(cours);
						 String^ c2 = gcnew String(ens);
						 String^ c3 = gcnew String(desc);

						 if (c != ""){
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

						 i = i + 3;
					 }

					 for (int j = 0; j < 99; j = j + 3){
						 if (tab[j] != nullptr && tab[j + 1] != nullptr){

							 dataGridView1->Rows->Add(tab[j], tab[j + 1],tab[j+2]);

						 }
					 }

				 }


	}
		
private: System::Void dataGridView1_CellMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
			 contextMenuStrip1->Tag = dataGridView1->HitTest(e->X, e->Y);
			 contextMenuStrip1->Show(dataGridView1, e->Location);
}
private: System::Void sinscrireToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 ifstream fichier("etu_co.txt");
			 String^ c;
			 string tabl;
			 if (!fichier.is_open())
			 {
			 }
			 else{
				 array<String^>^ tab = gcnew array<String^>(100);
				 bool res = false;
				 int i = 0;
				 while (getline(fichier, tabl))
				 {
					 char *str1 = new char[tabl.length() + 1];
					 strcpy(str1, tabl.c_str());
					 char str2[] = ";";
					 char * nometu;
					 nometu = strtok(str1, str2);
					 c = gcnew String(nometu);
					 fichier.close();
				 }
			 }
			 
			 String^ file = "liste_cours_etu.txt";
			 StreamWriter^ swr = gcnew StreamWriter(file, true);
			 swr->WriteLine(c + ";" + dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString() + "; " + dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString() + "; " + dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString());
			 swr->Close();
}
};
}
