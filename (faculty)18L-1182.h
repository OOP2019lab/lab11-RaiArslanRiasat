#pragma once
#include"person.h"
class faculty :private person
{
	int count_courses;
	float number;
public:
	faculty(string, string, int, int, float);
	void setcourses(int);
	int getcourses();
	void setnumber(float);
	float getnumber();
	void print_faculty();
	~faculty();
}; 
