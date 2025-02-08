
/*
Find the smallest missing element from a sorted array
Given a sorted array of non-negative distinct integers, find the smallest missing non-negative element in it.

For example,

Input:  nums[] = [0, 1, 2, 6, 9, 11, 15]
Output: The smallest missing element is 3  

Input:  nums[] = [1, 2, 3, 4, 6, 9, 11, 15]
Output: The smallest missing element is 0  

Input:  nums[] = [0, 1, 2, 3, 4, 5, 6]
Output: The smallest missing element is 7
*/

#include<iostream>
using namespace std;

int missing(int arr[] , int n){
int start = 0 ;
int end = n-1 ; 
int target;

while(start <=end){
    int mid = start +(end -start)/2;
        if (arr[mid]==mid){
            start= mid+1;
            // target = arr[start]+1;
        }
        else if (arr[mid]>mid){
            end = mid-1;
        
        }
        else{
            start = mid+1;
        }
}

    return start;
}

int main(){
    int arr []= {0, 1, 2, 3, 4, 5, 6};
    int n = sizeof arr / sizeof arr[0];
    cout<<missing(arr, n);
}