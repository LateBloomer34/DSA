//find lowerbound in array


#include<iostream>
using namespace std;

int lb(int arr[] , int n , int target){
    int start = 0 ; 
    int end = n-1;
    int ans=n;
    while (start<=end){
        int mid = start+(end-start)/2;
        if (arr[mid]>=target){
           ans = mid;
          end = mid-1;
        }
        else {
                start = mid+1;
        }
    }
    return ans;

}

int main (){
    //  int arr[] = {1,2,2,3};
    int arr []  = {1,2,3,4,5,6,7,7,8,9};
     int n = sizeof arr/ sizeof arr[0];
     int target = 7;
     int result = lb(arr, n, target);
     cout<<result;
}