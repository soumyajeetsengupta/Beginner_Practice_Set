#include<iostream>
using namespace std; 

int main() {
    int num; 
    cin>>num;
    int copy = num, sum = 1, Expo = 1, rem, Const = 1;
    copy /= 10;
    //Octal to Decimal Conversion 
    while(copy != 0) {
            rem = copy % 10;
            int i = 0;
            while(i != Expo) {
                i++;
                Const *= 8;
                }
                sum = sum + (rem * Const);
                Expo += 1;
                copy /= 10;
                Const = 1;
    }
    cout<<"Decimal Number: "<<sum<<endl;

    int decimalNum = sum, digit = 1, binaryNum = 0;
    //For this question we are converting Decimal to Binary.
    while(decimalNum != 0){

        binaryNum += ( (decimalNum % 2) * digit ); 
        decimalNum /= 2;
        digit *= 10;

    }
    cout<<"Binary Number: "<<binaryNum<<endl;
    return 0;
}