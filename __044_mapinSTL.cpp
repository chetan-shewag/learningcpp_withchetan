#include<iostream>
#include<map>
using namespace std;

int main(){
    map <int,string> student;
    
    student[12]= "chetan";
    student[22]= "sonu";
    student[100]= "chintu";


    cout<<student[12]<<endl;
    
    cout<<student[100]<<endl;

    cout<<student[22]<<endl;
}