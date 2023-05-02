#include<iostream>
using namespace std;

class chetan{
    private:
    int a,b;
    public:
    void setdata(int x, int y)
    {a=x; b=y;}
void showdata()
{ cout<<"\na="<<a<<"\nb="<<b;}

};
int main(){
    chetan d1;
    d1.setdata(3,4);
    chetan d2=d1;        // by this protocall we copy the data of d1 into d2
    d2.showdata();
}