#include<iostream>
using namespace std;

/*
int duplicate(int arr[] , int n ){
    for (int i = 0 ; i <n-1 ; i++){
        for (int j = i+1 ; j < n ;j++){
            if (arr[i] ==arr[j]){
                cout<< arr[i];
            }
        }
    }
    
    return 0;
}
*/

int duplicate(int arr[] , int n ){
    int desti[5]={0};
    for (int i = 0 ; i< n ; i++){
        int index = arr[i];
        desti[index]++;
    }
    for (int i = 0 ; i < n ; i++){
        if (desti[i]>1){
            cout<<i<< " ";
        }
    }

    return -1;
}
int main (){
    int arr[]={2,3,1,2,3};
    int n = sizeof arr / sizeof arr[0];
    int k = duplicate(arr , n);
}