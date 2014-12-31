#include "LesCours.h"
#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <atlstr.h>
#include <windows.h>


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
		//array<String^>^ tab = gcnew array<String^>(100);
		bool res = false;
		//int i = 0;
		while (getline(fichier, monTableau))
		{
			// on vérifie si la ligne n'est pas vide 
			if (monTableau != "")
			{
				Cours cours; // création d'un cours cours
				std::string delimiter = ";"; // délimiteur qui permet de split la ligne

				// on récupére le titre PS: attention a l'ordre dans le fichier
				std::string titre = monTableau.substr(0, monTableau.find(delimiter));
				monTableau.erase(0, monTableau.find(delimiter) + delimiter.length()); //On suprime de la string la partie utiliser pour pouvoir effectuer un nouveau split

				// on récupére l'enseignant PS: attention a l'ordre dans le fichier
				std::string enseignant = monTableau.substr(0, monTableau.find(delimiter));
				monTableau.erase(0, monTableau.find(delimiter) + delimiter.length()); //On suprime de la string la partie utiliser pour pouvoir effectuer un nouveau split

				// on récupére la description PS: attention a l'ordre dans le fichier
				std::string description = monTableau.substr(0, monTableau.find(delimiter));
				monTableau.erase(0, monTableau.find(delimiter) + delimiter.length()); //On suprime de la string la partie utiliser pour pouvoir effectuer un nouveau split

				/*char *str1 = new char[monTableau.length() + 1];
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
				String^ c3 = gcnew String(desc);*/


				if (titre != ""){
					///if (i == 2){
					///tab[i - 1] = c;
					///}
					///else{
					//tab[i] = c;
					///}
					cours.setTitre(titre);
				}
				if (enseignant != ""){
					cours.setEnseignant(enseignant);
					//tab[i + 1] = c2;
				}
				if (description != ""){
					cours.setDesciption(description);
					//tab[i + 2] = c3;
				}
				LCours.push_back(cours); // on ajoute à la liste le cours
			}
			//i = i + 3;
		}

		return  LCours;
	}
}
