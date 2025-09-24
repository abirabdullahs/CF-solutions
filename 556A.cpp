#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0


int main()
{
  
  
  int n;
  cin>>n;
  
  string s;
  cin>>s;
  
  int c0=0,c1=0;
  
  for(int i=0; i<n; i++){
    if(s[i]=='0') c0++;
    else c1++;
  }
  
  int mn = min(c0,c1);
  
  cout<<n-(2*mn)<<endl;
  
}