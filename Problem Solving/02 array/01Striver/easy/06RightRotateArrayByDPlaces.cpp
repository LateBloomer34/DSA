// #include<iostream>
// using namespace std;

// int rotate(int arr[], int n , int k){
//     vector<int > temp{k};
//     while (n==0){
//         return 0;
//     }
//     while (n<k){
//         return 0;
//     }
// // store k right element of array in temp array
//     for (int i = n-k; i <n; i++ ){
//         temp[i-(n-k)]=arr[i];
//     }

// // rotate the element of orignal array by k place 

// for (int i = n-k ; i >=0 ; i--){
//     arr[k+(i-1)+1]=arr[i];
// }
// // move the temp array elent in origanl array in start position


// for (int i = 0 ; i <k ; i++){
//     arr[i]=temp[i];
// }

// for (int i = 0 ; i <n ; i++){
//     cout<<arr[i];
// }
// return 0;
// }

// int main(){
//     int arr[] ={1,2,3,4,5,6,7};
//     int n = sizeof arr/ sizeof arr[0];
//     int k = 4;
//     rotate(arr, n ,k);
// }





// i/p - 1,2,3,4,5,6,7,8,9
// o/p - 6,7,8,9,1,2,3,4,5



#include<iostream>
using namespace std;

int rotate(int nums[] , int k , int n){
    vector <int > temp(k);
    k = k%n ; // 
//store k element in temp folder
    for (int i = n-k; i<n ; i++){
            temp[i - (n-k)]=nums[i];
    }
// rotate elment
    for (int i =n-k-1 ; i>=0 ;i--){
        nums[i+k]=nums[i];
    }
    
    for (int i =0 ; i < k ;i++){
        nums[i]=temp[i];
    }
cout<<"temp";
for (int i = 0 ; i < k ; i++){
    cout<<temp[i];
}
cout<<endl;
cout<<"org";
for (int i = 0 ; i < n ; i++){
    cout<<nums[i];
}
return 0;
}

int main (){
    int nums[] = {1,2,3,4,5,6,7};
    int n = sizeof nums/ sizeof nums[0];
    int k = 4;
    rotate(nums , k , n);
}