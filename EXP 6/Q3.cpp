#include <iostream>
#include <vector>
using namespace std;
int findNextOccurrence(const vector<int>& arr, int target, int left, int right) {
    if (left > right) {
        return -1; 
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        int next = findNextOccurrence(arr, target, mid + 1, right);
        return (next != -1) ? next : mid;
    } else if (arr[mid] < target) {
        return findNextOccurrence(arr, target, mid + 1, right);
    } else {
        return findNextOccurrence(arr, target, left, mid - 1);
    }
}
int main() {
    vector<int> arr = {1, 3, 5, 7, 7, 7, 9, 11, 13};
    int target = 7;
    int result = findNextOccurrence(arr, target, 0, arr.size() - 1);
    if (result != -1) {
        cout << "Next occurrence found at index: " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}
