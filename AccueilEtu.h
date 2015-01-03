#pragma once
#include "ListeCoursDispoEtu.h"
#include <windows.h>
#include "CoursEtu.h"
namespace Projet2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AccueilEtu
	/// </summary>
	public ref class AccueilEtu : public System::Windows::Forms::Form
	{
	public:
		AccueilEtu(void)
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
		~AccueilEtu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;

	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(57, 98);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 81);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Liste des cours auxquels vous pouvez vous inscrire.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AccueilEtu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(224, 98);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 81);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Liste des cours auxquels vous êtes inscrit.";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AccueilEtu::button2_Click_1);
			// 
			// AccueilEtu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 298);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AccueilEtu";
			this->Text = L"ARCHE";
			this->Load += gcnew System::EventHandler(this, &AccueilEtu::MyForm2_Load);
			this->ResumeLayout(false);

		}
	

	
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
				 
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
				 CoursEtu ^f = gcnew CoursEtu();
				 f->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 ListeCoursDispoEtu ^form = gcnew ListeCoursDispoEtu();
			 form->Show();
}
};
}
