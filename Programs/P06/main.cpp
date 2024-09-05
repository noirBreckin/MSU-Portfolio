//Breckin Hume
//Computer Science I
//Intro to functions program
#include <iostream>
#include <cmath>
using namespace std; 
void heading()
{
  cout << "Ayo dis the heading, we out here cloud mains" << endl;
  cout << "Sugar rush is gonna be tough but fun" << endl;
  cout << "At least we get to practice with Braden beforehand" << endl;
}

double mycube(double x)
{
  return x * x * x;
}

int smallest(int x, int y)
{
  if(x < y)
  return x;
  else 
  return y; 
}

int largest(int w, int z)
{
  if(w < z)
  return z;
  else 
  return w;
}


int main() 
{
  int n, number1, number2, small, number3, number4, large;
  double num, sq, cube, cube2;
  cout << "How many times does the heading need to be printed?" << endl;
  cin >> num;
  for(int i = 0; i < num; i++)
  heading();
  cout << "What is your favorite number?" << endl;
  cin >> num;
  //Squaring the number
  sq = num * num;
  //Cubing the number normally
  cube = pow(num, 3);
  //Cubing the number using a predefined function
  cube2 = mycube(num);
  cout << num << " Squared is " << sq << endl;
  cout << num << " Cubed is " << cube << endl;
  cout << num << " Cubed using a predefined function is " << cube2 << endl;
  cout << "Enter two different numbers" << endl;
 //Using the smaller function
  cin >> number1 >> number2;
  small = smallest(number1, number2);
  cout << "The smallest of " << number1 << " and " << number2 << " is " << small << endl;
//Using the larger function
  cout << "Enter two more numbers" << endl;
  cin >> number3 >> number4;
  large = largest(number3, number4);
  cout << "The largest of " << number3 << " and " << number4 << " is " << large;
  
  return 0;


}
