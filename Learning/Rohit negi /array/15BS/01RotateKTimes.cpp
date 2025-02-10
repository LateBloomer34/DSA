//find the array rotate by k times

#include<iostream>
using namespace std;

int rotate(int arr[] , int n){
  /*  int start = 0 ;
    int end = n-1;
    int result = 0 ;

    while (start <=end){
        int mid = start +(end - start)/2;
        if (arr[mid] == mid+1){
            start = mid+1;
        }else if(arr[mid]<mid+1){
                end = mid-1;
            }
            else{
                start = mid+1;
                result = start;
            }
    }
    return result;
    */

//    but the best way the solve using pivot element


int start = 0 ;
int end = n-1 ; 
int pivot = arr[start];
int result  = 0 ;


while(start <=end){
    int mid = start+(end-start)/2;
    if (arr[mid]<=pivot){
        result = mid; 
        end = mid-1;
    }
    else{
        start = mid+1;
    }
}
    return result;
}

int main (){
    // arr[] = 5, 1,2 3 4
    // int arr []={1,2,3,4,5,6};
    int arr []={3,4,5,1,2};
    int n = sizeof arr / sizeof arr[0];
    cout<<rotate(arr , n);
}