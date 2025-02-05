#include<iostream>
using namespace std;

void rotate(vector<int >arr  , int pos){
    int n = arr.size();
    int temp = arr[n-1];
    for (int i = n-pos ; i >=0; i--){
        arr[i+pos]=arr[i];
    }
    arr[0]= temp;
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i];
    }
}

int main (){
    vector<int >arr = {1,2,3,4,5};
    int pos = 1;
    rotate(arr, pos);
}

// tc - array runs from 0 to n - tc is O(N)