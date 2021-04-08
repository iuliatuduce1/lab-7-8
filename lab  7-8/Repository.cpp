#include "Repository.h"

Repository::Repository()
{
}

Repository::~Repository()
{
}

void Repository::addElem(Cheltuiala& c)
{
	elem.push_back(c);
}

int Repository::size()
{
	return elem.size();
}

vector<Cheltuiala> Repository::getAll()
{
	return elem;
}

Cheltuiala Repository::getFrom(int i)
{
	return elem[i];
}

bool Repository::find(Cheltuiala& c)
{
	for (Cheltuiala aux : elem)
		if (aux == c) return true;
	return false;
}
