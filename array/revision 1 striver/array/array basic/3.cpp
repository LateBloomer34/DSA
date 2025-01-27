//Check if the array is sorted

#include<iostream>
using namespace std;

bool sort(int arr[] , int n){
    for(int i = 0 ; i < n-1 ; i++){
        if (arr[i]>arr[i+1]){
            return true;
        }
        
    }
    return false;
}

int main(){
int arr[] = {1,2,3,4,5,6,9,8}; 
int n = sizeof arr/ sizeof arr[0];
int sor  = sort(arr , n);
if (sor){
    cout<<"array is not sorted";
}
else{
    cout<<" sorted";
    }
    return 0;
}