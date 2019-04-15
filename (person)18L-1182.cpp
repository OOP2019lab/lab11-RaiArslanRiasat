#include"person.h"
person::person(string fn, string ln, int ag)
{
	fname = fn;
	lname = ln;
	age = ag;
}
void person::stefname(string fn)
{
	fname = fn;
}
string person::getfname()
{
	return fname;
}
void person::setlname(string ln)
{
	lname = ln;
}
string person::getlname()
{
	return lname;
}
void person::setage(int a)
{
	age = a;
}
int person::getage()
{
	return age;
}
person::~person()
{
	cout << "~person is invoked";
}
void person::print_person()
{
	cout << getfname() << " " << getlname() << " is " << getage() << " years old ";
}