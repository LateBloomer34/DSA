#include <iostream>
using namespace std;

int sort(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid < high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) { 
            // swap(arr[mid], arr[mid]);
            mid++;
        } else { // arr[low] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return 0;
}



int main() {
    int arr[] = {1,2,0,2,0,1,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, n);

    cout << "Sorted array: ";
 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}