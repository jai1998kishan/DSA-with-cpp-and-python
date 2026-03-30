// how to run the code => for compile => g++ .\sum-of-10-number.cpp 
// to run => ./a.exe
/**
 * sum of 10 numbers;
 * 
 */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    for(int i=0; i<=10; i++){
        sum = sum + i;
    }

    cout<<"Sum of 10 number is :"<<sum;
    return 0;
    
}