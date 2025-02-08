#include<iostream>
using namespace std;

int insert (int arr[] , int target , int n ){
    int start = 0 ;
    int end = n-1 ; 
    int result ;

    while (start<=end){
        int mid = start +(end -start)/2;
        if (arr[mid]==target){
            result = mid;
            return result;
        }
        else if (target<arr[mid]){
            
            end = mid-1;
        }
        else{
            start = mid+1;
            result = start;
        }
    }
    return result ;
}

int main (){
    int arr[] = {1,3,5,6};
    int target = 5;
    int n = sizeof arr / sizeof arr[0];
    cout<<insert(arr , target , n);
}