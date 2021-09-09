#include<iostream>
using namespace std;

    string decimal[] = {"ones", "tens", "hundred", "thousand"};
    string numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    
    int main() {
    int n, deci = 0, num = 0;
    cin>>n;
    while(n != 0){
        num = n % 10;
        cout<<numbers[num]<<" "<<decimal[deci]<<", ";
        deci += 1;
        n /= 10;
    }
    cout<<endl;
    return 0;
}