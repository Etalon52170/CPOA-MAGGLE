#ifndef DEF_RES
#define DEF_RES

#pragma once
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <sstream>
#include <atlstr.h>
#define _CRT_SECURE_NO_WARNINGS

class Ressources
{

public:
	Ressources();
//Set
	void setType(std::string Typeparam);
	void setTitre(std::string Titreparam);
	void setValue(std::string Valueparam);

// Get
	std::string GetType();
	std::string GetTitre();
	std::string GetValue();

private:

	std::string type;
	std::string titre;
	std::string value;
};
#endif DEF_RES

