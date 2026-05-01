#include <iostream>
using namespace std;

int power(int n, int m) {
    if (m == 0) 
        return 1;
    return n * power(n, m - 1);
}

int main() {
    int N, m;

    cout << "Enter base (N): ";
    cin >> N;
    cout << "Enter power (m): ";
    cin >> m;

    cout << "Result: " << power(N, m) << endl;

    return 0;
}
