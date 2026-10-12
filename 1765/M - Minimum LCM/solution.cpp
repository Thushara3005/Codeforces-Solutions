#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << '
';
        }
        else {
            long long d = 0;
 
            for (long long i = 3; i * i <= n; i += 2) {
                if (n % i == 0) {
                    d = i;
                    break;
                }
            }
 
            if (d == 0) {
                // n is prime
                cout << 1 << " " << n - 1 << '
';
            }
            else {
                cout << n / d << " " << n - n / d << '
';
            }
        }
    }
 
    return 0;
}