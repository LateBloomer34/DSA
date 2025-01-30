//last occurance in shorted array


#include<iostream>
using namespace std;

int lastOccurance (int arr[] , int n , int target){
    int start = 0 ;
    int end = n-1;
    int ans ;

    while(start<=end){
        int mid = start+(end-start)/2;

        if (arr[mid]<=target){
            ans = mid;
            start = mid+1;
        }
        else{ 
            end = mid-1;
            }       
    }
    cout<<ans;
    return 0;
}

int main (){
    int arr[]  = {1,2,3,3,3,3,3,4,4,5};
    int n = sizeof arr/ sizeof arr[0];
    int target = 4;
    lastOccurance(arr, n , target);
}