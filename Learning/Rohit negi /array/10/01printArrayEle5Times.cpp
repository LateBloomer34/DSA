#include<iostream>
using namespace std;

int print(vector<int>arr ){
    int n = arr.size();

    for(int i = 0 ; i <5 ; i++){
    for (int j = 0 ;j < n ; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    }

    return 0;
}

int main (){
    vector<int>arr = {1,2,3,4,5};
    print(arr);
}