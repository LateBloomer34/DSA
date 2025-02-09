// peak index in mounatain array 


#include<iostream>
using namespace std;

int peakIndex(int arr[] , int n ){
    int start = 0 ;
    int end  = n-1;
    int result ;
    while (start<end) {
        int mid = start +(end-start)/2;
       if (arr[mid] <arr[mid+1]){
        start = mid+1;
       }
       else{
        end = mid;
       }
    }
    return end;
}

int main (){
    int arr [] = {0,2,1,0};
    int n = sizeof arr/sizeof arr[0];
    int result = peakIndex(arr , n);
    cout<<result;

}