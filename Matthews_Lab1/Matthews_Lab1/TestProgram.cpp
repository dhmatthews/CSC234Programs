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

int main() {
	cout << endl;
	string lname, fname, jtitle;
	double sal;
	int i;
	Employee Employees[10];

	ifstream file;
	file.open("employees.txt");

	if (!file) {
		cout << "No file found!" << endl;
	}

	for (i = 0; i < 10; i++) {
		file >> lname >> fname >> jtitle >> sal;
		Employee empdata(lname, fname, jtitle, sal);
		Employees[i] = empdata;
		empdata.disinfo(lname, fname, jtitle, sal);
	}
	//finding and outputing avg salary
	double dtot=0.0;
	double dfavg = 0.0;
	double dsavg = 0.0;
	for (i = 0; i < 10; i++) {
		dtot = dtot + Employees[i].getsal();
	}
	dfavg = dtot / 10;
	cout << endl;
	cout << "The average salary of all employees is: " << setprecision(2) << fixed << dfavg << endl;
	cout << endl;
	cout << "All employees will have a 5% salary increase:" << endl;
	i = 0;
	//calculate 5% increase and output data
	for (i = 0; i < 10; i++) {
		double newsal;
		newsal = Employees[i].getsal() * 1.05;
		Employees[i].setsal(newsal);
	}

	//function call for updated after salary increase
	for (i = 0; i < 10; i++) {
		Employee empdata(Employees[i].getlname(), Employees[i].getfname(), Employees[i].getjtitle(), Employees[i].getsal());
		empdata.disinfo(Employees[i].getlname(), Employees[i].getfname(), Employees[i].getjtitle(), Employees[i].getsal());
	}

	//finding and outputing new salary
	dtot = 0.0;
	for (i = 0; i < 10; i++) {
		dtot = dtot + Employees[i].getsal();
	}
	dsavg = dtot / 10;
	cout << endl; 
	cout << "The new average salary of all employees is: " << setprecision(2) << fixed << dsavg << endl;
	cout << endl; 

	

}//end of main