#include <iostream>
#include <Windows.h>
#include "Human.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	Date birthday(18, 7, 1989);
	Human x(1, "�������", "������", "����������", birthday);
	Human y{ x };

	cout << "���-�� " << Human::getCountInstance() << endl;
	char* const z = x.getFamilia();
	cout << "������� " << z << endl;
	strcpy_s(z, strlen("������") + 1, "������");
	cout << "������� " << z << endl;
	cout << "������� " << x.getFamilia() << endl;
	return 0;
};

