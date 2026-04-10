/*

Kadane's Algorithm

Maximum subarray sum

*/

// Brute force approach 

#include<iostream>
#include<vector>

using namespace std;

int main(){


    int n = 5;
    int arr[5] = {1,2,3,4,5};

    //method : 1   time O(n^3)

    // for(int st=0;st<n;st++){
    //     for(int end=st;end<n;end++){
    //         for(int i=st;i<=end;i++){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }


    // method : 2  O(n^2)

    // int maxSum = INT8_MIN;

    // for(int st=0;st<n;st++){
    //     int currSum = 0;
    //     for(int end=st;end<n;end++){
    //         currSum = currSum + arr[end];
    //         maxSum = max(currSum,maxSum);
    //     }
    // }

    // cout<<"maximum subarray sum: "<<maxSum;


    // method : 3  kadane algorithm

    int currSum = 0, maxSum = INT8_MIN;

    for(int i = 0; i<n;i++){
        currSum = currSum + arr[i];
        maxSum = max(maxSum,currSum);

        if(currSum<0){
            currSum = 0;
        }
    }

    cout<<"kadane's algorithm result: "<<maxSum<<endl;






    return 0;
}




