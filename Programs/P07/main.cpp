//Breckin Hume
//Computer Science I
//Mika Morgan
//This program will read in info from an input file and categorize it using loops and conditionals
#include <iostream>
#include <fstream> 
 
using namespace std; 
 




int main() 
{
//Opening the input file
  ifstream infile("students.dat");
  //Setting up all of my variables
 double Gaverage;
 int F;
 int S;
 int J;
 int SN;  
 int grade1;
 int highestG;
 int sum = 0;
 int lowestG;
 double studentcount;
 string classification;
 string name;
 string freshman;
 string sophmore;
 string junior;
 string senior;
 //Setting up my loop to read in info from the input file
 while(!infile.eof())
{
  infile >> name >> name >> classification >> grade1; 
  
  //Categorizing the classifications of the student info from the input file 
  if(classification == "freshman")
  F++; 
  else if(classification == "sophomore")
  S++;
  else if(classification == "junior")
  J++;
  else if(classification == "senior")
  SN++;

 studentcount = SN + J + S + F;
 
//Finding the highest grade
  if(grade1 > highestG)
   highestG = grade1;
//Finding the lowest grade
  if(grade1 < highestG)
   lowestG = grade1;
//Finding the sum of the grades
  if(grade1 < 1000)
   sum += grade1; 
//Dividing the sum to get the average
  Gaverage = sum / studentcount; 
}
//Printing out the info to the console
cout << "Highest Grade " << highestG << endl;
cout << "Lowest Grade " << lowestG << endl;
cout << "Class Average " << Gaverage << endl; 
cout << "Freshmen: " << F << endl;
cout << "Sophmores: " << S << endl;
cout << "Juniors: " << J << endl;
cout << "Seniors: " << SN << endl;
cout << "Student Count: " << studentcount << endl;
infile.close();
} 
