#include<iostream>
using namespace std;

int main() {
    int n = 100;
    int difference = 0, allBreak = 0;
    int b = 1, fact = 0, prev = 0;

    for(int i = 2; i < n; i++) {
        if(allBreak > 0){
            i = 101;
        }
        fact = b + (prev);    
        prev = b;    
        //when difference > 1 means that there are num present in that gap and those are non-fib number
        difference = fact - prev;
        //cout<<difference<<endl;
        if(difference > 1) {
            int start = prev;         
            while(difference != 1) {
                start++;
                if(start > 100) {
                    allBreak++;
                    break;
                }                
                cout<<start<<endl;
                difference--;
                }
                }
        
        b = fact;  
    }
    return 0;
}