#include<iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout<<"Enter the Binary Number: ";
    cin>>num;
    int copy = num, sum = 1, Expo = 1, rem, Const = 1;
    copy /= 10;
    //Binary to Decimal Conversion 
    while(copy != 0) {
            rem = copy % 10;
            int i = 0;
            while(i != Expo) {
                i++;
                Const *= 2;
                }
                sum = sum + (rem * Const);
                Expo += 1;
                copy /= 10;
                Const = 1;
    }
    //With this decimal we can now find out other values
    cout<<"Decimal: "<<sum<<endl;
    int decimalNum = sum, digit = 1, octalNum = 0;
    //For this question we are converting Binary to Octal. So we convert the decimal value we got to hexa
    while(decimalNum != 0){

        octalNum += ( (decimalNum % 8) * digit ); 
        decimalNum /= 8;
        digit *= 10;

    }
    cout<<"Ocatal Number: "<<octalNum<<endl;
    return 0;
}