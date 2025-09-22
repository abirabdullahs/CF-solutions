#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    string A;
    cin>>A;
    
    string ans;
    
    for(int i=0; i<A.size(); i++){
      if(A[i] == '.') ans = ans+'0';
      
      else if(A[i]=='-'){
        if(A[i+1]=='.'){
          ans = ans + '1';
          i++;
        }
        
        else if(A[i+1]=='-'){
          ans = ans + '2';
          i++;
        }
      }
    }
    
    cout<<ans<<endl;
 
    
}