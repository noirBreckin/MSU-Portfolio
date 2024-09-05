// Breckin Hume
// Professor Stringfellow
// Program 1
// February 6th 2023

#include <fstream>
#include <iostream>
using namespace std;

// Purpose: To request and open the input and output files
// Recieves: File Names
// Returns: Nothing
// Function Provided by Prof. Stringfellow
void openFiles(ifstream &infile, ofstream &outfile);

// Purpose: Bitwise ORs the numbers
// Recieves: Two ints to OR
// Returns: Resulting int
int OR(int, int);

// Purpose: Bitwise ANDS the numbers
// Recieves: Two ints to AND
// Returns: Resulting int
int AND(int, int);

// Purpose: Bitwise Shifts the first number to the right
// Recieves: One int to shift, and the other to decide how far to shift
// Returns: The newly shifted int
int SHIFT(int, int);

// Purpose: To print the passed in array to both the console and output file
// Recieves: One array and output file
// Returns: Nothing
void printarray(int array[], ofstream &outfile);

// Purpose: To add up all the values in the array
// Recieves: The array to be summed and a value to store it in
// Returns: The sum of the values in the array
int SUMARRAY(int array[], int);

int main() {
  // Variables for fstream usage
  ifstream input;
  ofstream output;
  // Calling openfiles to prep if and ofstream
  openFiles(input, output);
  
  // Variables for array size and sum
  int size;
  int sum = 0;
  // Obtaining array size from file and creating array
  input >> size;
  int life[size];

  // Printing my header
  cout << "Breckin Hume" << endl << "Program 1" << endl;
  output << "Breckin Hume" << endl << "Program 1" << endl;
  // Filling my array with the input file's contents
  for (int i = 0; i < 7; i++)
    input >> life[i];

  // Variables for loop condition and itteration
  int condition;
  int itteration = 1;

  // Generation 0
  cout << "Gen 0: ";
  output << "Gen 0: ";
  printarray(life, output);
  cout << endl;
  output << endl;

  // Beginning of loop
  do {
    // Printing Generation info
    cout << "Gen " << itteration << ": ";
    output << "Gen " << itteration << ": ";

    // Bitwise Operations
    life[0] = SHIFT(life[0], 1);
    life[0] = AND(life[0], life[1]);
    life[2] = OR(life[2], life[3]);
    life[3] = AND(life[2], life[3]);
    life[4] = OR(life[4], life[5]);
    life[5] = AND(life[4], life[5]);

    // Printing the results along with the sum
    printarray(life, output);
    cout << " Sum: " << SUMARRAY(life, sum);
    output << " Sum: " << SUMARRAY(life, sum);
    cout << " Do you wish to continue? If so, type 1" << endl;
    cin >> condition;

    // Ending the lines for outputs and reseting the loop
    cout << endl;
    output << endl;
    itteration++;
  } while (condition == 1);

  // End statement for loop ending
  cout << "Generations Complete!" << endl;
  output << "Generations Complete!" << endl;

  // Closing my files
  input.close();
  output.close();
}

// Implementation for openFiles
void openFiles(ifstream &infile, ofstream &outfile) {
  char inFileName[40];
  char outFileName[40];

  cout << "Enter the input file name please: " << endl;
  cin >> inFileName;
  infile.open(inFileName); // Opens the input file

  cout << "Enter the output file name please: " << endl;
  cin >> outFileName;
  outfile.open(outFileName); // open output file
}

// Implementation for AND
int AND(int x, int y) { return x & y; }

// Implementation for OR
int OR(int x, int y) { return x | y; }

// Implementation for printarray
void printarray(int array[], ofstream &outfile) {
  for (int i = 0; i < 7; i++) {
    cout << array[i] << " ";
    outfile << array[i] << " ";
  }
}

// Implementation for SHIFT
int SHIFT(int x, int y) { return x >> y; }

// Implementation for SUMARRAY
int SUMARRAY(int array[], int x) {
  for (int i = 0; i < 7; i++) {
    x += array[i];
  }
  return x;
}
