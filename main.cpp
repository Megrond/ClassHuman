#include <iostream>
#include <Windows.h>
#include "Human.h"

using namespace std;

unsigned int Human::count_instance{ 0 };

int main()
{
	setlocale(LC_ALL, "RU");
	Date birthday(18, 7, 1989);
	Human x(1, "Ромашов", "Виктор", "Викторович", birthday);
	Human y{ x };

	cout << "Кол-во " << Human::getCountInstance() << endl;
	x.showHuman();

	return 0;
};

