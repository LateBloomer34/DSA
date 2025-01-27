#include<iostream>
using namespace std;

int bs (int arr[] , int n , int target){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if (arr[mid]==target){
                return mid;
        }
        else if (target<arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    return -1;
}

int main (){
    int arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int n = sizeof arr / sizeof arr[0];
    int target = 6;
    int result = bs(arr , n, target);
    if (result==-1){
        cout<<"element not present in array";
    }
    else{cout<<result;}
}