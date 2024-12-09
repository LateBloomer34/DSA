
//brute appeoach

/*
#include<iostream>
using namespace std;

int hcf (int num1, int num2){
    int hc =0;
   for(int i = 1 ; i <=min(num1, num2); i++){
    if(num1%i==0 && num2%i==0){
        hc = i;
    }

   }
   return hc;
}

int main (){
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    hcf(num1,num2);
    cout<<hcf(num1,num2);

}
*/


// optimal approach:-


#include<iostream>
using namespace std;

void hcf(int num1 , int num2){

while(num1>0  && num2>0){
    
    if (num1>num2){
        num1 = num1%num2;
    }
    else{
        num2 = num2%num1;
    }   
}

 if (num1==0){
    cout<<"hcf is num2 "<<num2;
}
else{
    cout<<"hcf is num1 "<<num1;
    }


}


int main(){
    int num1, num2;
    cin>>num1>>num2;
    hcf(num1,num2);
}


