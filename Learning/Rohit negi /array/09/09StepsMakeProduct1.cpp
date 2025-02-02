// stes require to make product equals to one


#include<iostream>
using namespace std;

int steps(vector <int>arr){
    int n = arr.size();
    int steps = 0;
    int mul = 1;
    int zcount = 0;
    for(int i = 0 ; i < n ; i++){
        if (arr[i]>=1)
        steps = steps+(arr[i]-1);
        else if (arr[i]<=-1){
            steps = steps + (-(arr[i]+1)); 
            mul = mul*-1;
        }
        else{
            steps = steps+1;
            zcount++;
        }
    }
     if (mul==1 || (zcount>0)){
        return steps;
    }
    else{
        steps = steps+2;
        return steps;
    }
    return 0;
}

int main (){
    vector <int> arr = {-1,0};
    int k =steps(arr);
    cout<<k;
}