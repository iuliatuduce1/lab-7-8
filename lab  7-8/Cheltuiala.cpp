#include "Cheltuiala.h"
#include <cstring>

Cheltuiala::Cheltuiala()
{
	day = 1;
	sum = 0;
	type = nullptr;
}

Cheltuiala::Cheltuiala(int d, int s, const char* t)
{
	type= new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
	day = d;
	sum = s;
}

Cheltuiala::Cheltuiala(const Cheltuiala& c)
{
	day = c.day;
	sum = c.sum;
	type = new char[strlen(c.type) + 1];
	strcpy_s(type, strlen(c.type) + 1, c.type);
}

Cheltuiala::~Cheltuiala()
{
	if (type)
	{
		delete[] type;
	}
	day = 1;
	sum = 0;
}

int Cheltuiala::getDay()
{
	return day;
}

int Cheltuiala::getSum()
{
	return sum;
}

char* Cheltuiala::getType()
{
	return type;
}

void Cheltuiala::setDay(int d)
{
	day = d;
}

void Cheltuiala::setSum(int s)
{
	sum = s;
}

void Cheltuiala::setType(char* t)
{
	if (type)
	{
		delete[]type;
	}
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);

}

Cheltuiala& Cheltuiala::operator=(const Cheltuiala& c)
{
	if (this != &c)
	{
		if (type)
		{
			delete[]type;
		}
		type = new char[strlen(c.type) + 1];
		strcpy_s(type, strlen(c.type) + 1, c.type);
		day = c.day;
		sum = c.sum;
	}
	return *this;
}

bool Cheltuiala::operator==(const Cheltuiala& c)
{
	return  day == c.day && sum==c.sum && strcmp(type, c.type) == 0;
}


ostream& operator<<(ostream& os, const Cheltuiala& c)
{
	os << c.day << " " << c.sum << " " << c.type;
	return os;
}
	
