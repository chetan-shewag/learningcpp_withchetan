#include<iostream>
#include<list>
using namespace std;

int main(){
    list <int> l1{4,5};
    list <int> l2{5,6,7};
    list <string> l3{"chetan","choudhary"};
     
     
    list <int>::iterator p=l1.begin();
  
     while(p!=l1.end()){
        cout<<*p<<" ";
        p++;
     }

}