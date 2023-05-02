/*Pure virtual function  
Pure virtual function=that function which does not have any defination 
either inside the class or out sid ethe classs;
in simple word we can say that THOSE DOESN't have defination */
 
  


#include<iostream>
    using namespace std;

    class chetan 
    {
        public:
        virtual void fun()=0;  //when we assign the value ZERO in class then it become pure virtual function
                      
    };
    class person:public chetan
    {
        void fun(){
             
        }
    };

    /*we can make object of this parent class because those class have pure
    virtual function they doesn't have acces to make a object */