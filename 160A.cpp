#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n;
    int a[n];
 
    int c=0;
 
    for (int i=0; i<n; i++) {
        cin >> a[i];
        c = c+a[i];
    }
 
    sort(a,a+n);
 
    int x=0;
    int r=0;
 
    for (int i = n-1; i>=0; i--){
        x = x + a[i];
        r++;
        if (x>c/2) {
            
            break;
        }
    }
 
    cout<<r<<endl;
 
}