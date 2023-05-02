// pointer
// in this program we see how a pointer works

#include<iostream>

using namespace std;

class box

{
    private:
    int l,b,h;
    public:
    void setdimension(int x, int y, int z)  /*instance member function*/
        {l=x; b=y; h=z;}                    /*instance member function*/
    void showdimension()                    /*instance member function*/
    {                              /*static is not a instance member function*/
        cout<<"\nl="<<l<<" b="<<b<<" h="<<h; /*every instance member function
                                               contains "this" type of pointer*/
    }
};
int main()
{
    box *p, smallbox;         // we have to declear poitne namme here 
    p=&smallbox;      // the type of pointer should be same as the type of class
                                /*smallbox.setdimension(12,10,5); -----> as  
                                  we know this was the normal 
                                  way to call a object by its name*/
     p->setdimension(12,10,8); /* this was the new way by which we call a 
                                 function with the help of pointer*/

    p->showdimension();
    
}