#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if ((n/2) % 2 != 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        
        for (int i = 1; i <= n/2; i++) {
            cout << 2*i << " ";
        }
        
        for (int i = 1; i < n/2; i++) {
            cout << 2*i - 1 << " ";
        }
        cout << (3*(n/2) - 1) << "\n";
    }
}