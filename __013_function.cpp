/// declare ==> define ==> call

#include <iostream>
using namespace std;

int printname(); // function declar
int printname()
{ // function defination
    int n;
    cin >> n;
    cout << "jaat";
     cout << n ;
     return n;
}
 
int main()
{
    cout << "chetan";
    int num = printname(); // function calling

  printf("x is equal to %d\n", num);
                                                             
//    cout << "number is "  || ;

}
