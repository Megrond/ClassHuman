#pragma once
class Date
{
	unsigned short day : 6;
	unsigned short month : 5;
	unsigned short year : 8;
public:

	Date(unsigned short day, unsigned short month, unsigned short year) : day{ 0 }, month{ 0 }, year{ 0 } {

		if (day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 1)
		{
			this->day = day;
			this->month = month;
			this->year = year;
		}
	}
	Date() :Date(0, 0, 0) {};
};
