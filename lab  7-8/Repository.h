#pragma once
#include <vector>
#include "Cheltuiala.h"

class Repository
{
private:
	vector<Cheltuiala> elem;

public:
	Repository();
	~Repository();
	void addElem(Cheltuiala&);
	int size();
	vector <Cheltuiala> getAll();
	Cheltuiala getFrom(int);
	bool find(Cheltuiala&);
};

