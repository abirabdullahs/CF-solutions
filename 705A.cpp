#include <iostream>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int n;
    cin>>n;
    
    //if(n==1)cout<<"i hate that";
    
    for (int i=1; i<=n; i++){
      if(i%2==0) cout<<"I love ";
      else cout<<"I hate ";
      
      if(i==n)cout<<"it";
      else cout<<"that ";
    }
}