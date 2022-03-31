#pragma once
#include <string>
using namespace std;
class Man
{
private:
	string name;
	int age;
	string sex;
	int weight;
public:
	string getName() const { return name; }
	int getAge() const { return age; }
	string getSex() const { return sex; }
	int getWeight() const { return weight; }
	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	void setSex(string sex) { this->sex = sex; }
	void setWeight(int weight) { this->weight = weight; }
	void Init(string name, int age, string sex, int weight);
	void Display() const;
	void Read();
};


