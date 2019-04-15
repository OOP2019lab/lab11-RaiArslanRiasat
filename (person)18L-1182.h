
#pragma once
#include<iostream>
#include<string>
using namespace std;
class person
{
	string fname;
	string lname;
protected:
	int age;
public:
	person(string, string, int);
	void stefname(string);
	string getfname();
	void setlname(string);
	string getlname();
	void setage(int);
	int getage();
	void print_person();
	~person();
};