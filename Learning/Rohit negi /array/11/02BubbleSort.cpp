// bubble sort  -  compare every element with their next element 


#include<iostream>
using namespace std;

void BS(int arr[] , int n){
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j< n-1 ;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }

}

int main (){
    int arr [] = {3,6,7,-1,9,2,0};
    int n = sizeof arr/ sizeof arr[0];
    BS(arr , n );
}