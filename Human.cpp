#include "Human.h"
#include <iostream>
#include <Windows.h>

using namespace std;

void Human::showHuman()
{
	cout << "Id: " << id << endl;
	cout << "���: " << familia << " " << name << " " << otchestvo << endl;
	cout << "���� ��������: " << id << endl;
	birthday.show();
	cout << endl;
}

