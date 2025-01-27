// find upper bound in an array


#include<iostream>
using namespace std;

int upperBound(int arr[] , int n ,  int target ){
    int start = 0 ;
    int end = n-1;
    // int result = -1;
    while (start<=end){
        int mid = start+(end-start)/2;

        if (target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
return start;
}

int main (){
    // int arr[] = {3,5,8,9,15,19};
    int arr[] = {1,4,7,8,10};
    // int arr[] = {1,2,2,3};
    int n = sizeof arr / sizeof arr[0];
    // int target =  9 ;
    // int result = 4;
    int target = 7;
    int k = upperBound(arr , n, target); 
    cout<<k;
}