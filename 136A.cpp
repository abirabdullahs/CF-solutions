#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    int n;
    cin>> n;
 
    vector <int> a(n);
   vector <int> b(n,0);
 
    for (int i=0; i<n; i++){
 
        cin>>a[i];
 
        b[a[i]-1] = i+1;
        
    }
 
    for ( int i=0; i<n; i++){
        cout<< b[i] <<" ";
    }
 
   
}