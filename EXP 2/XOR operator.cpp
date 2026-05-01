#include <iostream>
#include <vector>
using namespace std;

int findUnique(int arr[], int size) {
    int res = 0;
    for (int i = 0; i < size; i++) {
        res = res ^ arr[i];
    }
    return res;
}
int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "The number that occurs once is: " << findUnique(nums, n) << endl;
    return 0;
}
