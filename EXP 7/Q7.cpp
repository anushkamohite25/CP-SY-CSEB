#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findTripletsWithSumZero(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    bool found = false;

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;
        int target = -arr[i];

        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == target) {
                cout << "Triplet found: "
                     << arr[i] << ", " << arr[left] << ", " << arr[right] << endl;
                found = true;
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    if (!found) {
        cout << "No triplets found with sum 0." << endl;
    }
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    findTripletsWithSumZero(arr);
    return 0;
}
