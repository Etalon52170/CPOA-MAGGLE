#pragma once
#include "Cours.h"
#include <list>
#include <sstream>
#include <atlstr.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

#define _CRT_SECURE_NO_WARNINGS



ref class LesCours
{
public:
	LesCours();
	static std::list<Cours> LesCours::AdminAValider();
	static std::list<Cours> LesCours::CoursEns();
	static std::list<Cours> LesCours::CoursEtu();

};

