
#include "Cours.h"
#include <iostream>
using namespace std;

Cours::Cours()
{
	id = NULL;
	titre = "";
	Description = "";
	maxEtu = NULL;
	State = "";

}

// m�thode qui permette de set les propri�ter d'un objet
void Cours::setId(int idparam){
			id = idparam;
}
void Cours::setTitre(std::string titreparam){
			titre = titreparam;
}
void Cours::setDesciption(std::string descriptionparam){
			Description = descriptionparam;
}
void Cours::setNbEtu(int NbEtuparam){
			maxEtu = NbEtuparam;
}
		/* m�thode de set Dat TODO
		public: void set(){
		}
		public: void set(){
		}
		*/
void Cours::setState(std::string stateparam){
			State = stateparam;
}


		// m�thode qui permette de Get les propri�ter d'un objet
int Cours::GetId(int idparam){
			return id;
}

std::string Cours::GetTitre(std::string titreparam){
			return titre;
}

std::string Cours::GetDesciption(std::string descriptionparam){
			return Description;
}

int Cours::GetNbEtu(int NbEtuparam){
			return maxEtu;
}

		/* m�thode de set Dat TODO
		public: void Get(){
		}
		public: void Get(){
		}
		*/

std::string Cours::GetState(std::string stateparam){
			return State;
}

