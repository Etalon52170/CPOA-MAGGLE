#include "LesRessources.h"
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <sstream>
#include <atlstr.h>
#include <windows.h>

LesRessources::LesRessources()
{ 
}

std::list<Ressources> LesRessources::findByCours(int idCours)
{
	std::list<Ressources> LRes;
	std::string chemin = "Ressource-Cours/";
	chemin.append(std::to_string(idCours));
	chemin.append(".txt");
	std::ifstream fichier(chemin);// fichier à lire
	std::string monTableau;
	if (fichier.is_open())
	{
		while (getline(fichier, monTableau))
		{
			// on vérifie si la ligne n'est pas vide 
			if (monTableau != "")
			{
				Ressources ress; // création d'un cours cours
				std::string delimiter = ";"; // délimiteur qui permet de split la ligne

				// on récupére le titre PS: attention a l'ordre dans le fichier
				std::string type = monTableau.substr(0, monTableau.find(delimiter));
				monTableau.erase(0, monTableau.find(delimiter) + delimiter.length()); //On suprime de la string la partie utiliser pour pouvoir effectuer un nouveau split

				// on récupére l'enseignant PS: attention a l'ordre dans le fichier
				std::string titre = monTableau.substr(0, monTableau.find(delimiter));
				monTableau.erase(0, monTableau.find(delimiter) + delimiter.length()); //On suprime de la string la partie utiliser pour pouvoir effectuer un nouveau split

				// on récupére la description PS: attention a l'ordre dans le fichier
				std::string value = monTableau.substr(0, monTableau.find(delimiter));
				monTableau.erase(0, monTableau.find(delimiter) + delimiter.length()); //On suprime de la string la partie utiliser pour pouvoir effectuer un nouveau split

				if (type != ""){
					ress.setType(type);
				}
				if (titre != ""){
					ress.setTitre(titre);
				}
				if (value != ""){
					ress.setValue(value);
				}
				LRes.push_back(ress); // on ajoute à la liste le cours
			}
		}
		fichier.close();
	}
	return LRes;
}