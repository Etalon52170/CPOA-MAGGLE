#pragma once
#include <windows.h>
#include "Inscription.h"
#include "LesCours.h"
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <list>
#include <iostream>

#include <iostream>
#include <stdio.h>

#include <sstream>
#include <atlstr.h>
#define define _CRT_SECURE_NO_WARNINGS
namespace Projet2 {

	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de ListeCoursDispoEtu
	/// </summary>
	public ref class ListeCoursDispoEtu : public System::Windows::Forms::Form
	{
	public:
		ListeCoursDispoEtu(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ListeCoursDispoEtu()
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IDColum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  CoursColum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Enseignant;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;



	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->IDColum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CoursColum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(364, 24);
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->IDColum,
				this->CoursColum,
					this->Enseignant, this->Column1
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 24);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(364, 313);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ListeCoursDispoEtu::dataGridView1_CellContentClick);
			this->dataGridView1->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &ListeCoursDispoEtu::dataGridView1_CellMouseClick);
			// 
			// ID
			// 
			this->IDColum->HeaderText = L"ID";
			this->IDColum->Name = L"ID";
			this->IDColum->ReadOnly = true;
			// 
			// Cours
			// 
			this->CoursColum->HeaderText = L"Cours";
			this->CoursColum->Name = L"Cours";
			this->CoursColum->ReadOnly = true;
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
			this->contextMenuStrip1->Size = System::Drawing::Size(121, 26);
			// 
			// sinscrireToolStripMenuItem
			// 
			this->sinscrireToolStripMenuItem->Name = L"sinscrireToolStripMenuItem";
			this->sinscrireToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->sinscrireToolStripMenuItem->Text = L"s\'inscrire";
			this->sinscrireToolStripMenuItem->Click += gcnew System::EventHandler(this, &ListeCoursDispoEtu::sinscrireToolStripMenuItem_Click_1);
			// 
			// ListeCoursDispoEtu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 337);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ListeCoursDispoEtu";
			this->Text = L"Arche";
			this->Load += gcnew System::EventHandler(this, &ListeCoursDispoEtu::MyForm21_Load);
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

				 LesCours lC;
				 std::list<Cours> liste = lC.CoursEtuDispo();

				 std::list<Cours>::iterator lit;
				 for (lit = liste.begin(); lit != liste.end(); ++lit)
				 {
					 Cours cours = *lit;

					 std::string ID = cours.GetId();
					 std::string titre = cours.GetTitre();
					 std::string Enseignant = cours.GetEnseigant();
					 std::string description = cours.GetDesciption();

					 String^ C = gcnew String(ID.c_str());
					 String^ C1 = gcnew String(titre.c_str());
					 String^ C2 = gcnew String(Enseignant.c_str());
					 String^ C3 = gcnew String(description.c_str());
					 

					 dataGridView1->Rows->Add(C, C1, C2, C3);
				 }
				 /*
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

				 dataGridView1->Rows->Add(tab[j], tab[j + 1], tab[j + 2]);

				 }
				 }

				 }
				 */

	}

	private: System::Void dataGridView1_CellMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
				 contextMenuStrip1->Tag = dataGridView1->HitTest(e->X, e->Y);
				 contextMenuStrip1->Show(dataGridView1, e->Location);
	}
	private: System::Void sinscrireToolStripMenuItem_Click_1 (System::Object^  sender, System::EventArgs^  e) {

				 std::ifstream fichier1("etu_co.txt");
				 std::string monNom;

				 if (fichier1.is_open())
				 {
					 getline(fichier1, monNom);
					 fichier1.close();
				 }

				 String^ c = gcnew String(monNom.c_str());
				 String^ file = "liste_cours_etu.txt";

				 StreamWriter^ swr = gcnew StreamWriter(file, true);
				 swr->WriteLine(c + ";" + dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString() + "; " + dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString() + "; " + dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString() + ";" + dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString() + "; ");
				 swr->Close();
	}
 };
}
