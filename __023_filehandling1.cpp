// File handling
// File handling to put a file in harddisk

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fout;
    fout.open("myfile.txt");
    if (!fout)
    {
        cout << "Error while creating the file";
    }
    else
    {
         fout << "hello chetan";
        cout << "File created successfully";
        fout.close();
    }
    return 0;
     
}

//   fstream FileName;
//     FileName.open("FileName", ios::out);
//     if (!FileName){
//         cout<<"Error while creating the file";
//     }
//     else{
//         cout<<"File created successfully";
//         FileName.close();
//     }
//     return 0;

// C:\MinGW\bin\g++.exe  "D:\Learning C\learning-c++\__023_program.cpp"
