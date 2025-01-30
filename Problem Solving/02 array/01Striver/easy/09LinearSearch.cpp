#include<iostream>
using namespace std;

int linearS(int arr[], int n , int k){
for (int i = 0 ; i  < n ; i++){
    if (arr[i]==k){
        cout<<"available at index"<< i ;
        return 0; 
    }
}
cout<<"not avavilable";
return 0;
}

int main (){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof arr / sizeof arr[0];
    int k = 52;
    int l = linearS(arr , n, k);
    
}