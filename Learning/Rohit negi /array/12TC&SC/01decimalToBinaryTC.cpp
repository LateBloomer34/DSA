// decimal the binary and find the complexity
#include<iostream>
using namespace std;

int binary (int num){
    int bi = 0;
    int position = 1 ;
    if (num ==0 ){
    return bi;       
    }
   
    while(num>0 ){
        int rem = num%2;// 0
        bi = bi+(rem*position);//0
        position = position*10;//10
        num = num/2;
    }
return bi;
}

int main (){
    int num = 11;
    cout<<binary(num);
}
// tc is O(logN) coz every time number beacame half - n/2 , n/4, n/8
// which makes TC logN