// find the left and rightmost index of target

#include<iostream>
using namespace std;
// #include<pair>

pair<int , int> tar(int arr[] , int n, int target ){
    int start = 0 ;
    int end = n-1 ; 
    int left ;
    int right;


// find the left most
    while (start <=end){
        int mid = start +(end-start)/2;
    if (arr[mid]==target){
        left = mid;
        end = mid-1;
    }
    else if (target<arr[mid]){
        end = mid-1;
    }
    else{start = mid+1;}
    }
// cout<<left<<" "<<endl;
start = 0 ;
end = n-1;


while (start<=end){
    int mid = start+(end-start)/2;
    if (arr[mid]==target){
        right = mid;
        start = mid+1;
    }
    else if (target<arr[mid]){
        end = mid-1;
    }
    else{start = mid+1;}
}
// cout<<right <<" ";
return {left, right};
}

int main (){
    int arr[] = {1,2,3,5,5,5,5,5,5,6,7};
    int n = sizeof arr / sizeof arr[0];
    int target = 5;
pair<int , int>result = tar(arr, n , target);
    cout<<result.first;
    cout<<result.second;
}