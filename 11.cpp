#include<iostream>
using namespace std;

int main() {
    long n;
    int count = 0;
    cin>>n;
    while(n != 0) {
        n = n/10;
        count++;
    }
    cout<<count;
    return 0;
}