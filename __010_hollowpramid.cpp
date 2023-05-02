#include <iostream>
using namespace std;
int main(){
 //int main() {
    int n;
    cin >>n;

    for(int row=0; row<n; row++){
   // for(int row=0;row<n;row++){
        
        // space
         for(int col=0;col<n-row-1;col++){
            cout <<" ";
         }
         

        // number
        int start=1;
        for(int col=0; col<2*row+1;col++){
           // for first and last row has diffrent matter
           //if(col == 0 || col== 2*row+1 - 1)
           if(row==0 || row == n-1){
            if(col %2 == 0) {
                //even
                cout <<start;
                start=start+1;
            }
            else{
                //odd
                cout <<" ";
            }

            }
            else {
                //first col
                if(col == 0) {
                    cout << 1;
                }
                else if(col == 2*row+1-1){
                    cout << row+1;
                }
               else{
                cout <<" ";
               }
           }
        }
         
        cout << endl;
    }
}