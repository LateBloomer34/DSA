//Sort an array of 0s, 1s and 2s

/*
Problem Statement: Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)

Examples
Input:
 nums = [2,0,2,1,1,0]
Output
: [0,0,1,1,2,2]

Input:
 nums = [2,0,1]
Output:
 [0,1,2]

Input:
 nums = [0]
Output:
 [0]
*/



#include<iostream>
using namespace std;

int sort(int arr[] , int n){
    int start = 0;
    int end = n-1;
    int mid = 0;

    while(mid<end){
        if (arr[mid]==2){
            swap(arr[mid], arr[end]);
            end--;
        }
        else if (arr[mid]==0){
            swap(arr[mid], arr[start]);
            mid++;
            start++;
        }
        else{
            swap(arr[mid],arr[end]);
            mid++;
        }
    }
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i];
    }

    return 0;
}

int main(){
    int arr[] = {2,0,2,1,1,0};
    int n = sizeof arr / sizeof arr[0];
    sort(arr, n );
}