// Breckin Hume
// Computer Science I
// Mika Morgan

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;



int main()
{
	ofstream outfile; 
	outfile.open("output.txt");
	int year = 1;
	double salary = 20000.00; 
	double increase = 0.10;
	outfile << "Breckin Hume" << endl << "Computer Science I" << endl << "Mika Morgan" << endl;

	while (salary <= 50000.00)
	{
		double raise = salary * increase; 
		salary += raise; 
		year++;
		outfile << "Year            Salary" << endl;
		outfile << "----------------------" << endl;
		outfile << year << "                 " << salary << endl; 
		outfile << endl; 

	}


	outfile.close();
	return 0;



}
