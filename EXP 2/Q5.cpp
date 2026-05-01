#include <iostream>
using namespace std;

int main() {
    int P, count = 0;
    cin >> P;

    if (P == 0) {
        cout << 1;
        return 0;
    }

    while (P != 0) {
        count++;
        P /= 10;
    }

    cout << count;
    return 0;
}
