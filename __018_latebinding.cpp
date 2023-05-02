/*In this program we done the late binding 
  late binding is  done with the key word 
    VIRTUAL */

    #include<iostream>
    using namespace std;
     class box
     {
        public:
        virtual void f1(){}

     };
     class smallbox:public box
     {
        public:
        void f1(){}

     };
     int main(){
     box *p, 01;
     smallbox o2;
     p=&o2;
     p->f1(); // using class B due to late binding (virtual keyword )

               /*in this complier run in the base of contet not the type
                   due to late binding*/
     }