
/*

Vector Syntax

1) vector<int> vec;

2) vector<int> vec = {1,2,3};

3) vector<int> vec(3,0)  => [0,0,0]



Vector functions
- size => length of th evector
- push_back  =>  adding new element to the back
- pop_back  => deleting the element from the back
- front => return the first value of the vector
- back => retrun the last value of the vector
- at => access the value at the particular index



# Static vs Dynamic Allocation

static -> during compile time memory allocated  (e.g array)
    - memory create in stack

dynamic -> during runtime memory allocated  (e.g vector)
    - memory create in heap


*/


#include <iostream>
#include <vector>

using namespace std;

int main(){

    cout<<"vector in c++"<<endl;

    // vector<int> vec;
    // cout<<vec[0]; // it will show error;

    // vector<int> vec(5,0);
    // cout<<"vec[0]: "<<vec[0]<<" and vec[5]: "<<vec[4]<<endl;
    
    // cout<<"for-each loop"<<endl;
    // for(int i : vec){ //for-each loop
    //     cout<<i<<endl;
    // }

    // vector<char> alpha = {'a','b','c','d'};

    // cout<<"size of the alpha vector: "<<alpha.size() <<endl;


    // for(char val : alpha){
    //     cout<< val <<endl;
    // }


    // vector<int> vec = {};

    // cout<<"size of the vec vector: "<<vec.size() <<endl;
    
    // vec.push_back(25);
    // vec.push_back(5);
    // vec.push_back(50);
    // vec.push_back(100);
    // vec.push_back(99);
    // vec.push_back(111);

    // cout<<"size of the vec vector after push: "<<vec.size() <<endl;
    
    // vec.pop_back();

    // cout<<"size of the vec vector after pop: "<<vec.size() <<endl;

    // cout<<"first value of the vector: "<<vec.front()<<endl;
    // cout<<"last value of the vector: "<<vec.back()<<endl;
    // cout<<"i value of the vector: "<<vec.at(1)<<endl;

    // for(int val : vec){
    //     cout<< val <<endl;
    // }


    // vector<int> vec;

    // vec.push_back(0);
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);

    // cout<<"size of the vector: "<< vec.size() <<endl;
    // cout<<"capacity of the vector: "<< vec.capacity() <<endl;


    // Question leetcode 136

    vector<int> vec = {4,1,2,1,2};

    int ans = 0;
    for(int i=0;i<vec.size();i++){
        ans = ans^vec[i];
    }

    cout<<"single unique number in the vector: "<< ans<<endl;
    




    return 0;
}