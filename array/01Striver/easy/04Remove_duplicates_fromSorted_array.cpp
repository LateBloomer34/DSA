#include<iostream>
using namespace std;

int remDup(int arr[] , int n){
int j = 0 ;
for (int i = 0 ; i < n ; i++){
    if (arr[i]!=arr[j]){
        j++;
        swap(arr[i], arr[j]);
    }
}
 for(int i = 0; i < j+1 ;i++){
        cout<<arr[i];
    }
return 0;
}

int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof arr / sizeof arr[0];
    remDup(arr, n );
   
}