#include "LesCours.h"

LesCours::LesCours()
{
}

std::list<Cours> LesCours::AdminAValider()
{
	std::list<Cours> LCours; // liste des cours lu
	std::ifstream fichier("Cours_en_attente.txt");// fichier à lire
	std::string monTableau;	
	if (!fichier.is_open())
	{
	}
	else{
		/*array<String^>^ tab = gcnew array<String^>(100);
		bool res = false;
		int i = 0;
		while (getline(fichier, monTableau))
		{
			char *str1 = new char[monTableau.length() + 1];
			strcpy(str1, monTableau.c_str());
			char str2[] = ";";
			char * logfile;
			char * passfile;
			char * desc;

			logfile = strtok(str1, str2);
			passfile = strtok(NULL, str2);
			desc = strtok(NULL, str2);
			String^ c = gcnew String(logfile);
			String^ c2 = gcnew String(passfile);
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
		}*/
		return  LCours;
	}
}
