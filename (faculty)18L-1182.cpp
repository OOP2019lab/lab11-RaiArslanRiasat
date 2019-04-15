#include"faculty.h"
faculty::faculty(string fn, string ln, int ag, int c_count, float num)
	:person(fn, ln, ag)
{
	count_courses = c_count;
	number = num;
}
void faculty::setcourses(int n)
{
	count_courses = n;
}
int faculty::getcourses()
{
	return count_courses;
}
void faculty::setnumber(float numb)
{
	number = numb;
}

float faculty::getnumber()
{
	return number;
}
faculty::~faculty()
{
	cout << "~faculty is invoked";
}
void faculty::print_faculty()
{
	cout << getfname() << getlname() << "," << getage() << "," << getcourses() << "," << getnumber();
}