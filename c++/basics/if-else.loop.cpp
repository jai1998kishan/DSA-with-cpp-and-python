

// if-else and else-if

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n ;
    cout<<"Enter the number : ";
    cin>>n;

    if(n%2 == 0 and n!=10){
        cout<<n<<" number is even"<<endl;
    }else{
        cout<< n << " number is odd"<<endl;
    }


    for(int i=0; i<=n/2; i++){
        cout<<"the value of n : "<<n<<endl;
    }

    return 0;
}