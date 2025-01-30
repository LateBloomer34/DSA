//Implement Lower Bound

#include<iostream>
using namespace std;

int lowerBound(int arr[] , int n  , int target){
    int start = 0 ; 
    int end = n-1 ; 
    int result = -1;

    while (start <= end){
        int mid = start+(end-start)/2;
        if (arr[mid] == target){
            result= mid;
            return result ;
        }

        else if (target<arr[mid]){
            end = mid -1;
            
            // cout<<endl<<arr[mid]<<endl; 
            result = mid;
        }
        else{
            start = mid +1;
            // result = mid;
        }
    }
    cout<<arr[result];

    return 0;
}

int main (){
    // int arr []  = {1,2,2,3,4};
    int arr [] = {1,3,4,5,6,7,8,11,12,14,15,16};
    int n = sizeof arr / sizeof arr[0];
    int target = 13;
    lowerBound(arr , n ,target);
}