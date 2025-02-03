// sort the array


#include<iostream>
using namespace std;

void sort(int arr[] , int n ){
    for (int i = 0 ; i <n-1 ;i++){
        for (int j = i+1 ;  j < n; j++)
        if (arr[j]<arr[i]){
            swap(arr[i], arr[j]);
        }
    }

    for (int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }


    
}

int main (){
    int arr [] = {2,1,0,1,2};
    int n = sizeof arr / sizeof arr[0];
    sort(arr , n);
}

