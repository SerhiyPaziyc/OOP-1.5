#include "Student.h"
#include <iostream>
using namespace std;
void Student::Init(int year, Man man)
{
	setYear(year + 1);
	setMan(man);
}
void Student::Display() const
{
	cout << endl;
	cout << "man: " << endl;
	man.Display(); // використовуємо делегування
	cout << "year = " << year << endl;
}
void Student::Read()
{
	int year;
	Man m;
	cout << endl;
	cout << "Man: " << endl;
	m.Read(); // використовуємо делегування
	cout << "year = ? "; cin >> year;
	Init(year, m);
}