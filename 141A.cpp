#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    string A,B,C;
    cin>>A>>B>>C;
    
    string D = A+B;
    
    sort(D.begin(),D.end());
    sort(C.begin(),C.end());
    
    if(C==D) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}