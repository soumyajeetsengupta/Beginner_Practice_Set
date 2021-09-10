#include<iostream>
using namespace std;

int main() {
    int num, copy, sum = 0;
    cin>>num;
    copy = num;
    int number;
    while(copy != 0) {
        number = copy % 10;
        sum += number;
        copy /= 10;
    }
    if(num % sum == 0) {
        cout<<"Harshad Number"<<endl;
    }
    else {
        cout<<"Not Harshad Number"<<endl;
    }
    return 0;    
}