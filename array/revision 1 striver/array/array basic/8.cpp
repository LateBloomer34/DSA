// linear search;


#include<iostream>
using namespace std;

int linSearch(int arr[] , int n, int target){
    for (int i = 0 ; i < n ; i++){
        if (arr[i]==target){
            return i;
        }
    }

    return 0;
}

int main (){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof arr / sizeof arr[0];
    int target = 4;
    int res = linSearch(arr, n, target );
    cout<<"target present at index "<<res;
}