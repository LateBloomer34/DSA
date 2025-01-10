// Find the number that appears once, and the other numbers twice


#include<iostream>
using namespace std ; 
 
 int apper(int arr[], int n){
    int sing =0;
    for (int i = 0 ; i < n ; i++){
        sing = sing^arr[i];
    }
    cout<<sing;

    return 0;
 }

int main (){
    int arr[] = {1,2,2};
    int n = sizeof arr / sizeof arr[0];
    apper(arr , n);
}