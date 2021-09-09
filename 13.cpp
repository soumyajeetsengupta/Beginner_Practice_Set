#include<iostream>
using namespace std;

int main() {
    int n, count = 0, firstNum, lastNum;
    cin>>n;
    while(n != 0) {
        if(count == 0) {
            lastNum = n % 10;
        }
        count++;
        if(n / 10 == 0) {
            firstNum = n;
        }
        n = n / 10;
    }
    int sum = firstNum+lastNum;
    cout<<"First digit: "<<firstNum<<endl;
    cout<<"Last digit: "<<lastNum<<endl;
    cout<<"Sum: "<<sum<<endl;
    return 0;
}