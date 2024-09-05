#include <iostream>
#include <string>

using namespace std;

//Recursive function that returns if a given string is a palindrome
bool is_Palindrome(string str)
{
  //Base case- immediately return false if chars don't match
  if(str.front() != str.back())
    return false;
  //Base case- return true if reached end of string 
  else if (str.length() == 0 || str.length() == 1)
    return true;
  //Recursive call- keep checking with smaller substring
  else
    return is_Palindrome(str.substr(1, str.length() - 2));
}

//Main driver function
int main() 
{
  cout << is_Palindrome("not a palindrome") << endl;
  cout << is_Palindrome("racecar") << endl;
  cout << is_Palindrome("neveroddoreven") << endl;
}
