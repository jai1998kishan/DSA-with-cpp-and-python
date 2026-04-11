
/*

Question:  Majority  Element
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Brute force function
int bruteForce(vector<int> nums, int n){
    //Brute force
    for(int val : nums){
        int freq = 0;

        for(int el : nums){
            if(el==val){
                freq++;
            }
        }

        if(freq> n/2){
            return val;
        }
    }
    return -1;
}


//better then brute force Optimize
//step 1 - sort the array  O(nlogn)
//step 2 - count the freq O(n)
int optimizeMajority(vector<int> nums, int n){

    sort(nums.begin(),nums.end());

    int freq = 1;
    int ans = nums[0];

    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }

        if(freq>n/2){
            return ans;
        }
    }


    return -1;

}



//Moore's Algorithms
int mooreVotingAlgorithms(vector<int> nums, int n){

    int freq = 0, ans=0;
    for(int i=0;i<n;i++){
        if(freq==0){
            ans=nums[i];
           
        }

        if(ans==nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    int count = 0;
    for(int val : nums){
        if(val==ans){
            count++;
        }
    }
    if(count>n/2) ans;
    else -1;


    return ans;
}

int main(){

    vector<int> nums = {1,2,2,1,2};
    int n = nums.size();

    cout<<"brute: "<< bruteForce(nums,n)<<endl;

    cout<<"optimize: "<<optimizeMajority(nums,n)<<endl;

    cout<<"mooreVoting: "<<mooreVotingAlgorithms(nums,n)<<endl;

    return 0;
}