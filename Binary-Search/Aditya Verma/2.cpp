//prob 1   -  Find the index of 2 in given array
// arr[] = {2,3,4,5,6,7,8,9};

//  in case of binary search array must be sorted.

#include<iostream>
using namespace std;

int bs1(int arr[] , int n, int target ){
    int start = 0 ;
    int end = n-1;
   
    while (start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==target){
            cout<<mid;
            break;
        }
        else if (target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return 0 ;
}

int main (){
    int arr[] = {2,3,4,5,6,7,8,9};
    int n = sizeof arr / sizeof arr[0];
     int target = 3;
    bs1(arr, n, target );
}


