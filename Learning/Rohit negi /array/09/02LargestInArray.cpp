#include<iostream>
using namespace std; 

int largest (int arr[], int n ){
    int largest = 0 ; 
    for (int i = 0 ; i < n ; i++){
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<largest;
    return largest;
}

int main (){
    int arr[]  = {1,2,3,14,5,6,7};
    int n = sizeof arr / sizeof arr[0];
    largest(arr , n);
}