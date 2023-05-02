
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fout;
    fout.open("myfile.txt", ios::app|ios::binary);
}
