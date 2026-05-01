#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n) {
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    int prev = 0;
    int curr = 1;
    int sum;
    for (int i = 2; i <= n; i++) {
        sum = curr + prev;
        prev = curr;
        curr = sum;
    }
    return curr;
}
int main() {
    int n;
    cout << "Enter number: " << endl;
    cin >> n;
    cout << "The term of Fibonacci is: " << fibonacci(n) << endl;
    return 0;
}
