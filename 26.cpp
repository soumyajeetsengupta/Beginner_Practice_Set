#include<iostream>
using namespace std;

int main()  {
    int n1, n2, count2 = 0, count3 = 0, Prime = 0;
    cin>>n1>>n2;
    while(n1 != 1) {
        if(n1 % 2 == 0) {
            count2++;
            n1 /= 2;
        }
        else if(n1 % 3 == 0) {
            count3++;
            n1 /= 3;
        }
        else {
            Prime = n1;
            n1 /= n1;
        }
    }

     while(n2 != 1) {
        if(n2 % 2 == 0) {
            count2++;
            n2 /= 2;
        }
        else if(n2 % 3 == 0) {
            count3++;
            n2 /= 3;
        }
        else {
            Prime = n2;
            n2 /= n2;
        }
    }
    cout<<count3<<"  "<<count2<<endl;
    int gcd;

    if(count2 % 2 == 0) {
        count2;
    }
    else{
        count2 -= 1;
        if(count2 < 2)
        count2 = 2;
        count2 /= 2;
        count2 *= 2;
    }

    if(count3 % 3 == 0) {
        count3;
    }
    else{
        count3 -= 1;
        if(count3 < 3)
        count3 = 3;
        count3 /= 3;
        count3 *= 3;
    }

    gcd = count2 * count3;
    cout<<"GCD: "<<gcd<<endl;
    return 0;
}