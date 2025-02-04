///selection sort - select element and compare it with all element;


#include<iostream>
using namespace std;

int SS(int arr[] , int n){
    for (int i = 0 ; i<n ;i++){
        for (int j = i ; j <n ; j++){
            if (arr[j]<arr[i]){
                int temp  = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                // swap(arr[i], arr[j]);
            }
        }
    }

for (int i = 0 ; i < n ;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}

int main (){
    int arr [] = {3,6,7,-1,9,2,0};
    int n = sizeof arr/ sizeof arr[0];
    SS(arr , n );
}