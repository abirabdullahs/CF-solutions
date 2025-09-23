#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        
        for(long long k = 2; ; k++) {  // k > 1
            long long sum = (1LL << k) - 1;  
            if(n % sum == 0) {
                cout << n / sum << "\n";
                break;
            }
        }
    }

    return 0;
}