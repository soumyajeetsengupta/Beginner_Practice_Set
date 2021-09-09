#include<iostream>
using namespace std;

int main() {
    int n, num, decimal;
    cin>>n;
    int checkPalli = n;
    int temp = n, rev = 0, count = 0;
    //Counts the number of digits
    while(temp != 0) {
        count++;
        temp = temp / 10;
    }
    //Creates a decimal value of same length of user i/p.
    decimal = 1;
    while(count != 1) {
        decimal *= 10;
        count--;
    }
    //Reverses by adding the remainders
    while(n !=  0) {
        num = (n % 10) * decimal;
        rev += num;
        n /= 10;
        decimal /= 10;  
    }
    if(rev == checkPalli)
    {
        cout<<"It's a palindrome number."<<endl;
    }
    else {
        cout<<"It's not a palindrome number."<<endl;
    }
}