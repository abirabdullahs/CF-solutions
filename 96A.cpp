#include <iostream>
#include <cstring>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    string A;
    cin>>A;
    
    int l=A.length();
    int c=1;
    
    for (int i=0; i<l-1; i++){
      if (A[i]==A[i+1]){ 
        c++;
      if (c>=7) break;
      }
      
      else c=1;
      
    }
    
    if (c>=7) cout<<"YES";
    else cout <<"NO";
}