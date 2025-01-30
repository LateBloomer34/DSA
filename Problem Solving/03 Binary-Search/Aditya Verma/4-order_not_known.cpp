//binary search in - when order not known

#include<iostream>
using namespace std;
/*
int findIndex(int arr[] , int n , int target ){
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;
         if (target<arr[mid]){
            end = mid-1;
        }
        else if (target>arr[mid]){
            start= mid+1;
        }
        else {
            return mid; 
        }
    }
    return 0;
}
*/

//optimal method - 

int findIndex(int arr[] , int n , int target){
    int start  = 0; 
    int end = n-1; 
    while(start<=end){
        int mid = start+(end-start)/2;
        if (arr[mid]==target){
            return mid;
        }
        
        if (arr[end]>arr[start]){//asce
            if (target<arr[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else{//des
             if (target<arr[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
} return 0;
}

int main(){
    // int arr [] = {1,2,3,4,5,6};
    // int arr [] = {8,7,6,5,4,4,2,1};
    int arr[]  = {1,2,3,4,5,6,8};
    // int arr[] = {5,5, 5, 5, 5, 19 };
    // int arr[] = {5,5, 5, 5, 5 };
    int n = sizeof arr / sizeof arr[0];
    int target = 3;
    int res= findIndex(arr, n, target );
    if (res){
        cout<<res;
    }
    else{
        cout<<"not available";
    }
}