// Sort an array of 0s, 1s and 2s

#include<iostream>
using namespace std;

int sort012(int arr[] , int n){
    int start = 0 ;
    int mid = 0 ; 
    int end = n-1; 

    while(mid<end){
        if (arr[mid] ==2){
            swap(arr[mid], arr[end]);
            end--;
        }
        else if (arr[mid]==0){
            swap(arr[start], arr[mid]);
            mid++;
            start++;
        }
        else{
            mid++;
        }
    }
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i];
    }
    return 0;
}

int main (){
    int arr[] = {2,0,2,0,1,1,0};
    int n = sizeof arr / sizeof arr[0];
    sort012(arr,n);
}