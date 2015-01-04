#include "Ressources.h"
#include <iostream>
using namespace std;

Ressources::Ressources()
{
	type = "";
	titre = "";
	value = "";
}

void Ressources::setType(std::string Typeparam){
	type = Typeparam;
}
void Ressources::setTitre(std::string Titreparam){
	titre = Titreparam;
}
void Ressources::setValue(std::string Valueparam){
	value = Valueparam;
}

// Get
std::string Ressources::GetType(){
	return type;
}
std::string Ressources::GetTitre(){
	return titre;
}
std::string Ressources::GetValue(){
	return value;
}
