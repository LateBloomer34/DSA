// first and last occurrence of an element

#include<iostream>
using namespace std;

pair<int , int> occurrence(int arr[] , int n , int target){
    int start = 0 ; 
    int end = n-1;
   int startIndex = -1;
   int endIndex = -1;

   while (start<=end){
    int mid = start +(end -start)/2;

    if (arr[mid]==target){
        startIndex = mid ; 
        end = mid-1; 
    }
    else if (target <arr[mid]){
        end = mid-1;
    }
    else {
        start = mid+1;
    }
   }
// cout<<"start index is "<<startIndex<<endl;

start = 0;
end = n-1;
while (start <=end){
    int mid = start +(end-start)/2;

    if (target == arr[mid]){
        endIndex = mid; 
        start = mid+1;
    }
    else if (target < arr[mid]){
        end  = mid-1;
    }
    else{
       start =  mid+1;
    }
}
// cout<<"end index is "<<endIndex;
    return {startIndex, endIndex};
}

int main (){
    int arr[] = {1,2,3,4,4,4,4,4,4,5, 6,7};
    int n = sizeof arr / sizeof arr[0];
    int target = 4;
    pair<int , int >result  = occurrence(arr , n , target);
   cout<<"starting index is "<<result.first<<endl;
   cout<<"end index of target is "<<result.second;
}
