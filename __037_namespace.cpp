#include<iostream>
using namespace std;


namespace myspace{
   int a;
   int f1();              //name space can not formed in main function
    class chetan{
        public:
        void fun();

    };
}
          
                          //namespace ms=myspace; "ms"= is alise of myspace
int myspace::f1(){
    cout<<"\nchetan jaat";
}
void myspace::chetan::fun(){
    cout<<"\nchetan choudhary";
}

using namespace myspace;                          
int main(){
    a=5; 
    f1();
    chetan obj;
    obj.fun();bn



}