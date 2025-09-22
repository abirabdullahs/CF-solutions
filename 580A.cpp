#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long n;
    cin >> n;
    long long A[n];
    for (long long i = 0; i < n; i++) {
        cin >> A[i];
    }
 
    long long max, c;
 
    max =0;
    c=1;
 
    for (long long i=0; i<n-1; i++){
        if(A[i+1] >= A[i]) {
            c++;
           
        } 
        else c=1;
 
        if(c > max) {
            max = c;
        }
    }
 
    if(c > max) {
        max = c;
            }
    cout << max << endl;
    return 0;
}