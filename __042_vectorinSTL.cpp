#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector <int>v1;
     vector<int>v2(5,10);
     cout<<v2[0]<<endl;
     
     cout<<v2[1]<<endl;
     cout<<v2[2]<<endl;
     cout<<v2[3]<<endl;
     cout<<v2[4]<<endl;
     cout<<v1.capacity(); // To know the capacity of the vector
    v1.push_back(5);


     cout<<"\ncurrent capacity :"<<v1.capacity(); // To insert a value in vector
     

}
