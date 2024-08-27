/*
Duncan Matthews
CSC-234
Lab 1
*/


#include "Employee.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//constructors
Employee::Employee() {
	sFname = "";
	sLname = "";
	sJtitle = "";
	dSal = 0.0;
}
Employee::Employee(string _sLname, string _sFname, string _sJtitle, double _dSal) {
	sFname = _sFname;
	sLname = _sLname;
	sJtitle = _sJtitle;
	dSal = _dSal;
}

//setters/getters
void Employee::setfname(string _sFname) {
	sFname = _sFname;
}
string Employee::getfname() {
	return sFname;
}

void Employee::setlname(string _sLname) {
	sLname = _sLname;
}
string Employee::getlname() {
	return sLname;
}

void Employee::setjtitle(string _sJtitle) {
	sJtitle = _sJtitle;
}
string Employee::getjtitle() {
	return sJtitle;
}

void Employee::setsal(double _dSal) {
	dSal = _dSal;
}
double Employee::getsal() {
	return dSal;
}

//other functions
void Employee::disinfo(string _sLname, string _sFname, string _sJtitle, double _dSal) {
	cout << left << setw(15) << _sLname << setw(15) << _sFname << setw(15)
		<< _sJtitle << setprecision(2) << fixed << _dSal << endl;
}