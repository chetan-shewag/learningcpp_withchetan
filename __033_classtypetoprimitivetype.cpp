#`include<iostream>
using namespace std;

class chetan
{
    private:
          int a,b;
    public:
    
    void setdata(int x, int y)
    {
        a=x; b=y;
    }      
    void showdata(){
        cout<<"\na="<<a<<"b="<<b;
    }
    operator int(){

      return (3);
    }
};
int main(){
    chetan c1;
     c1.setdata(5,7);
    c1.showdata();
    int x;
    x=c1;
    cout<<"\nx="<<x;

}