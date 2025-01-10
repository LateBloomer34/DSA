//move zero to end


#include<iostream>
using namespace std;

int moveZero(int arr[] , int n){
    int j = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main (){
    int arr[] = {1,2,0,1,0,4,0};
    int n = sizeof arr / sizeof arr[0];
    moveZero (arr, n );
}