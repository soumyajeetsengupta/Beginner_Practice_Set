#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int num, temp = n, count = 0, comp; 
    
    while(temp != 0) {
        num = (temp % 10);
        comp = n; int  num2 = 0;
        while(comp != 0) {
            num2 = comp % 10;
            if(num == num2) {
                count++;
            }
            comp /= 10;

        }
        cout<<"Num " <<num << " frequency : " <<count<<endl;
        temp /= 10;
        count = 0;
    }
    return 0;
}