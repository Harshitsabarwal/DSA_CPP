#include<iostream>
using namespace std;

int main() {
    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number of positions to rotate: ";
    cin >> d;
    
    // Normalize d in case it's greater than n
    d = d % n;

    // Rotate the array to the left by d positions
    int temp[d];
    for(int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for(int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    cout << "Array after rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}