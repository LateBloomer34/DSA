// missing element from an array

#include<iostream>
using namespace std;

int missing(vector<int >arr , int N){
    int n = arr.size();
    
    int eleSum = 0;
    for (int i =0 ; i < n ; i++){
        eleSum = eleSum^arr[i];
    }

    int totSum = 0;
    for (int i = 1 ; i<=N ;i++){
        totSum  = totSum^i;
    }
    
    int res = eleSum^totSum;

    return res ; 
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,9,10};
    int N = 10;
    int k = missing (arr , N);
    cout<<k;
}