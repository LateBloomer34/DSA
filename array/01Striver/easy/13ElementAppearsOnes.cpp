// Example 1:
// Input Format:
//  arr[] = {2,2,1}
// Result:
//  1
// Explanation:
//  In this array, only the element 1 appear once and so it is the answer.

// Example 2:
// Input Format:
//  arr[] = {4,1,2,1,2}
// Result:
//  4
// Explanation:
//  In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.


#include<iostream>
using namespace std ;

int ones(int arr[], int n){
    int unq = 0;
    for (int i = 0 ; i <n ; i++){
        unq  = unq^arr[i];
    }
    cout<< unq;
    return  0;
}

int main (){
    int arr [] ={2,2,1};
    int n = sizeof arr / sizeof arr[0];
    ones(arr , n);
}