#pragma once
#include "Ressources.h" 
#include <list>
#include <sstream>
#include <atlstr.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

ref class LesRessources
{
public:
	LesRessources();
	static std::list<Ressources> findByCours(std::string idCours);
};

