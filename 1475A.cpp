#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    
    while(t--){
      
      long long n;
      cin>>n;
      
      
      if((n&(n-1))==0) cout<<"no"<<endl;
      else cout<<"yes"<<endl;
      
      
    }
}