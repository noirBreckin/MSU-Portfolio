#include <iostream>

using namespace std;
int main() 
{
//Declaring Variables
double weight; 
double height; 
double BMI;
string measurement;
//Asking for form of measurement
cout << "Do you use the customary or metric units of measurement? Type 1 if you use customary. Type 2 if you use metric." << endl;
cin >> measurement; 
//Scenario if the measurement is customary
if(measurement == "1")
 {
   cout << "Please enter your weight in pounds." << endl;
cin >> weight;
cout << "Please enter your height in inches." << endl;
cin >> height;
BMI = (weight * 703) / (height * height);
   if(BMI < 18.5)
     {
       cout << "Sorry but you're underweight. We recommend you ensure you're getting a healthy amount of food and calories. A crude way of saying it is you should eat more." << endl;
     }
   else if(BMI <= 24.9)
    {
      cout << "You are normal. Good job, no dietary recommendations are necessary." << endl;
    }
   else if(BMI <= 29.9)
    {
      cout << "You are overweight. We recommend that you cut back on the caloric intake by a decent amount." << endl;
    }
    else
    {
      cout << "You are obese. We strongly recommend that you drastically cut back on your daily caloric intake and start excercising more if at all possible." << endl;
    }
   
  }
  //Scenario if the measurment is metric
  else if(measurement == "2")
   {
     cout << "Please enter your weight in kilograms." << endl;
     cin >> weight;
     cout << "Please enter your height in meters." << endl;
     cin >> height;
     BMI = weight / (height * height);
       if(BMI < 18.5)
     {
       cout << "Sorry but you're underweight. We recommend you ensure you're getting a healthy amount of food and calories. A crude way of saying it is you should eat more." << endl;
     }
   else if(BMI <= 24.9)
    {
      cout << "You are normal. Good job, no dietary recommendations are necessary." << endl;
    }
   else if(BMI <= 29.9)
    {
      cout << "You are overweight. We recommend that you cut back on the caloric intake by a decent amount." << endl;
    }
    else
    {
      cout << "You are obese. We strongly recommend that you drastically cut back on your daily caloric intake and start excercising more if at all possible." << endl;
    }
    
  }
    else
       cout << "Bro I made this easy, you gotta try again :( " << endl;

 
  
 


}
