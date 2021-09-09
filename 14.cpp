#include<iostream>
using namespace std;

int main() {
    int n, count = 0, firstNum, lastNum;
    int newNum, decimalPlace;
    cin>>n;
    //Passed the user num i/p to a temp var to perfrom operations
    int temp = n;
    while(temp != 0) {
        if(count == 0) {
            lastNum = temp % 10;
        }
        count++;
        if(temp / 10 == 0) {
            firstNum = temp;
        }
        temp = temp / 10;
    }
    //got the firstdigit and the seconddigit from above code
    
    //cout<<firstNum<<endl<<lastNum<<endl;

    //Breaking ex: 2321, 2*1000
    newNum = firstNum, decimalPlace = lastNum;  
    for(int i = 0; i < count-1; i++) {
        newNum *= 10;
    }
    //ex: 2321, 1*1000
    for(int i = 0; i < count-1; i++) {
        decimalPlace *= 10;
    }

    //cout<<newNum<<endl<<decimalPlace<<endl;
    //2321 - 2001 = 320.
    newNum += lastNum;
    int secondNum = n - newNum;
    secondNum = secondNum;

    //cout<<newNum<<endl<<secondNum<<endl;
    //1000 + 320 + 2 = 1322
    newNum = decimalPlace + secondNum + firstNum;
    //Prints swapped number
    cout<<newNum<<endl;
    return 0;
}