// find the union of two array





#include<iostream>
using namespace std;

int uni(int arr1[] , int arr2[] , int n  ,int m){
        int i = 0 ; 
        int j = 0 ;
        vector<int >temp;
        while(i<n && j<m){
            if (arr1[i]<arr2[j]){
                if (temp.size()==0 ||temp.back() !=arr1[i]){
                    temp.push_back(arr1[i]);
                }
                i++;
            }
            else if (arr2[j]<arr1[i]){
                 if (temp.size()==0 ||temp.back() !=arr2[j]){
                    temp.push_back(arr2[j]);
                }
                j++;
            }
            else{
                if (temp.size()==0 || temp.back() !=arr2[j]){
                    temp.push_back(arr2[j]);
                }
                i++;
                j++;
            }
        }

        while(i<n){
                if (temp.size()==0 ||temp.back() !=arr1[i]){
                    temp.push_back(arr1[i]);
                }
                i++;
            
        }
        while(j<m){
          
                 if (temp.size()==0 ||temp.back() !=arr2[j]){
                    temp.push_back(arr2[j]);
                }
                j++;
            }
        


        for (int i = 0 ; i< temp.size(); i++){
            cout<<temp[i]<<" ";
        }

        return 0;
}

int main (){
    int arr1[] = {1,2,3,4,5,6,7,8,9,10} ;
    int arr2[] = {2,3,4,4,5,11,12};
    int n = sizeof arr1 / sizeof arr1[0];
    int m = sizeof arr2 / sizeof arr2[0];
    // int m = 5;
    uni(arr1 , arr2 , n , m);
}

