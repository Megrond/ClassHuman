#pragma once
#include "Date.h"
#include <iostream>

class Human {

	int id;
	char* familia;
	char* name;
	char* otchestvo;
	Date birthday;
public:

	Human(int id, const char* familia, const char* name, const char* otchestvo, Date birthday) :
		id{ id },
		familia{ familia ? new char[strlen(familia) + 1] : nullptr },
		name{ name ? new char[strlen(name) + 1] : nullptr },
		otchestvo{ otchestvo ? new char[strlen(otchestvo) + 1] : nullptr },
		birthday{ birthday } {

		if (familia && name && otchestvo)
		{
			strcpy_s(this->familia, strlen(familia) + 1, familia);
			strcpy_s(this->name, strlen(name) + 1, name);
			strcpy_s(this->otchestvo, strlen(otchestvo) + 1, otchestvo);
		}
	};

	Human() : Human(0, nullptr, nullptr, nullptr, Date()) {};

	Human(const Human& obj) : id{ obj.id },
		familia{ obj.familia ? new char[strlen(obj.familia) + 1] : nullptr },
		name{ obj.name ? new char[strlen(obj.name) + 1] : nullptr },
		otchestvo{ obj.otchestvo ? new char[strlen(obj.otchestvo) + 1] : nullptr },
		birthday{ obj.birthday } {
	
		if (familia && name && otchestvo)
		{
			strcpy_s(this->familia, strlen(obj.familia) + 1, obj.familia);
			strcpy_s(this->name, strlen(obj.name) + 1, obj.name);
			strcpy_s(this->otchestvo, strlen(obj.otchestvo) + 1, obj.otchestvo);
		}
	};


};
