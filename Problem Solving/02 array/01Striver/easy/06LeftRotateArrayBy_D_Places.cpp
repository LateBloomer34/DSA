//rotate array by D places

#include<iostream>
using namespace std;

int rotate(int arr [], int n , int k){
    vector <int> temp{k}; 
while(n==0 ){ //if number of element in array is 0, return 
    return 0;
}
while(n<k){ //if number of element in array is less than rotate array, return;
    return 0;
}
//store k element in temp array
for (int i = 0 ; i <k ; i++){
    temp[i]=arr[i];
}
// left shift k element by k place 
for (int i = k ; i < n ; i++){
    arr[i-k] = arr[i];
}

for (int i = k ; i < n ; i++){
    arr[i]= temp[i-k];
}




for(int i = 0 ; i <n ; i++){
    cout<<arr[i];
    // cout<<temp[i]<<endl;
}

return 0;
}

int main (){
    int arr[]= {1,2,3,4,5,6,7};
    int n = sizeof arr / sizeof arr[0];
    int k = 5;
    rotate( arr, n , k);
}