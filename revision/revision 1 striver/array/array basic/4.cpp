// remove duplicate from sorted array

// methods - 1- using map function
// 2 - using 2 pointer

#include<iostream>
using namespace std; 

int remDupli(int arr[] , int n ){
    int j = 0 ; 
    for (int i = 0 ; i < n ; i++){
        if (arr[i]== arr[j]){
        swap(arr[i], arr[j]);        
        }
        else{        
            j++;
            swap(arr[i], arr[j]);
        }       
    }

    //loop for print unique element
    for(int i = 0 ; i <=j ;i++){
        cout<<arr[i];
    }
 return 0;
}

int main(){
    int arr[] = {1,1,1,2,2,3,3,3,3,4,4};
    int n = sizeof arr / sizeof arr[0];

    remDupli(arr, n);
}