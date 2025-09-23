#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;

    while(t--){
        

        int x;
        cin>>x;

        int r = x;

        int c=0;

        while(x!=0){
            x = x/10;
            c++;
        }

        int k = (r%10) - 1;

        int total = k*10 + (c*(c+1))/2;

        cout<<total<<endl;

    }
}