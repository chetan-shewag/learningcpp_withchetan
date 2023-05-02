
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout;
    char ch;
    fout.open("myfile.txt",ios::app);
    int pos;
    pos=fout.tellp();
    cout<<pos;
    fout<<"chetan";
   
    pos=fout.tellp();
    cout<<pos;
    



}