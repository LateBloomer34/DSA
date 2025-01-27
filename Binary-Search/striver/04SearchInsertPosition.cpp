//search insert position

#include<iostream>
using namespace std;


int ip (int arr[] , int n , int target){
    int start = 0 ; 
    int end = n-1 ; 
    int ans = n;


    while (start <= end){
        int mid = start +(end-start)/2;

        if (target<=arr[mid]){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main (){
    int arr [] = {1,2,4,7};
    int n = sizeof arr / sizeof arr[0];
    int target  = 2;
    int k = ip(arr , n , target);
    cout<<k;
}