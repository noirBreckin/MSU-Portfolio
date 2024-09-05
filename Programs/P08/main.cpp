//Breckin Hume
//Computer Science I
//Mika Morgan
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std; 

//Switch Case Function
void process(char transaction, float money, float & NewBalance)
{
  
  switch(transaction)
  {
    case 'A': NewBalance += money; break; //Automatic Direct Deposit
    case 'B': NewBalance += money; break; //Deposit at bank
    case 'M': NewBalance += money; break; //Mobile Deposit
    case 'C': NewBalance -= money; break; //Purchase with check
    case 'D': NewBalance -= money; break; //Debit Card Purchase 
    case 'O': NewBalance -= money; break; //Online Bill Pay
    case 'T': NewBalance -= money; break; //ATM Bill Withdraw 
    default:  cout << "Wait a minute..how did this happen, you shouldn't be seeing this..get out";
  } 

}

int main()
{
  //Variables
  string name;
  char transaction;
  float money;
    

    ifstream infile;
    infile.open("checking.dat");
  float Balances[5] = {0.0, 0.0, 0.0, 0.0, 0.0}; 

 cout << "Breckin Hume" << endl << endl << "Ending Balances:" << endl;
//The heart of the program, the loop that will read in and pass info off to the function before printing the results out
for(int i = 0; i < 6; i++)
{
infile >> name >> transaction >> money;
float NewBalance = 0;
process(transaction, money, NewBalance); 
cout << name << ":  " << transaction << " " << "$" << NewBalance << ".00" << endl; 
}



 





    
}
