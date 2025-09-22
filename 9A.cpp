#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;

    int mx = max(a,b);

    int r = (6-mx)+1;

    int g = gcd(r,6);

    r = r/g;


    cout<<r<<"/"<<6/g<<endl;
}