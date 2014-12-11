#pragma once
#include <windows.h>
#include "admin.h"
#include "NewEnseignant.h"
namespace Projet2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de acceuilAdmin
	/// </summary>
	public ref class acceuilAdmin : public System::Windows::Forms::Form
	{
	public:
		acceuilAdmin(void)
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
		~acceuilAdmin()
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
			this->panel1->Size = System::Drawing::Size(492, 389);
			this->panel1->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(263, 142);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(177, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ajouter un nouvel enseignant";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &acceuilAdmin::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 142);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(177, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Consulter les cours en attente";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &acceuilAdmin::button1_Click);
			// 
			// acceuilAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(492, 389);
			this->Controls->Add(this->panel1);
			this->Name = L"acceuilAdmin";
			this->Text = L"Acceuil Admin";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 admin ^adm = gcnew admin();
				 adm->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 NewEnseignant ^ens = gcnew NewEnseignant();
				 ens->Show();
	}
	};
}
