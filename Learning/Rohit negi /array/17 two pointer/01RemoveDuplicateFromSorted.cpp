#include<iostream>
using namespace std;

int removeDup(int arr[] , int n){
    int j = 0 ;
    for (int i = 0 ; i < n ;i++){
        if (arr[i]!= arr[j]){
            j++;
            swap(arr[i], arr[j]);
        }
    }
    for(int i = 0 ; i <=j; i++){
        cout<<arr[i];
    }
    return 0;
}

int main (){
    int arr[] = {2,2,2,2,2,2};
    // int arr[] = {1,2,2,3,4,4,5,5};
    int n = sizeof arr / sizeof arr[0];
    removeDup(arr , n);

}