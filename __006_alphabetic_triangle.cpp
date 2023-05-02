//Make a triangle with alphabets

#include <iostream>
using namespace std;

int main(){
    int ch;
    
    cin >> ch;
     
  
   for (int row=0; row<ch; row++){

    //space
        for(int col=0;col<ch-row-1;col++){
            cout <<" ";
        }

        // star
        for(int col=0; col<row+1; col++){
            cout <<"ab ";
        }
    
    cout << endl;
   

   }    
}
