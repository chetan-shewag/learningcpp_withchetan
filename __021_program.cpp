//Template 
// Class template

#include<iostream>
    using namespace std;

    template <class A>  class arraylist  // at the place of A we can put any thing a is just A place holder
   {
   private:
   struct controlblock{
    int capacity;
    int *arr_ptr;
   };
   controlblock *s;
   public:
   arrylist(int capacity){
    s=new controlblock;
    s->capacity=capacity;
    s->arr_ptr=new int[s->capacity];

   }
   void addelement(int index,int data){
    if(index>=0&&index<=s=>capacity=1)
    s->arr_ptr(index)=data;
    else
    cout<<"\nArray index is not valid";
   }
   void viewelement(int index,int &data)
   {
    if (index>=o&&index<=s->capacity-1)
    data=s->arr_ptr[index];
    else
    cout<<"\nArray index is not valid";

   }
   void viewlist()
   {
    int i;
    for(i=0;i<s->capacity;1++)
    cout<<" "<<s->arr_ptr[i];
   }
   
    }; 
    int main ()
    {
        int data;
        arraylsit lsit1(4);
        list1.addelement(o,31);
        list1.addelement(1,42);
        list1.addelement(2,55);
        list1.viewlist();
    };

