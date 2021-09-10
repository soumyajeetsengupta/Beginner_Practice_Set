#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int b = 1, fact = 0, prev = 0;
    for(int i = 2; i < n; i++) {
        fact = b + (prev);
        prev = b;
        b = fact;   
        cout<<fact<<endl;
    }
    return 0;
}