#include <iostream>
#include <Windows.h>
#include "Human.h"

using namespace std;

unsigned int Human::count_instance{ 1 };

int main()
{
	setlocale(LC_ALL, "RU");
	Date birthday(18, 7, 1989);
	Human x("Ромашов", "Виктор", "Викторович", birthday);
	Human y{ x };

	y.setName("Дмитрий");
	cout << "Кол-во объектов: " << Human::getCountInstance() << endl;
	x.showHuman();
	y.showHuman();

	



	return 0;
};

