#include<iostream>
using namespace std;

int print(vector<int>arr ){
    int n = arr.size();

    for(int i = 0 ; i <5 ; i++){
    for (int i = 0 ;i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

    return 0;
}

int main (){
    vector<int>arr = {1,2,3,4,5};
    print(arr);
}