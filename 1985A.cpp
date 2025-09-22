#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string A,B;
        cin>>A>>B;

        char t = A[0];
        A[0] = B[0];
        B[0] = t;

        cout<<A<<" "<<B<<endl;
    }
    return 0;
}