#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0


int main()
{
  
  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    
    string s;;
    
    cin>>s;
    
    int f=0, l=n-1;
    
    while(s[f]!=s[l] && l>f){
      n=n-2;
      f++;
      l--;
    }
    
    cout<<n<<endl;
  }
  
}