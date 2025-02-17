#include <iostream>
using namespace std;

void primeFactorization(int n) {
    cout << "Prime factors of " << n << ": ";
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) cout << n;
    cout << "\n";
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    primeFactorization(num);
    return 0;
}
