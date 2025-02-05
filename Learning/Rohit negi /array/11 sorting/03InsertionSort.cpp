// insertion sort- chose a element and comare it with every 

#include<iostream>
using namespace std;

void IS(vector<int>arr ){
    int n = arr.size();

    for (int i = 0 ; i < n; i++){
        int j = i ;

        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }

for (int i =0 ; i < n; i++){
    cout<<arr[i]<<" ";
}

}

int main (){
    vector<int>arr = {3,6,7,-1,9,2,0};
    IS(arr);
}