//Count Occurrences in Sorted Array

/*
find first occurane 
find last occurance
diff between first and last
*/

#include<iostream>
using namespace std;

int occurance(int arr[] , int n , int target){
    int start = 0 ; 
    int end = n-1;
    int count = 0 ;
    int first;
    int last ;

    //find first occurance

    // while(start <=end){
    //     int mid = start+(end-start)/2;
    //     if (arr[mid]<=target){
    //         first = mid;
    //         end = mid-1;
    //     }
    //     else {
    //         start = mid+1;
    //     }
    // }
        while(start<=end){
            int mid = start +(end-start)/2;
            if (arr[mid]=target){
                first = mid;
cout<<first<<endl;
                
            }
            
            else{
                start = mid+1;
            }
        }
        return 0;
}

int main (){
    int arr [] = {1,2,3,3,3,4,4,5};
    int n = sizeof arr / sizeof arr[0];
    int target = 4;
    occurance(arr, n , target); 
}