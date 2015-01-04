#pragma once
#include <windows.h>
#include "Inscription.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>
#include "LesCours.h"
#include "ConsulterResourceEtu.h"

#include <msclr\marshal_cppstd.h>
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IDColum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ConsulterToolStripMenuItem;
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
			this->IDColum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ConsulterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->IDColum,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(827, 592);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CoursEtu::dataGridView1_CellMouseClick);
			// 
			// IDColum
			// 
			this->IDColum->FillWeight = 50;
			this->IDColum->HeaderText = L"ID";
			this->IDColum->Name = L"IDColum";
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
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ConsulterToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(180, 28);
			// 
			// ConsulterToolStripMenuItem
			// 
			this->ConsulterToolStripMenuItem->Name = L"ConsulterToolStripMenuItem";
			this->ConsulterToolStripMenuItem->Size = System::Drawing::Size(179, 24);
			this->ConsulterToolStripMenuItem->Text = L"Consulter cours";
			this->ConsulterToolStripMenuItem->Click += gcnew System::EventHandler(this, &CoursEtu::ConsulterToolStripMenuItem_Click);
			// 
			// CoursEtu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 592);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CoursEtu";
			this->Text = L"CoursEtu";
			this->Load += gcnew System::EventHandler(this, &CoursEtu::CoursEtu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CoursEtu_Load(System::Object^  sender, System::EventArgs^  e) {

				 LesCours lC;
				 std::list<Cours> liste = lC.CoursEtu();

				 std::list<Cours>::iterator lit;
				 for (lit = liste.begin(); lit != liste.end(); ++lit)
				 {
					 Cours cours = *lit;

					 std::string ID = cours.GetId();
					 std::string etudiant = cours.GetEtudiant();
					 std::string titre = cours.GetTitre();
					 std::string enseignant = cours.GetEnseigant();
					 std::string description = cours.GetDesciption();

					 String^ C = gcnew String(ID.c_str());
					 String^ C1 = gcnew String(etudiant.c_str());
					 String^ C2 = gcnew String(titre.c_str());
					 String^ C3 = gcnew String(enseignant.c_str());
					 String^ C4 = gcnew String(description.c_str());
					 

					 dataGridView1->Rows->Add(C, C1, C2, C3,C4);
				 }
	}

private: System::Void ConsulterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::String^ managedString = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();

			 msclr::interop::marshal_context context;
			 std::string ID = context.marshal_as<std::string>(managedString);
			 ConsulterResourceEtu ^CRE = gcnew ConsulterResourceEtu(ID);
			 CRE->Show();
}
	private: System::Void dataGridView1_CellMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {

				 contextMenuStrip1->Tag = dataGridView1->HitTest(e->X, e->Y);
				 contextMenuStrip1->Show(dataGridView1, e->Location);
	}
};

}

