//Second Largest Element in an Array without sorting

#include<iostream>
using  namespace std;

int largest(int arr[] , int n){
    int large = INT_MIN;
    int sec = INT_MIN;
    for (int i = 0 ; i < n  ;i++){
        if (arr[i]>large){
            sec= large;
            large =arr[i];
        }
        else if (arr[i]>sec && sec<large){
            sec = arr[i];
        }
    }
    // cout<<large<<endl;

    return sec;
}

int main (){
    int arr[]={7,18,4,3,5,6,9,11,5};
    int n = sizeof arr / sizeof arr[0];
    int lar = largest(arr, n );
    cout<<lar;

    return 0;
}