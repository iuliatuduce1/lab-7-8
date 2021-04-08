#include "Cheltuiala.h"
#include "Repository.h"
#include "Teste.h"
#include <iostream>
#include <ctime>
#pragma warning(disable : 4996)

using namespace std;


int main()
{
	TesteCheltuiala();
	TesteRepo();
    time_t t = time(0);   // get time now
    struct tm* now = localtime(&t);
    int day = now->tm_mday;
    cout << day<<endl;
    Cheltuiala c(10, 10, "mancare");
    cout << c;

}

