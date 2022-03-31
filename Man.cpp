#include "Man.h"
#include <iostream>
using namespace std;
void Man::Init(string name, int age, string sex, int weight)
{
	setName(name);
	setAge(age);
	setSex(sex);
	setWeight(weight);
}
void Man::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "age = " << age << endl;
	cout << "sex = " << sex << endl;
	cout << "weight = " << weight << endl;
}
void Man::Read()
{
	string name;
	int age;
	string sex;
	int weight;
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "age = ? "; cin >> age;
	cout << "sex = ? "; cin >> sex;
	cout << "weight = ? "; cin >> weight;
	Init(name, age, sex, weight);
}