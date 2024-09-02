#include <iostream>
#include <cmath>
#include <fstream>
using namespace std; 

int main() 
{

  
  //Declaring my variables. Used doubles incase user enters decimals as variables

  

  const double pi = 3.14; 
  double hcone;
  double hcylinder; 
  double rsphere;
  double rcone;
  double rcylinder;
  double vsphere;
  double vcone;
  double vcylinder;

 //Asking for and obtaining the information
 cout << "Please enter the radius of the sphere\n";
 cin >> rsphere;

 cout << "Please enter the radius of the cone\n";
 cin >> rcone;

 cout << "Please enter the height of the cone\n";
 cin >> hcone;

 cout << "Please enter the radius of the cylinder\n";
 cin >> rcylinder;

 cout << "Please enter the height of the cylinder\n";
 cin >> hcylinder; 

 cout << "Thank you for entering the information :)\n";

vsphere = 4 % 3 * pi * rsphere * rsphere * rsphere;  
vcone = 1 % 3 * pi * rcone * rcone * hcone;
vcylinder = pi * rcylinder * rcylinder * hcylinder;

cout << "Breckin Hume" << endl;
cout << "Volume Program/Program 2" << endl;


cout << "The volume of a sphere with a radius of " << rsphere << " is " << vsphere << endl;
cout << "The volume of a cone with a radius of " << rcone <<" and a height of " << hcone << " is " << vcone << endl;
cout << "The volume of a cylinder with a radius of " << rcylinder << " and a height of " << hcylinder << " is " << vcylinder << endl;

 
//For the first run of the program I am using the instructions variables where the cone has a radius of 4 and a height of 7, the cylinder has a radius of 4 and a height of 7, and the sphere has a radius of 12.
//For the second run of the program I am doubling the variables from the instructions.
}
