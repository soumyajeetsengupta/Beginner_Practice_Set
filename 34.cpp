#include<iostream>
using namespace std;

int main() {
    int n, compare, actualNum = 1, num = 0, sum = 0;
    cin>>n;
    int i = 1;
    int number;
    //for loop iterating  every number
    for(i = 1; i <= n; i++) {
        compare = i;
        number =  i;
        sum = 0;
        //evaluates i digits to it's cube then add those digits.
        while(number != 0)  {
            num = number % 10;
            int count = 0;
            actualNum = 1;
            while(count < 3) {
            count++;
            actualNum *= num;
        }
        //cout<<actualNum<<endl;
        sum+=actualNum;
        number /= 10;
    }
    //cout<<sum<<endl;
    //checks the i == the cube sum of digits.
    if(compare == sum) {
        cout<<"Armstrong  Number = "<<i<<endl;
        }
    }
    return 0;
}