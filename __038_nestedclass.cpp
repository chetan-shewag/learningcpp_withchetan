#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
    int rollno;
    char name[20];

    class address
    {
    private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[20];

    public:
        void setaddress(int h, char *s, char *c, char *st, char *p)
        {
            houseno = h;
            strcpy(street, s);
            strcpy(city, c);
            strcpy(state, st);
            strcpy(pincode, p);
        }
        void showaddress()
        {
            cout << "\nhouseno: " << houseno;
            cout << "\nstreet: " << street;
            cout << "\ncity: " << city;
            cout << "\nstate: " << state;
            cout << "\npincode: " << pincode;
        }

         void setrollno(int r)
         {
            rollno=r;
         
         void setname(char *n){
            strcpy(name, n);
         }

        // void showaddress(){
        //     cout<<"\nhouseno:";
        //     cout<<"\nstreet:"<<"\ncity:"<<"\nstate:"<<"\npincode:";
        // }
    };
           
    address add;

public:
    void setrollno(int r)
    {
        rollno = r;
   
    }
    void setname(char *n)
    {
        strcpy(name, n);
       
    }
    void setaddress(int h, char *s, char *c, char *st, char *p)
    {
        add.setaddress(h, s, c, st, p);
    }
    void showstudent()
    {
        cout << "\nstudent data";
        cout << "\nroll no:";
        cout << "\nname:";
        add.showaddress();
    }
};
int main()
{
    student s1;
    s1.setrollno(100);
    s1.setname("chetan");
    s1.setaddress(301, "mhola laldiggi", "alwar", "301001", "rajasthan");
    s1.showstudent();
}