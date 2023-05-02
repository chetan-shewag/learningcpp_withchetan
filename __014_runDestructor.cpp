#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    private :
    int a , b;
    public :

    ~complex()
    { cout << "destructor";}


};
void fun(){
complex obj;
}
int main ()
{
    fun();
    getch();
}