// Left Rotate an array by one place

#include<iostream>
using namespace std;

int lRotate(int arr[] , int n , int d){
    vector<int>temp(d);
    for (int i = 0  ;i<d ; i++){
        temp[i]=arr[i];
    // cout<<temp[i];
    }

    for (int i = d ; i < n ; i++){
        arr[i-d] = arr[i];
    }
    for (int i = n-d; i<n ; i++){
        arr[i] = temp[i -(n-d)];
    }

    for (int i = 0 ; i <n ; i++){
        cout<<arr[i];
    }

return 0;
}

int main (){
    int arr[] = {1,2,3,4,5};
    int n = sizeof arr / sizeof arr[0];
    int d  =4 ;
    lRotate(arr , n , d);    

}