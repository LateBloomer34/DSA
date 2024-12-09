#include<iostream>
using namespace std;

int pelin(int num){
    int rev = 0;
    int og = num;
while (num>0){
    int rem = num %10;
    rev = rev*10+rem;
    num = num/10;
}
// cout<<og<<"\n"<<rev<<endl;

return rev;
}

int main(){
    int num; 
    cin>>num ; 
    pelin(num);
    if (num == pelin(num)){
    cout<<"pelindrome";
}
else{
    cout<<"not pelindrome";
}
}