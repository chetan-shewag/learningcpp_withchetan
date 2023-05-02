#include<iostream>
using namespace std;

class chetan{
    private:
    int a,b;
    int *p;
    public:
    chetan(){
        p=new  int;
    }
    void setdata(int x, int y,int z)
    {a=x; b=y; *p=z;}
void showdata()
{ cout<<"\na="<<a<<"\nb="<<b;}
chetan(chetan &d){
    a=d.a; b=d.b;       //to make deep copy you to make copy cunstructer by fourself
    p= new int;
    *p=*(d.p);
}
};
int main(){
    chetan d1;
    d1.setdata(3,4,5 );
    chetan d2=d1;        // by this protocall we copy the data of d1 into d2
    d2.showdata();
}