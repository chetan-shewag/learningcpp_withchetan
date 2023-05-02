#include<iostream>
#include<tuple>

using namespace std;
int main(){
    tuple <string,int,int>t1;
    tuple <string,string,int>t2;
    t1=make_tuple("chetan",20,2004);
    t2=make_tuple("chetan","alwar",20);
    cout<<get<0>(t1)<<endl;
    cout<<get<1>(t1)<<endl;
    cout<<get<2>(t1)<<endl;
    cout<<get<0>(t2)<<endl;
    cout<<get<1>(t2)<<endl;
    cout<<get<2>(t2);

    

}