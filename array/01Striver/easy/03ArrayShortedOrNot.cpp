#include<iostream>
using namespace std;

bool sortCheck(int arr[] , int n){
   int count = 0 ; 
   for (int i = 0 ; i < n ; i++){
    if (arr[i]>arr[(i+1)%n]){
        count++;
    }
   }
   return count<=1;
}

int main (){
    int arr[] = {4,5,6,2,3};
    int n = sizeof arr  / sizeof arr[0];
    sortCheck(arr, n);
    if(sortCheck(arr, n)){
        cout<<"shorted";
    }
    else{cout<<"not";}
}