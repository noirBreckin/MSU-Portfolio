//Breckin Hume
//Recursion Lab
//Data Structs 
//Professor Morgan
//February 15th, 2022
#include <iostream>
#include <string>

using namespace std;

//Function Set Up
bool shuffle(string s1, string s2, string s3)
{
  //Case that checks the shuffling of the word
  if(s1.front() || s2.front() != s3.front())
    return "Not Valid input";
  //Case that examines the first letters of shuffled piece 1 and the original word, if a match is found, then the letters are shaved off
  else if(s1.front() == s3.front())
   return shuffle(s1.substr(1, s1.length() - 1), s2, s3.substr(1, s3.length() - 1));
  //Case that examines the first letters of shuffled piece 2 and the original word, if a match if found, then the letters are shaved off
  else if(s2.front() == s3.front())
    return shuffle(s1, s2.substr(1, s2.length() - 1), s3.substr(1, s3.length() - 1));
  //Checks for the end of the recursion function
  else if(s3.length() == 0) 
    return true;
  
  else
    return 0; 
}

//Main function to initiate the recursive function
int main() 
{
  cout << shuffle("hot","dog","hdootg"); 
}

