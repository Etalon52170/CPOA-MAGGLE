#pragma once

#include <windows.h>
#include "Inscription.h"
#include "ProposeCours.h"
#include "CoursEns.h"
namespace Projet2 {

	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de enseignant
	/// </summary>
	public ref class enseignant : public System::Windows::Forms::Form
	{
	public:
		enseignant(void)
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
		~enseignant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(549, 410);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(321, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Afficher la liste de vos cours";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &enseignant::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(55, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Proposer un nouveau cours";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &enseignant::button1_Click);
			// 
			// enseignant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 410);
			this->Controls->Add(this->panel1);
			this->Name = L"enseignant";
			this->Text = L"Arche Enseignant";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 ProposeCours ^form = gcnew ProposeCours();
				 form->Show();
				 
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 CoursEns^ en = gcnew CoursEns();
				 en->Show();
	}
	};
}
