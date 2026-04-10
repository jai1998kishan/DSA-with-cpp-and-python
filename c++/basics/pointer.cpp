/*

Pointers
- special variables that store address of other variables



 *  -> Derefernce(value at address) operator


 # NULL Pointer


 # Pass by Reference


*/


#include <iostream>
#include <vector>
using namespace std;


void changeA(int a){ //pass by value
    a = 20;
}

void changeB(int* ptr){ //pass by reference
    *ptr = 20; 
}

void changeC(int &d){ // pass by refernce using alias(&d)
    d = 200;
}


int main(){
    // int a = 10;
    // int* ptr = &a;

    // cout<<ptr<<endl;
    // cout<<&a<<endl;
    // cout<<&ptr<<endl;


    //pointer to pointer

    // int a = 10;
    // int* ptr = &a;

    // int** parPtr = &ptr;

    // cout<<"Derefernce value of *(&a): "<<*(&a)<<endl;
    // cout<<"Derefernce value of *(&ptr): "<<*(&ptr)<<endl;
    // cout<<"Derefernce value of *(&parPtr): "<<*(&parPtr)<<endl;
    // cout<<"Derefernce value of **(&parPtr): "<<**(&parPtr)<<endl;

    // cout<<"value of a: "<<&a<<endl;
    // cout<<"value of ptr: "<<ptr<<endl; // it display the address of a
    // cout<<"Address of ptr: "<<&ptr<<endl;
    // cout<<"value of parPtr: "<<parPtr<<endl; // it display the address of ptr
    // cout<<"Address of parptr: "<<&parPtr<<endl;


    // NULL Pointer 
    // int** ptr =NULL;
    // cout<<ptr<<endl;


    // Question 1 
    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout<<*p<<endl;  // 5
    // cout<<**q<<endl;  // 5
    // cout<<p<<endl;  // address of a
    // cout<<*q<<endl;  // address of a


    // Pass by Reference 

    cout<<endl;
    cout<< "pass by value "<<endl;
    int a = 10;

    changeA(a);
    cout<< "inside main fnx a : "<<a <<endl;

    cout<<endl;
    cout<< "pass by reference "<<endl;
    int b = 10;
    changeB(&b);
    cout<< "inside main fnx b : "<<b <<endl;


    cout<<endl;
    cout<< "pass by reference alias "<<endl;
    int c = 100;
    changeC(c);
    cout<<"inside main fnx value of c : "<<c<<endl;

    return 0;

}










