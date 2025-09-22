#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
    while(t--){
    int n; 
    cin >> n;
    int a[n];
 
    int c=0;
 
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
   int m = a[0];
 
   int c1=0,c2=0;
 
   for (int i = n-1; i>=0; i--) {
        if((m+a[i])%2!=0) {
            c1++;
        }
 
        else break;
   }
 
   int p = a[n-1];
    for (int i = 0; i<n; i++) {
          if((p+a[i])%2!=0) {
                c2++;
          }
    
          else break;
    }
 
    if(c1>c2) {
        cout << c2 << endl;
    } else {
        cout << c1 << endl;
    }
 
}
 
}