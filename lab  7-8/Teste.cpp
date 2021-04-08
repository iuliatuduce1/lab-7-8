#include "Cheltuiala.h"
#include "Repository.h"
#include "Teste.h"
#include <cassert>
#include <iostream>

using namespace std;


void TesteCheltuiala()
{
	Cheltuiala c1(2, 100, "internet");
	Cheltuiala c2(5, 10, "mancare");
	Cheltuiala c3(25, 300, "haine");
	Cheltuiala c4(25, 300, "haine");

	assert(c2.getDay() == 5);
	assert(c2.getSum() == 10);
	assert(strcmp(c2.getType(),"mancare")==0);
	assert(c3 == c4);
	c1.setDay(4);
	assert(c1.getDay() == 4);
	cout << "testele initiale sunt ok\n";

}

void TesteRepo()
{
	Cheltuiala c1(2, 100, "internet");
	Cheltuiala c2(5, 10, "mancare");
	Cheltuiala c3(25, 300, "haine");
	Cheltuiala c4(20, 400, "haine");
	Repository repo;
	repo.addElem(c1);
	repo.addElem(c2);
	repo.addElem(c3);
	repo.addElem(c4);
	assert(repo.size() == 4);
	assert(repo.getFrom(0) == c1);
	assert(repo.find(c4) == true);

	cout << "testele din repo sunt ok\n";
}