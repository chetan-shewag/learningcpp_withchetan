//Template 
// Function template

#include<iostream>
    using namespace std;

    template <class A> // at the place of A we can put any thing a is just A place holder

A big(A x,A y )
{
    if(x>y)
          return (x);
     else
          return (y);     
}
int main()
{
    cout<<big(4,5);
    cout<<big(5.6,3.4);
}