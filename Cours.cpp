
#include "Cours.h"
#include <iostream>
using namespace std;

Cours::Cours()
{
	id = "";
	titre = "";
	Description = "";
	maxEtu = NULL;
	State = "";

}

// m�thode qui permette de set les propri�ter d'un objet
void Cours::setId(std::string idparam){
			id = idparam;
}
void Cours::setTitre(std::string titreparam){
			titre = titreparam;
}

void Cours::setEnseignant(std::string Ensparam)
{
	enseignant = Ensparam;
}

void Cours::setEtudiant(std::string Etuparam)
{
	Etudiant = Etuparam;
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
std::string Cours::GetId(){
			return id;
}

std::string Cours::GetTitre(){
			return titre;
}

std::string Cours::GetEnseigant(){
	return enseignant;
}

std::string Cours::GetEtudiant(){
	return Etudiant;
}

std::string Cours::GetDesciption(){
			return Description;
}

int Cours::GetNbEtu(){
			return maxEtu;
}

		/* m�thode de set Dat TODO
		public: void Get(){
		}
		public: void Get(){
		}
		*/

std::string Cours::GetState(){
			return State;
}

