#include<iostream>
 using namespace std;
 
 int rectangle(int,int);
float circle(int); 
    

 
int main(){

    int r;
    cout<<"Enter radius of circle:";
    cin>>r;
    cout<<"area of circle is:"<<circle(r);
    int l,b;
    cout<<"Enter length"<<"\nEnter breath";
    cin>>l>>b;
    cout<<"area of rectangle is:"<<rectangle(l,b);

 }
 int rectangle(int,int){
    int l,r;
   return (l*r);
 }
 float circle(int){
    int r;
    return(3.14*r*r);
 }
   //48,49 heo bntaye  hai abmhi..
   // vo shru nhii kiya...cpp profgram ki playlist send ki thi??
   // use he bnaye hai progranm no. 48,49 ...  