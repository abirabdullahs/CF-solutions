#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      string A;
      cin>>A;
      int c=0;
      
      string B = "codeforces";
      
      for(int i=0; i<A.size();i++){
        if(A[i]!=B[i])c++;
      }
      cout<<c<<endl;
      
  }
}