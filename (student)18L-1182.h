#pragma once
#include"person.h"
using namespace std;
class student :private person
{
	float cgpa;
public:
	student(string, string, int, float);
	void setcgpa(float);
	float getgpa();
	void print_student();
	~student();
}; 
