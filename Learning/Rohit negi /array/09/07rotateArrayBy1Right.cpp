#include<iostream>
using namespace std;

int rotate(int arr [] , int n ){
    int temp = arr[n-1];
        for (int i = n-2 ; i>=0 ; i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        for (int i = 0 ; i < n ; i++){
            cout<<arr[i];
        }
        return 0;
}

int main (){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof arr / sizeof arr[0];
    rotate(arr , n);
}