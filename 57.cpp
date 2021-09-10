#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    cin>>num1>>num2;
    int sum1 = 0, sum2 = 0;
    while(num1 != 0) {
        int divisor = num1 % 10;
        sum1 += divisor;
        num1 /= 10;
    }
    while(num2 != 0) {
        int divisor = num2 % 10;
        sum2 += divisor;
        num2 /= 10;
    }
    cout<<sum1<<" "<<sum2<<endl;
    if(sum2 == num1 && sum1 == num2) {
        cout<<"Amicable Numbers";
    }
    else {
        cout<<"Not-Amicable Numbers";
    }
    return 0;
}