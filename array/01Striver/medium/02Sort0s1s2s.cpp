#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high) {
        if (arr[low] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[low] == 1) { 
            swap(arr[low], arr[mid]);
            mid++;
        } else { // arr[low] == 2
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}