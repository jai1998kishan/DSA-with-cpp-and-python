/*

sum of first 10 even numbers

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int sum = 0;

    int n;
    cout<<"Enter the number of even number you want \n";
    cin>>n;

    for(int i=1; i<=2*n; i++){
        if(i%2==0){
            sum = sum + i;
        }
    }
    cout<<"Sum of first"<< n <<" even numbers is : "<<sum <<endl;

    cout<<"using math formula"<<endl;
    int result = n*(n+1);
    cout<<"Using maths: "<<result;

    return 0;
}

