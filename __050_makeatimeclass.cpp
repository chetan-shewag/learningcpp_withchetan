#include<iostream> // header file which include cout<< and cin>>;

using namespace std; //

class time 
{
  private:
      int h,m,s;
  public:
      void settime(int,int,int);
      void showtime();
      void sample();
};
void time::settime(int a,int b, int c){

    h=a;
    m=b;
    s=c;
}

void time::showtime(){
    cout<<"\n"<<h<<" "<<m<<" "<<s;

};
   void time::sample()
{
    // we make a new function bcz of if the out is given not in a normal way the that function start workin 
    m=m+s/60; // this was like minuet =minuet+second divided by 60  bcz of if  some gave ouyput like 100then min.=100+sec. and then w edivide it with the 60 bcz we we have only 60 minutes and 60 second..!
       s=s%60; // this was like if some give seconds in like 200 then sec.=200divided by 60 then we got a our normal time.!
    h=h+m/60; // then if some give minutes in like 100 then extra mintues after 60 will addded  in hours ..! like that
    m=m%60; // then minuet divided by 60 and not give any reminder ..!



}


int main(){
    time t1;
    t1.settime(2,100,33);// we set a data by making obj.
   
    t1.sample(); // run the sample function..!

    t1.showtime(); // after set data and successfuuly run the sample program then we saw our data by this ..!

    // Further we describe all these function..!
    

}







