//missing element

#include<iostream>
using namespace std;

int missing (int arr[] , int n ){

    int org= 0;
    int tot = 0;

    // using sum of elements

    /*
    for (int i = 0 ; i < n ; i++){
        org = org+arr[i];
    }

    for (int i = 1 ; i <= 5 ; i++){
        tot = tot+i;
    }
     int missin = tot-org;
    cout<<missin;

    */

   
   for (int i = 0 ; i < n ; i++){
        org = org^arr[i];
    }

    for (int i = 1 ; i <= 5 ; i++){
        tot = tot^i;
    }
    int missin = tot^org;
    cout<<missin;

    return 0;
}

int main (){
    int arr[] = {1,2,4,5};
    int n = sizeof arr/ sizeof arr[0];
    missing(arr , n);
}