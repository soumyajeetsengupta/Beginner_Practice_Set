#include<iostream>
using namespace std;

int main() {
    int n,actualNum = 1, num = 0, sum = 0, compare; 
    cin>>n;
    compare = n;
    while(n != 0)  {
        num = n % 10;
        int count = 0;
        actualNum = 1;
        while(count < 3) {
            count++;
            actualNum *= num;
        }
        //cout<<actualNum<<endl;
        sum+=actualNum;
        n /= 10;
    }
        //cout<<sum<<endl;
    if(compare == sum) {
        cout<<"Armstrong  Number!"<<endl;
    }
    else {
         cout<<"Not Armstrong  Number!"<<endl;
    }
}