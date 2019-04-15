#include"student.h"
student::student(string fn, string ln, int age, float gpa)
	:person(fn, ln, age)
{
	cgpa = gpa;
}
void student::setcgpa(float gpa)
{
	cgpa = gpa;
}
float student::getgpa()
{
	return cgpa;
}
student::~student()
{
	cout << "~student is invoked";
}
void student::print_student()
{
	cout << getfname() << " " << getlname()
		<< "is  " << getage() << " years old, his cgpa is " << getgpa();
}
