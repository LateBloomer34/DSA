#include<iostream>
using namespace std;

int main (){
    string a;
    // char a;
    // cin>>a;
    getline(cin,a);
    cout<<a[ 6]<<"\n";
    int length = a.size(); 
    cout<<length<<endl;

     a[5]='6';
    cout<<a;
}