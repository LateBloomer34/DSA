// largest element of an array

#include<iostream>
using namespace std;

int largest(int arr[], int size){
    int greatest = INT_MIN;
    for (int i = 0 ; i < size ; i++){
        if (arr[i]>greatest){
            greatest = arr[i];
        }
    }
    return greatest;
}

int main (){
    int arr [] = {12,3,4,8,5,6};
    int size = sizeof arr / sizeof arr[0];
    largest (arr, size);
   cout<< largest (arr, size);
}