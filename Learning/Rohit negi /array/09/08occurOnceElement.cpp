#include<iostream>
using namespace std;

int ele(int arr[] , int n ){
    int el = 0;
    for (int i = 0 ; i < n ; i++){
        el = el^arr[i];
    }
    cout<<el;
    return 0;
}

int main (){
    int arr[]= {1,2,3,2,1,4,5,3,4};
    int n = sizeof arr / sizeof arr[0];
    ele(arr , n);
}