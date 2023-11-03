#include <iostream>
#include <Windows.h>
#include "Human.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	Date birthday(18, 7, 1989);
	Human x(1, "Ромашов", "Виктор", "Викторович", birthday);
	Human y{ x };

	cout << "Кол-во " << Human::getCountInstance() << endl;
	char* const z = x.getFamilia();
	cout << "Фамилия " << z << endl;
	strcpy_s(z, strlen("Привет") + 1, "Привет");
	cout << "Фамилия " << z << endl;
	cout << "Фамилия " << x.getFamilia() << endl;
	return 0;
};

