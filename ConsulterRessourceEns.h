#pragma once

#include "LesRessources.h"
#include "AfficherRessource.h"
#include "AjouterResource.h"
namespace Projet2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ConsulterRessourceEns
	/// </summary>
	public ref class ConsulterRessourceEns : public System::Windows::Forms::Form
	{
	public:
		ConsulterRessourceEns(std::string ID)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->Lressource_Load(ID);
			this->label1->Text = gcnew String(ID.c_str());
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ConsulterRessourceEns()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ConsulterToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ajouterRessourceToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ConsulterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ajouterRessourceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(384, 361);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 99.49239F;
			this->Column1->HeaderText = L"Type";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 99.49239F;
			this->Column2->HeaderText = L"Titre";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 99.49239F;
			this->Column3->HeaderText = L"Value";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ConsulterToolStripMenuItem,
					this->ajouterRessourceToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(171, 48);
			// 
			// ConsulterToolStripMenuItem
			// 
			this->ConsulterToolStripMenuItem->Name = L"ConsulterToolStripMenuItem";
			this->ConsulterToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->ConsulterToolStripMenuItem->Text = L"afficher Ressource";
			this->ConsulterToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConsulterRessourceEns::ConsulterToolStripMenuItem_Click);
			// 
			// ajouterRessourceToolStripMenuItem
			// 
			this->ajouterRessourceToolStripMenuItem->Name = L"ajouterRessourceToolStripMenuItem";
			this->ajouterRessourceToolStripMenuItem->Size = System::Drawing::Size(170, 22);
			this->ajouterRessourceToolStripMenuItem->Text = L"Ajouter Ressource";
			this->ajouterRessourceToolStripMenuItem->Click += gcnew System::EventHandler(this, &ConsulterRessourceEns::ajouterRessourceToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(-3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// ConsulterRessourceEns
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ConsulterRessourceEns";
			this->Text = L"ConsulterRessourceEns";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void Lressource_Load(std::string ID) {


					 LesRessources LR;
					 std::list<Ressources> LesR = LR.findByCours(ID);

					 std::list<Ressources>::iterator lit;

					 for (lit = LesR.begin(); lit != LesR.end(); ++lit)
					 {
						 Ressources ressource = *lit;

						 std::string titre = ressource.GetTitre();
						 std::string type = ressource.GetType();
						 std::string value = ressource.GetValue();

						 String^ C1 = gcnew String(type.c_str());
						 String^ C2 = gcnew String(titre.c_str());
						 String^ C3 = gcnew String(value.c_str());

						 dataGridView1->Rows->Add(C1, C2, C3);
					 }
		}

	private: System::Void ConsulterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::String^ titre = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
				 System::String^ value = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();

				 msclr::interop::marshal_context context;
				 std::string Title = context.marshal_as<std::string>(titre);
				 std::string Valeur = context.marshal_as<std::string>(value);

				 if (Title != "" && Valeur != "")
				 {
					 AfficherRessource ^CRE = gcnew  AfficherRessource(Title, Valeur);
					 CRE->Show();
				 }
	}

	private: System::Void ajouterRessourceToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 System::String^ ID = this->label1->Text;

				 msclr::interop::marshal_context context;
				 std::string id = context.marshal_as<std::string>(ID);

				 AjouterResource ^AR = gcnew AjouterResource(id);
				 AR->Show();
	}	
};
}
