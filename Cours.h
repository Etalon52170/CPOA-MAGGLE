#ifndef DEF_Cours
#define DEF_Cours

#pragma once
#include <iostream>
#include <fstream>
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
	void setId(std::string idparam);
	void setTitre(std::string titreparam);
	void setEnseignant(std::string Ensparam);
	void setEtudiant(std::string EtuParam);
	void setDesciption(std::string descriptionparam);
	void setNbEtu(int NbEtuparam);
// méthode de set Dat TODO
	void setState(std::string stateparam);

// Get
	std::string	GetId();
	std::string GetTitre();
	std::string GetEnseigant();
	std::string GetEtudiant();
	std::string GetDesciption();
	int			GetNbEtu();
	std::string GetState();

private:

	std::string id;
	std::string titre;
	std::string enseignant;
	std::string Etudiant;
	std::string Description;
	int maxEtu;
	std::string State;
};
#endif DEF_Cours

