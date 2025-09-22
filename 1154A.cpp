#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    int r = max(max(a,b), max(c,d));
    
    if(r - a != 0) cout << r - a << " ";
    if(r - b != 0) cout << r - b << " ";
    if(r - c != 0) cout << r - c << " ";
    if(r - d != 0) cout << r - d << " ";
    
    cout << endl;
}