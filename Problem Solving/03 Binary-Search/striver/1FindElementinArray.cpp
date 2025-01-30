// Problem statement: You are given a sorted array of integers and a target, your task is to search for the target in the given array. Assume the given array does not contain any duplicate numbers.

// Let’s say the given array is = {3, 4, 6, 7, 9, 12, 16, 17} and target = 6.



#include<iostream>
using namespace std ;

int binarySearch(int arr[] , int n , int target){
    int start = 0 ; 
    int end = n-1; 
     
     while (start<=end){
        int mid = start +(end-start)/2;
        if (target == arr[mid]){
            return mid ; 
        }
        else if (target < arr[mid]){
            end = mid -1; 
        }
        else {
            start = mid +1 ; 
        }
     }

return -1;
}

int main (){
    int arr  [] = {3,4,6,7,9,12,16,17};
    int n  =  sizeof arr / sizeof arr[0];
    int target = 3;
    int result  = binarySearch(arr, n , target);
if (result!=-1){
    cout<<" present at "<< result;
}
else{
    cout<<"not available";
}
}