//array is the collection of element which are same in datatype. 

// array element are store in consecutive memory address



#include<iostream>
using namespace std;

/*
int main (){

    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[3]<<"\n";

    arr[3]= arr[3]+10;
    cout<<arr[3]<<endl;

    for (int i = 0 ; i < sizeof arr / sizeof arr[0]; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
*/

// to create array of character

int main(){

char arr[5] = {'a','b','c','d','f'};

for (int i = 0 ; i < sizeof arr / sizeof arr[0] ; i++){
    cout<< i <<" "<<arr[i]<<endl;
}

return 0;
}
