#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int sum = 0, num, comp = n;
    while(n != 0) {
        num = n % 10;
        int res = 1;
        for(int i = 1; i <= num; i++) {
            res *= i;
            //cout<<res<<endl;
        }
        sum += res;
        n /= 10;
    }
    if(sum == comp){
        cout<<sum<<" is a strong number."<<endl;
    }
    else {
        cout<<"is not a strong number."<<endl;
    }
    return 0;
}