// largest element in array 

#include<iostream>
using namespace std;


int largest (int arr[] , int n ){
    int large = arr[0];
    for (int i = 0 ; i < n; i++){
        if (arr[i]>large){
            large = arr[i];
        }
    }

    return large;
}

int main (){
    int arr[]={7,18,4,3,5,6,9,11,5};
    int n = sizeof arr / sizeof arr[0];
    int lar = largest(arr, n );
    cout<<lar;

    return 0;
}