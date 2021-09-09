#include<iostream>
using namespace std;

int main() {
    float n;
    cin>>n;
    for(int i = 1;i <= n; i++) {
        if(n / i == i) {
            cout<<"Power of "<<n<<" = "<<i<<endl;
            break;
        }
    }
    return 0;
}