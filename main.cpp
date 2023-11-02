#include <iostream>
#include <Windows.h>
#include "Human.h"

using namespace std;

int main()
{
	Date birthday(18, 7, 1989);
	Human x(1, "Ромашов", "Виктор", "Викторович", birthday);
	Human y{ x };


	cout << "test" << endl;

	return 0;
};

