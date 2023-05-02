#include<iostream>
using namespace std;


class product {
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
    int geta()
    {return(a);}
    int getb()
    {return(b);}

    
};
class chetan
{
    private:
          int c,d;
    public:
    
    void showdata(){
        cout<<"\nc="<<c<<"d="<<d;
    }
    chetan(){ }
    chetan(product p){
        c=p.geta();
        d=p.getb();
    }      
};
int main(){
    chetan c1;
    product p1;
     p1.setdata(9,10);
     c1=p1;
     c1.showdata();

    

}