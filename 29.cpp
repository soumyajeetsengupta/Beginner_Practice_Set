#include<iostream>
using namespace std; 

int main() {
    int n;
    cin>>n;
    for(int i = 3; i <= n; i++) {
        for(int j = 2;  j < i; j++) {
            if(i % j == 0) {
            //cout<<i<<" Not Prime!"<<endl;
            break;
        }
        else if(j == i-1) {
            cout<<i<<" Prime Number!"<<endl;
        }
        }
    }
}