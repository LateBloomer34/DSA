#include<iostream>
using namespace std;

int rotate(int arr[] , int n , int d){
        vector<int>temp(d);

        d = d%n;
        cout<<d<<endl;

        // store in temprary
        for (int i = 0 ; i < d ; i ++){
            temp[i]=arr[i];
        }
        //rotate by d places
        for (int i = d ; i < n ; i++){
            arr[i-d]=arr[i];
        }
        // move temp array element in orignal array

        for(int i = n-d ; i < n ; i++ ){
            arr[i] = temp[i -(n-d)];
        }




        for (int i = 0 ; i <n ; i++){
            cout<<arr[i];
        }

    return 0;
}

int main (){
    int arr[]= {1,2,3,4,5,6,7};
    int n = sizeof arr/ sizeof arr[0];
    int d = 1;
    rotate (arr,n,d);
}