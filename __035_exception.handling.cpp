#include<iostream>
using namespace std;

int main(){
    cout<<"\nchetan jaat";
    try{
        throw 10;
        cout<<"\nin try";

    }
    catch (int e){
        cout<<"\nexception no:"<<e;

    }
    cout<<"\nlast line";

}