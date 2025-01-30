#include<iostream>
#include<climits>
using namespace std;

int rev (int arr[] , int n ){
    int min = INT_MAX; 
    for(int i = 0 ; i < n ; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    cout<<min ;
    return 0 ;
}

int main (){
    int arr [] = {1,2,3,4,5,1,10,6,7};
    int n = sizeof arr / sizeof arr[0];
    rev(arr , n );
}