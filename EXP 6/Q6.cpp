#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPairWithSum(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            cout << "Pair found: " << arr[left] << " and " << arr[right] << endl;
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    cout << "No pair found with sum " << target << endl;
}

int main() {
    vector<int> arr = {1, 4, 2, 7, 5, 3};
    int target = 9;
    findPairWithSum(arr, target);
    return 0;
}
