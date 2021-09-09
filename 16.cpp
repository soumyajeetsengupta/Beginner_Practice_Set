#include<iostream>
using namespace std;

int main() {
    int n, product = 1;
    cin>>n;
    while (n != 0) {
        product *= n % 10;
        n = n / 10;
    }
    cout<<product<<endl;
    return 0;
}