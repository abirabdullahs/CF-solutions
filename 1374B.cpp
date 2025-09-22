#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
 
        long long c2 = 0, c3 = 0;
        long long tmp = n;
 
        // count power of 2
        while (tmp % 2 == 0) {
            tmp /= 2;
            c2++;
        }
 
        // count power of 3
        while (tmp % 3 == 0) {
            tmp /= 3;
            c3++;
        }
 
        // যদি অন্য prime থাকে → impossible
        if (tmp > 1) {
            cout << -1 << endl;
            continue;
        }
 

        if (c2 > c3) {
            cout << -1 << endl;
            continue;
        }
 

        cout << 2 * c3 - c2 << endl;
    }
}