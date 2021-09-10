#include<iostream>
using namespace std;

int main() {
    int num, copyNum;
    cin>>num;
    copyNum = num;
    int sum = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            sum+=i;
            cout<<sum<<endl;
        }
    }
    //cout<<sum<<endl;
    if(sum > num) {
        cout<<"Abundant Number"<<endl;
    }
    else {
        cout<<"Not Abundant Number"<<endl;
    }
    return 0;
}