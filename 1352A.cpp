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
      
      int c=0;
      int d=0;
      
      int k=n;
      
      while(k!=0){
        if(k%10!=0) {
          c++;
          
          }
          
          d++;
        k=k/10;
      }
      
      cout<<c<<endl;
      
      int r=0;
      while(n>0){
        if(n%10!=0){
          cout<<(n%10)*(pow(10,r))<<" ";
          r++;
          n=n/10;
        }
        
        else{
          r++;
          n=n/10;
        }
      }
      
      
      cout<<"\n";
      
      
}
 
}