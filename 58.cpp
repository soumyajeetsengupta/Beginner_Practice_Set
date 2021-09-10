#include<iostream>
using namespace std;

int main() {
    int num1, copyNum;
    cin>>num1;
    int copy2 = num1;
    copyNum = num1;
    copyNum *= copyNum;
    int count = 0;
    while(num1 != 0) {
        count++;
        num1 /= 10;
    }
    int decimal = 1;
    while(count != 0) {
        decimal *= 10;
        count--;
    }
    if(copyNum % decimal == copy2) {
        cout<<"Automorphic Number"<<endl;
    }
    return 0;
}