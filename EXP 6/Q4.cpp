#include <iostream>
#include <vector>
using namespace std;
int findPeakElement(const vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return -1;
    if (n == 1) return 0;
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i-1]) &&
            (i == n-1 || arr[i] >= arr[i+1])) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1, 3, 20, 4, 1};
    int peakIndex = findPeakElement(arr);
    if (peakIndex != -1) {
        cout << "Peak element found at index: " << peakIndex << endl;
    } else {
        cout << "No peak element found." << endl;
    }
    return 0;
}
