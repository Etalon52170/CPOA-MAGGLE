#pragma once

namespace Projet2 {

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

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// ListeCoursDispoEtu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 377);
			this->Name = L"ListeCoursDispoEtu";
			this->Text = L"ListeCoursDispoEtu";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
