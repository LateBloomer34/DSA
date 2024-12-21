//  largest element in an array 


#include<iostream>
using namespace std;

int lar(int arr[] , int n){
    int heighest  = INT_MIN;
    for (int i = 0 ; i < n ; i ++){
        if (arr[i]>heighest){
            heighest = arr[i];
        }
    }
return heighest;

}

int main (){
    int arr[] = {2,4,6,15,8,7};
    int n = sizeof arr / sizeof arr[0];
    lar(arr , n);
    cout<<lar(arr , n);
}
