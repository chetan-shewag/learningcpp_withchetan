#include <iostream>
#include <string.h>
using namespace std;

class admin
{
private:
      char adminname[20];
      char adminpassword[20];

       admin(){
        strcpy(adminname,"admin");
        strcpy(adminpassword,"admin");

       }
public:       
       void showadmin()
       {
        cout<<"\nadmin name:"<<adminname;
        cout<<"\nadmin password:"<<adminpassword;

       }
    static admin* getinstance(){
        admin *ptr=new admin;
        return (ptr);

   }   

      
};
int main(){
   admin *adminpointer;
   adminpointer=admin::getinstance();
   adminpointer->showadmin();
}