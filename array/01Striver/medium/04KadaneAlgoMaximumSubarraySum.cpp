/* Kadane's Algorithm : Maximum Subarray Sum in an Array

Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.

Examples
Example 1:
Input:
 arr = [-2,1,-3,4,-1,2,1,-5,4] 

Output:
 6 

Explanation:
 [4,-1,2,1] has the largest sum = 6. 

Examples 2:
Input:
 arr = [1] 

Output:
 1 

Explanation:
 Array has only one element and which is giving positive sum of 1. 

*/


#include<iostream>
using namespace std;
#include<bits/stdc++.h>


//brute approach

/*
int MaxSubarrSum(int arr[] , int n){
  
    int maxsum = INT_MIN ;
    for (int i =0 ; i < n-1 ; i++){
        int sum = 0 ;
        for (int j = i ; j<n ; j++){
            sum = sum +arr[j];
            if (sum >maxsum){
                maxsum = sum;
            }
        }
    }
    cout<<maxsum;
    return 0;
}

*/


//optimal approach -  Kadane's algo

int MaxSubarrSum(int arr[] , int n){
vector<int>brr;
int maxsum = arr[0] ;
int sum =arr[0] ;
    for (int i = 1 ; i < n ;i++){
        sum = sum +arr[i];
        if (maxsum <sum){
            maxsum = sum;
            brr.push_back(arr[i]);
        }
        // maxsum = max(sum, maxsum);
        
        if(sum<0){
            sum=0;
        //   brr.clear(); 
        }
        
       
    }
    cout<<maxsum<<" "<<endl;
    for(int i = 0 ; i < brr.size(); i++){
    cout<<brr[i]<<" ";
} 
    return 0;
}

int main (){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof arr / sizeof arr[0];
    MaxSubarrSum(arr , n);
}