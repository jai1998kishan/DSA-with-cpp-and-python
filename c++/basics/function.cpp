/*

Functions

return type
function name
input type

*/

#include<bits/stdc++.h>
using namespace std;

void printSomething(){
    cout<<"Hello something"<<endl;
   
}

int sum(int a, int b){
    int c = a + b;
    return c;
}

float sum(float a, float b){
    return a+b;
}

int main(){

    printSomething();

    int x= 5;
    int y= 10;


    int result = sum(x,y);
    cout << "Result: " << result << endl;

    cout << "Overloading: " << sum(5.0f, 10.0f);

    return 0;
}