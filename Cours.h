#ifndef DEF_Cours
#define DEF_Cours

#pragma once
#include <string>
#include <stdio.h>
#include <string>
#include <sstream>
#include <atlstr.h>
#define _CRT_SECURE_NO_WARNINGS


class Cours
{

public:
	Cours();
//Set
	void setId(int idparam);
	void setTitre(std::string titreparam);
	void setDesciption(std::string descriptionparam);
	void setNbEtu(int NbEtuparam);
// méthode de set Dat TODO
	void setState(std::string stateparam);

// Get
	int			GetId(int idparam);
	std::string GetTitre(std::string titreparam);
	std::string GetDesciption(std::string descriptionparam);
	int			GetNbEtu(int NbEtuparam);
	std::string GetState(std::string stateparam);

private:

	int id;
	std::string titre;
	std::string Description;
	int maxEtu;
	std::string State;
};
#endif DEF_Cours

