#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    if (n < 0) return 0;
    if (n == 0) {
        cout << "0! = 1" << endl;
        return 0;
    }
    double pi = 3.14159265358979;
    double e  = 2.71828182845904;
    double result = sqrt(2 * pi * n) * pow((n / e), n);
    cout << "Approximate " << n << "! = " << result << endl;
    return 0;
}
