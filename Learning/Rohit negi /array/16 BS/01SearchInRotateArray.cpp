#include<iostream>
using namespace std;

int search (int arr[] , int n , int target){
    int start = 0 ;
    int end = n-1 ; 
    while (start <= end  ){
        int mid = start +(end -start)/2;
        if (arr[mid]==target){
            return mid;
        }
// in sorted roate array , one side must be sorted , either left side or either right side;
// check the  conditio for both sort side - firsr if left side sorted or if right side soretd


// if lest side sorted
else if (arr[start]<=arr[mid]){
        if (target >=arr[start] && target <arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }

}

// if right side sorted
else{
    if (target >arr[mid]&& target <=arr[end]){
        start = mid+1;
    }
    else{
        end = mid-1;
    }
}
    }
return -1;  //return -1 if target not available inside the array
}

int main(){
    int arr [] = {5,6,7,8,10,1,2,3};
    int n = sizeof arr / sizeof arr[0];
    int target = 3;
    cout<<search (arr , n , target);
}