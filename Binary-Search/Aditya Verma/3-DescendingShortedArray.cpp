// find index of element in descending array



#include<iostream>
using namespace std;

int bs1(int arr[] , int n , int target){
    int start = 0 ;
    int end = n-1;
    
    while(start<=end){
    int mid = start + (end-start)/2;
    
    if (arr[mid]==target){
        return mid;
    }
    else if (arr[mid]>target){
        start = mid+1;
    }
    else{
        end = mid-1;
    }
    }
    return 0 ;
}

int main (){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    // int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof arr / sizeof arr[0];
    int target = 6;
   cout<< bs1(arr, n, target );
}


