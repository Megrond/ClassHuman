#pragma once
#include "Date.h"
#include <iostream>

class Human {
	static unsigned int count_instance;
	unsigned int id;
	char* familia;
	char* name;
	char* otchestvo;
	Date birthday;

	char* createName(const char* name);
public:

	Human(const char* familia, const char* name, const char* otchestvo, Date birthday) :
		id{ count_instance },
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
		count_instance++;
	};

	Human() : Human(nullptr, nullptr, nullptr, Date()) {};

	Human(const Human& obj) : id{ count_instance },
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
		count_instance++;
	};
	~Human()
	{
		delete[]familia;
		delete[] name;
		delete[] otchestvo;
		count_instance--;
	}

	static unsigned int getCountInstance()
	{
		return count_instance;
	}
	int getId()
	{
		return id;
	}
	char const* getFamilia()
	{
		return familia;
	}
	char const* getName()
	{
		return name;
	}
	char const* getOtchestvo()
	{
		return otchestvo;
	}
	Date const* getDate()
	{
		return &birthday;
	}
	Human& setId(int id)
	{
		this->id = id;
		return *this;
	}
	Human& setFamilia(char const* familia)
	{
		delete[] this->familia;
		this->familia = createName(familia);
		return *this;
	}
	Human& setName(char const* name)
	{
		delete[] this->name;
		this->name = createName(name);
		return *this;
	}
	Human& setOtchestvo(char const* otchestvo)
	{
		delete[] this->otchestvo;
		this->otchestvo = createName(otchestvo);
		return *this;
	}
	Human& setDate(unsigned short day, unsigned short month, unsigned short year)
	{
		birthday.setDay(day).setMonth(month).setYear(year);
		return *this;
	}
	void showHuman();



};

