/*
Duncan Matthews
CSC-234
Lab 1
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Employee
{
public:
	//constructors
	Employee();
	Employee(string _sLname, string _sFname, string _sJtitle, double _dSal);

	//setters/getters
	void setfname(string _sFname);
	string getfname();

	void setlname(string _sLname);
	string getlname();

	void setjtitle(string _sJtitle);
	string getjtitle();

	void setsal(double _dSal);
	double getsal();

	//other functions
	void disinfo(string _sLname, string _sFname, string _sJtitle, double _dSal);
		
private:
	//data members
	string sFname;
	string sLname;
	string sJtitle;
	double dSal;

};

#endif