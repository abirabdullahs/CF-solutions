#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t;
    cin>>t;
    int m=0, c=0;
    while(t--){
      int a,b;
      cin>>a>>b;
      
      if(a>b) m++;
      else if(b>a) c++;
    }
    
    if(m>c) cout<<"Mishka"<<endl;
    else if(c>m) cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
}