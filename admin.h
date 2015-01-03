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

#include "LesCours.h"

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
	/// Description résumée de admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
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
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  accepterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  refuserToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;





	private: System::ComponentModel::IContainer^  components;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->accepterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->refuserToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
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
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(438, 375);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &admin::dataGridView1_CellContentClick);
			this->dataGridView1->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &admin::dataGridView1_CellMouseClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->accepterToolStripMenuItem,
					this->refuserToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(138, 52);
			// 
			// accepterToolStripMenuItem
			// 
			this->accepterToolStripMenuItem->Name = L"accepterToolStripMenuItem";
			this->accepterToolStripMenuItem->Size = System::Drawing::Size(137, 24);
			this->accepterToolStripMenuItem->Text = L"Accepter";
			this->accepterToolStripMenuItem->Click += gcnew System::EventHandler(this, &admin::accepterToolStripMenuItem_Click);
			// 
			// refuserToolStripMenuItem
			// 
			this->refuserToolStripMenuItem->Name = L"refuserToolStripMenuItem";
			this->refuserToolStripMenuItem->Size = System::Drawing::Size(137, 24);
			this->refuserToolStripMenuItem->Text = L"Refuser";
			this->refuserToolStripMenuItem->Click += gcnew System::EventHandler(this, &admin::refuserToolStripMenuItem_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cours en attente";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Enseignant responsable";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Description";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 375);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"admin";
			this->Text = L"ARCHE admin";
			this->Load += gcnew System::EventHandler(this, &admin::admin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}


#pragma endregion

	private: System::Void admin_Load(System::Object^  sender, System::EventArgs^  e) {


				 LesCours lC;
				 std::list<Cours> liste = lC.AdminAValider();

				 std::list<Cours>::iterator lit;
				 for (lit = liste.begin(); lit != liste.end(); ++lit)
				 {
					 Cours cours = *lit;

					 std::string titre = cours.GetTitre();
					 std::string enseignant = cours.GetEnseigant();
					 std::string description = cours.GetDesciption();

					 String^ C1 = gcnew String(titre.c_str());
					 String^ C2 = gcnew String(enseignant.c_str());
					 String^ C3 = gcnew String(description.c_str());

					 dataGridView1->Rows->Add(C1, C2, C3);
				 }
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 contextMenuStrip1->Show();

	}
	private: System::Void accepterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

				 /// Ecriture du cours accepter dans la liste des cours disponible			 

				 String^ file = "liste_cours_ens.txt";
				 StreamWriter^ swr = gcnew StreamWriter(file, true);
				 swr->WriteLine(dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString() + ";" + dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString() + "; " + dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString() + ";accepte " + "\n");
				 swr->Close();
				 String^ fileName = "liste_cours.txt";


				 StreamWriter^ sw = gcnew StreamWriter(fileName, true);
				 sw->WriteLine(dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString() + ";" + dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString() + ";" + dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString() + "\n");
				 sw->Close();

				 int index = dataGridView1->SelectedCells[0]->RowIndex;
				 dataGridView1->Rows->RemoveAt(index);

				 String^ f = "Cours_en_attente.txt";

				 StreamWriter^ s = gcnew StreamWriter(f);
				 for (int i = 0; i < dataGridView1->Rows->Count; i++)
				 {
					 s->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value->ToString() + ";" + dataGridView1->Rows[i]->Cells[1]->Value->ToString() + ";" + dataGridView1->Rows[i]->Cells[2]->Value->ToString() + "\n");

				 }
				 s->Close();
	}


	
private: System::Void refuserToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ file = "liste_cours_ens.txt";
			 StreamWriter^ swr = gcnew StreamWriter(file, true);
			 swr->WriteLine(dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString() + ";" + dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString() + "; " + dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString() + ";refuse " + "\n");
			 swr->Close();

			 int index = dataGridView1->SelectedCells[0]->RowIndex;
			 dataGridView1->Rows->RemoveAt(index);

			 String^ f = "Cours_en_attente.txt";

			 StreamWriter^ s = gcnew StreamWriter(f);
			 for (int i = 0; i < dataGridView1->Rows->Count; i++)
			 {
				 s->WriteLine(dataGridView1->Rows[i]->Cells[0]->Value->ToString() + ";" + dataGridView1->Rows[i]->Cells[1]->Value->ToString() + ";" + dataGridView1->Rows[i]->Cells[2]->Value->ToString() + "\n");

			 }

			 s->Close();
}
private: System::Void dataGridView1_CellMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
			 contextMenuStrip1->Tag = dataGridView1->HitTest(e->X, e->Y);
			 contextMenuStrip1->Show(dataGridView1,e->Location);
}
};
}
