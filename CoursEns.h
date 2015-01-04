#pragma once
#include <windows.h>
#include "Inscription.h"
#include "LesCours.h"
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>

#include "ConsulterRessourceEns.h"
#include <msclr\marshal_cppstd.h>
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
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ConsulterToolStripMenuItem;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ConsulterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(421, 384);
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
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(421, 384);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CoursEns::dataGridView1_CellContentClick);
			this->dataGridView1->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CoursEns::dataGridView1_CellMouseClick);
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
			this->ConsulterToolStripMenuItem->Click += gcnew System::EventHandler(this, &CoursEns::ConsulterToolStripMenuItem_Click);
			// 
			// CoursEns
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 384);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CoursEns";
			this->Text = L"Arche Enseignant";
			this->Load += gcnew System::EventHandler(this, &CoursEns::CoursEns_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void CoursEns_Load(System::Object^  sender, System::EventArgs^  e) {
				 
				 LesCours lC;
				 std::list<Cours> liste = lC.CoursEns();

				 std::list<Cours>::iterator lit;
				 for (lit = liste.begin(); lit != liste.end(); ++lit)
				 {
					 Cours cours = *lit;

					 std::string titre = cours.GetTitre();
					 std::string statue = cours.GetState();
					 std::string description = cours.GetDesciption();

					 String^ C1 = gcnew String(titre.c_str());
					 String^ C2 = gcnew String(description.c_str());
					 String^ C3 = gcnew String(statue.c_str());

					 dataGridView1->Rows->Add(C1, C2, C3);
				 }
				
	}
private: System::Void ConsulterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::String^ managedString = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();

			 msclr::interop::marshal_context context;
			 std::string ID = context.marshal_as<std::string>(managedString);
			 ConsulterRessourceEns ^CRE = gcnew  ConsulterRessourceEns(ID);
			 CRE->Show();
}

private: System::Void dataGridView1_CellMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
			 contextMenuStrip1->Tag = dataGridView1->HitTest(e->X, e->Y);
			 contextMenuStrip1->Show(dataGridView1, e->Location);

}
};
}
