#include "Cours.h"
#include <list>
#include <sstream>
#include <atlstr.h>
#include <iostream>
#include <fstream>
#include <stdio.h>

#pragma once

ref class LesCours
{
public:
	LesCours();
	static std::list<Cours> AdminAValider();

};

