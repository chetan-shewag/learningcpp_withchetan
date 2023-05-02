#include<iostream>
 #include<fstream>
 using namespace std;

 int main(){
    ofstream fout;
    fout.open("myfile.txt",ios::app);
    cout<<fout.tellp();
    fout.seekp(2,ios_base::beg);
    cout<<fout.tellp();
    fout.close(); 


 }
