#include<iostream>
using namespace std;

int main() {
    int number;
    cin>>number;
    for(int iteration = 1; iteration <= number; iteration++) {
//itr is made because if we divide the for loop loop iteration variable it will always evaluate to 1 and will hence lead to infinite loop
        int itr = iteration;
        int sum = 0, num, comp = iteration;
        //from here the strong number calculation begins
        while(itr != 0) {
            num = itr % 10;
            int res = 1;
            for(int i = 1; i <= num; i++) {
                res *= i;
                //cout<<res<<endl;
                }
                sum += res;
                itr /= 10;
                }
                if(sum == comp){
                    cout<<sum<<" is a strong number."<<endl;
                }
    }
    return 0;
}