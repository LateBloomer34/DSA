// find target 

#include<iostream>
using namespace std ;

int find (int arr[] , int n , int target){
    int start = 0 ; 
    int end = n-1 ; 


    while (start<=end){
        int mid = start+(end-start)/2;

        if (arr[mid]==target){
            return mid;
        }
        else if (target <arr[mid]){
            end = mid -1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main (){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof arr / sizeof arr[0];
    int target = 5;
    cout<<find (arr, n, target);
}