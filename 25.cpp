#include<iostream>
using namespace std;

int main() {
    int n1, n2, countN1_2 = 0, countN1_3 = 0, countN2_2 = 0, countN2_3 = 0, countN1_prime = 0, countN2_prime = 0;
    cin>>n1>>n2;
    int Prime = 0;
    //Number1 testing 
    while(n1 != 1) {
        if(n1 % 2 == 0) {
            countN1_2++;
            n1 /= 2;
        }
        else if(n1 % 3 == 0) {
            countN1_3++;
            n1 /= 3;
        }
        else {
            Prime = n1;
            n1 /= n1;
        }
        cout<<countN1_3<<"  "<<countN1_2<<endl;
    }
    cout<<endl;
    //Number2 testing
    while(n2 != 1) {
        if(n2 % 2 == 0) {
            countN2_2++;
            n2 /= 2;
        }
        else if(n2 % 3 == 0) {
            countN2_3++;
            n2 /= 3;
        }
        else {
            if(Prime == n2){
                cout<<"Prime"<<endl;
                n2 /= n2;
            }
        }
        cout<<countN2_3<<"  "<<countN2_2<<endl;
    }
    int gcd = 1, gcd2 = 1, gcd3 = 1;
    
    if(countN1_2 < countN2_2) {
        gcd2 = countN1_2 * 2;
    }
    else{
        gcd2 = countN2_2 * 2;
    }
    
    if(countN1_3 < countN2_3) {
        gcd3 = countN1_3 * 3;
    }
    else{
        gcd3 = countN2_3 * 3;
    }
    gcd = gcd2 * gcd3;
    cout<<"GCD/HCF/GCF: "<<gcd;
}