#include<iostream>
using namespace std;

int main() {
    string binNum;
    cin>>binNum;
    for(int i = 0; i < binNum.length(); i++) {
        if (binNum[i] == '0') {
            binNum[i] = '1';
        } 
        else {
            binNum[i] = '0';
        }
    }
    cout<<binNum<<endl;
    
    return 0;
}