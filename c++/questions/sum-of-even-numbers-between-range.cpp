/*
sum of even numbers between 20 and 40 (both included)

*/

#include<bits/stdc++.h>
using namespace std;

int  main(){
    int sum=0;

    int start;
    int ended;

    cout<<"Enter the start and ending range : \n";
    cin >> start >> ended;

    cout<<"start : "<<start <<" \nended: "<<ended<<endl;

    for(int i=start; i<=ended; i++){
        if(i%2==0){
            sum = sum + i;
        }
    }

    cout<<"Sum of even numbers betwwen "<<start <<" to " <<ended<<" is : "<<sum; 

    return 0;
}