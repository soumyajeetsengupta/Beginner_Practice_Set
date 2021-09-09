#include<iostream>
using namespace std;

int main() {
    int n, sumEve = 0;
    cin>>n;
    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            sumEve += i;
        }
    }
    cout<<sumEve<<endl;
    return 0;
}