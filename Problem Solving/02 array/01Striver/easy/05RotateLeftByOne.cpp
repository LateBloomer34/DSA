// Left Rotate the Array by One

#include<iostream>
using namespace std;

int Lrotate(int arr[] , int n ){
    int temp = arr[0];
    for (int i = 1; i < n ; i++){
         arr[i]=arr[i+1];
         }
    arr[n-1]=temp;

   
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof arr / sizeof arr[0];
    Lrotate(arr, n);

    for(int i = 0 ; i < n ;i++){
        cout<<arr[i];
    }
}