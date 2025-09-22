#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 
    int dpm = (k*l)/nl;   // total drinks / per person
    int spm = (c*d);      // total slices
    int sapm = p/np;      // total salt
 
    int r = min(dpm, min(spm, sapm)) / n; // find minimum
 
    cout<<r<<endl;
}