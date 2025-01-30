// n = 5,m = 5.   where n is the length of arr1 , and m is length of arr2;
// arr1[] = {1,2,3,4,5}  
// arr2[] = {2,3,4,4,5}
// Output:

//  {1,2,3,4,5}


#include<iostream>
using namespace std;


int unionArray (int arr1 [] , int n , int arr2[] , int m){
int i = 0;
int j = 0;
  vector < int > unio;

  while (i < n && j < m) {



    if (arr1[i] <= arr2[j])
    {
      if (unio.size() == 0 || unio.back() != arr1[i]){
        unio.push_back(arr1[i]);}
      i++;
    } 
    else{
      if (unio.size() == 0 || unio.back() != arr2[j]){
        unio.push_back(arr2[j]);
      }
      j++;
    }
  }  


// using if , else if and else condition


//  while (i < n && j<m){
//         if (arr1[i]< arr2[j]){
//             if (unio.size() == 0 || unio.back() != arr1[i] ){
//                 ans.push_back(arr1[i]);
//             }
//             i++;
//         }
//         else if (arr2[j]< arr1[i]){
//             if (unio.size() == 0 ||unio.back()!=arr2[j]){
//                 unio.push_back(arr2[j]);
//             }
//             j++;
//         }
//          else{
//     if (unio.size() == 0 ||unio.back()!=arr1[i]){
//                 unio.push_back(arr2[j]);
//             }
//             i++;
//             j++;
//          }
//     }





  while (i < n) // IF any element left in arr1
  {
    if (unio.back() != arr1[i]){
      unio.push_back(arr1[i]);}
    i++;
  }
  while (j < m) // If any elements left in arr2
  {
    if (unio.back() != arr2[j]){
      unio.push_back(arr2[j]);}
    j++;
  }
  
  
  for (int i = 0 ; i < unio.size() ; i++){
    cout<<unio[i];
  }
  
  return 0;
}

int main (){
    int arr1[] = {-7,8};  
    int arr2[] = {-8,3,8};
    int n = sizeof arr1 / sizeof arr1[0];
    int m = sizeof arr2 / sizeof arr2[0];
    unionArray(arr1 , n , arr2 , m);
}