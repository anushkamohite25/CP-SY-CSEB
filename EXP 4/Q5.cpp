#include <iostream>
using namespace std;
void printLeaders(int arr[], int n) {
    int maxRight = arr[n - 1];
    cout << maxRight << " ";
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            cout << arr[i] << " ";
            maxRight = arr[i]; 
        }
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Leaders (printed right to left): ";
    printLeaders(arr, n);
    return 0;
}
