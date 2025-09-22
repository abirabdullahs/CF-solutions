#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    string A;
 
    cin>>t;
 
 
    while(t--){
        int c=0;
        cin >> A;
        int n = A.size();
 
        for(int i = 0; i < n; i++) {
            if(A[i]=='0') c++;
        }
 
        if(c>n-c) c = n-c;
       
 
        if(c % 2 == 0) {
            cout << "NET" << endl;
        } else {
            cout << "DA" << endl;
        }
    }
}