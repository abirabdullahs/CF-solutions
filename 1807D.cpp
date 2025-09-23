#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0


int main()
{
  
  
  int t;
  cin>>t;
  while(t--){
    int n, q;
    cin>>n>>q;
    
    int a[n];
  for(int i=0;i<n;i++) cin>>a[i];

  long long pref[n+1];
  pref[0] = 0;
  for(int i=1;i<=n;i++) pref[i] = pref[i-1] + a[i-1];

  while(q--){
      int l,r,k;
      cin>>l>>r>>k;

      long long s1 = pref[n];       
      long long s2 = pref[r] - pref[l-1];
      long long s3 = 1LL*(r-l+1)*k;      

      long long sum = s1 - s2 + s3;

      if(sum % 2) cout<<"YES\n";
      else cout<<"NO\n";
}
    
  }
  
}