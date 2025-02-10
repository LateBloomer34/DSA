// find index of target in sorted or in rotate array


#include<iostream>
using namespace std ;

int location (int arr[] , int n , int target){
    int start = 0 ;
    int end = n-1;
    int result = -1;

while(start <=end){
    int mid = start +(end-start)/2;
    if (target == arr[mid]){
        return mid;
    }
    if (arr[start] <= arr[mid]) { 
            if (target >= arr[start] && target < arr[mid]) {
                end = mid - 1; 
            } 
            else {
                start = mid + 1; 
            }
        } 
    else { // Right half is sorted
            if (target > arr[mid] && target <= arr[end]) {
                start = mid + 1; 
            } else {
                end = mid - 1;
            }
        }
}
    return result;
}

int main (){
    int arr [] = {5,6,7,8,9,10,1,2,3};   ///10 1 2 3  4  5 6
    int n = sizeof arr / sizeof arr[0];
    int target = 0;
    cout<<location (arr , n , target );
}