// second largest element in an array  without sorting


#include<iostream>
using namespace std;

int secondLar(int arr[] , int n){

    int largest = INT_MIN;
    int sec = INT_MIN;

for (int i =0 ; i < n ; i++){
    if (arr[i]>largest){
        sec= largest;
        largest = arr[i];  
    }
  else if(arr[i]>sec && arr[i]!=largest){ //else if(arr[i]>sec && arr[i]<largest)-- we can also write
        sec = arr[i];
       } 
}
     cout<<"lar"<<largest<<endl;
    cout<<"Slar"<<sec<<endl;       

return sec;
}

int main (){
    int arr[] = {10,5,10};
    int n = sizeof arr / sizeof arr[0];
    secondLar(arr ,n);
    // cout<<secondLar(arr ,n);
}
