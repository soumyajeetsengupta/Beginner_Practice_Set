#include<iostream>
using namespace std;

int main() {
    int n, sum, number, compare;
    cin>>n;
    for(int i = 2; i <= n; i++) {
        sum = 0;
        for(int j = 1; j < i; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }
        if(sum == i) {
            cout<<i<<" is a perfect number."<<endl;
        }
    }
    return 0;
}