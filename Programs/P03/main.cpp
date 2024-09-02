// Lab 3.cpp 
// Breckin Hume
// Computer Science I
// Mika Morgan


#include <iostream>
#include <fstream>
#include <cmath>
using namespace std; 

int main()
{
    ofstream outfile;
    int number1;
    int number2;
    outfile.open("outputReplit.txt");
    cout << "Please enter the first number." << endl;
    cin >> number1; 

    cout << "Please enter the second number." << endl;
    cin >> number2; 
    
    cout << "Thank you for entering the numbers :) " << endl; 

    outfile << number1 + number2 << endl;
    outfile << number1 - number2 << endl;
    outfile << number1 * number2 << endl; 
    outfile << number1 / number2 << endl; 
    outfile << number1 % number2 << endl;
}
