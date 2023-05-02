 #include<iostream>
 #include<fstream>
 using namespace std;

 int main(){
    ifstream fin;
    fin.open("myfile.txt");
    cout<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
    cout<<"\n"<<fin.tellg();
    fin.seekg(3);
    cout<<"\n"<<fin.tellg();
     cout<<"\n"<<(char)fin.get();
     fin.seekg(2,ios_base::cur);    
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<fin.tellg();
    cout<<"\n"<<(char)fin.get();
 }