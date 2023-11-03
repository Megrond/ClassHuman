#include "Human.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void Human::showHuman()
{
	cout << "Id: " << id << endl;
	cout << "ФИО: " << familia << " " << name << " " << otchestvo << endl;
	cout << "Дата рождения: " << id << endl;
	birthday.show();
	cout << endl;
}

