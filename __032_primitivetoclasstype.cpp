#include<iostream>
using namespace std;

class chetan
{
    private:
          int a,b;
    public:
    chetan(){ }
    chetan(int k){
        a=k; b=0;
    }
    void setdata(int x, int y)
    {
        a=x; b=y;;
    }      
    void showdata(){
        cout<<"\na="<<a<<"b="<<b;
    }
};
int main(){
    chetan c1;
    int x=5;
    c1=x;
    c1.showdata();

}