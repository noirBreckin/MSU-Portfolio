#include <iostream>
#include <fstream>
using namespace std; 

//Function to make my header
void header()
{ 
  cout << "Breckin Hume" << endl; 
  cout << "Prof. Mika Morgan" << endl;
  cout << "Lab 1" << endl << endl; 
}  
//struct for my pixels and their respective colors
struct Pixel
{
 int red;
 int blue;
 int green;
};
//function to change the values of the pixel's colors
void funky(Pixel array1[256][256])  
{
   for(int r = 0; r < 256; r++) 
  {
    for(int c = 0; c < 256; c++)
    {
      array1[r][c].blue += 200;
      array1[r][c].red -= 50;
      array1[r][c].green += 200; 
    }
  }
 
}

//main function
int main() 
{

//making the 2D array
  Pixel array1[256][256]; 

//Opening my input/output files
 ifstream infile;
 infile.open("bot.dat"); 
 ofstream outfile;
 outfile.open("newbot.dat");

 header(); 
 string p3;
 int r, c, max;

infile >> p3;
infile >> r;
infile >> c;
infile >> max; 

//Setting up then nested for loops so all the pixels and colors get organized into the array of structs
 for(int r = 0; r < 256; r++) 
  {
    for(int c = 0; c < 256; c++)
    {
      infile >> array1[r][c].red;
      infile >> array1[r][c].green;
      infile >> array1[r][c].blue; 
    }
  }

  funky(array1);
 
 outfile << p3 << endl;
 outfile << r << " " << c << endl;
 outfile << max << endl;

 for(int r = 0; r < 256; r++) 
  {
    for(int c = 0; c < 256; c++)
    {

      outfile << array1[r][c].red << " "; 
      outfile << array1[r][c].green << " ";
      outfile << array1[r][c].blue << " "; 
    }
  } 
  
}
