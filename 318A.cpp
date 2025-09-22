#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,k;
    cin>>n>>k;
 
    long long mid;
 
    mid = (n + 1) / 2;
 
    if (k <= mid) {
        cout << 2 * k - 1 << endl; // Odd position
    } else {
        cout << 2 * (k - mid) << endl; // Even position
    }
 
    return 0;
}