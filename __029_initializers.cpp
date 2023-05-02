#include<iostream>
using namespace std;
class dummy{
    private:
    int a,b;
    cont int x;
    int &y;
    public:
    dummy(int &n):x(5)
    { }

};
int main(){
    int m=6;
    dummy d1(m)
}