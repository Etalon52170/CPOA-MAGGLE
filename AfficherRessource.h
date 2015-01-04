#pragma once
#include <string>

namespace Projet2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AfficherRessource
	/// </summary>
	public ref class AfficherRessource : public System::Windows::Forms::Form
	{
	public:
		AfficherRessource(std::string Titre , std::string value)
		{
			InitializeComponent();
			this->TitreLabel->Text = gcnew String(Titre.c_str());
			this->richTextBox1->Text = gcnew String(value.c_str());
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~AfficherRessource()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  TitreLabel;
	protected:
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

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
			this->TitreLabel = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// TitreLabel
			// 
			this->TitreLabel->AutoSize = true;
			this->TitreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitreLabel->Location = System::Drawing::Point(7, 11);
			this->TitreLabel->Name = L"TitreLabel";
			this->TitreLabel->Size = System::Drawing::Size(42, 18);
			this->TitreLabel->TabIndex = 0;
			this->TitreLabel->Text = L"Titre";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(10, 47);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(533, 202);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// AfficherRessource
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(566, 261);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->TitreLabel);
			this->Name = L"AfficherRessource";
			this->Text = L"AfficherRessource";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
