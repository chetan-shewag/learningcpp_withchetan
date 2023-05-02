//File handling
// To take a file from hard disk

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   ifstream fin;
   char ch;
   fin.open("myfile.txt");
   fin>>ch;
   while(!fin.eof()){
      cout<<ch;
      fin>>ch;

   }
   fin.close();
}