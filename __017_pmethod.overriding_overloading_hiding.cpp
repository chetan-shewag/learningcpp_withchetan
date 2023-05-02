/*study about the method overriding
1.Method ovverriding
2.Method overloading
3.Method hiding    */


#include <iostream>
using namespace std;


    class A
    {
        public:
        void f1( )  { }
        void f2( ){ }

    };
    class B:public A

    {
        void f1 ()  {   } // methoid ovverriding
        void f2(int x ){ } //method hiding
    };
    int main(){
        B obj;
        obj.f1(); //using b class
        obj.f2();  // give error
        obj.f2(4); //using b class 
    }

