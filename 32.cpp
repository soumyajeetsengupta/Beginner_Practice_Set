#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            for(int j = 2; j < i; j++) {
                if(i % j != 0) {
                    if(j == i-1)
                    cout<<i<<endl;
                }
                else
                break;
            }
        }
    }
    return 0;
}