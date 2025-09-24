#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0


int main()
{
  
  
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    
    if((2*b>c && (2*b-c)%a==0) || (2*b>a &&(2*b-a)%c==0)||(a+c)%(2*b)==0){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
  
}