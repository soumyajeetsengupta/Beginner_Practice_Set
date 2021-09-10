#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin>>n;
    for(int i = 3; i <= n; i++) {
        for(int j = 2;  j < i; j++) {
            if(i % j == 0) {
            //cout<<i<<" Not Prime!"<<endl;
            break;
        }
        else if(j == i-1) {
            sum+=i;
        }
        }
    }
    cout<<sum+2<<endl;
    return 0;
}