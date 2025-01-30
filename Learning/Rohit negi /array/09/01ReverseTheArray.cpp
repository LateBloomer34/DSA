// print the reverse of an array

#include<iostream>
using namespace std;
/*
int reverse (int arr[] , int n ){
    for(int i = n -1 ; i>=0 ; i--){
        cout<<arr[i]<<endl;
    }
    return 0;
}
*/

int reverse(int arr[] , int n){
    int start = 0 ;
    int end = n-1;
    while(start< end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i =0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

int main (){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof arr / sizeof arr[0];
    reverse(arr , n);
}