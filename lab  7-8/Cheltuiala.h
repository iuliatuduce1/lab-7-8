#pragma once
#include <ostream>
using namespace std;

class Cheltuiala
{
private:
	int day;
	int sum;
	char* type;
public:
	Cheltuiala();
	Cheltuiala(int, int, const char*);
	Cheltuiala(const Cheltuiala&);
	~Cheltuiala();
	int getDay();
	int getSum();
	char* getType();
	void setDay(int);
	void setSum(int);
	void setType(char*);
	Cheltuiala& operator=(const Cheltuiala&);
	bool operator==(const Cheltuiala&);
	friend ostream& operator<<(ostream& os, const Cheltuiala&);



};

