#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>> n;
 
    int a[n];
    float sum =0;
 
    for (int i=0; i<n; i++){
        cin>> a[n];
        sum = sum + a[n];
    }
 
    cout << sum/n << endl;
}