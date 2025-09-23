#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n,m;
    cin>>n>>m;
    
    int a[n];
    
    for(int i=0; i<n; i++){
      cin>>a[i];
    }
      
      sort(a,a+n);
      
      int i=0;
      int sum = 0;
      
      while(m--){
        if(a[i]<=0){
          sum = sum - a[i];
        }
        i++;
      }
      
      cout<<sum<<endl;
  
}