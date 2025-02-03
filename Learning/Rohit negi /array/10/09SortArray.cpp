#include<iostream>
using namespace std;

int sort(int arr[] , int n ){
int zero = 0;
int one = 0;
int two = 0;

for (int i = 0 ; i < n ; i++){
    if (arr[i]==0){
        zero++;
    }
    else if (arr[i]==1){
        one++;
    }
    else{two++;}
}
// cout<<zero <<" "<<one<<" "<<two<<" ";

for(int i=0; i<zero; i++){
    cout<< 0<<" ";
}
for (int i = zero ; i < zero+one ; i++ ){
    cout<<1<<" ";
}
for (int i = zero+one ; i<n ;i++){
    cout<<2 <<" "; 
}


    return 0;
}

int main (){
    int arr []  = {2,1,2,0,1};{
        int n = sizeof arr / sizeof arr[0];
        sort(arr , n);
    }
}