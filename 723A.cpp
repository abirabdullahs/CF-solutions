#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int a[3];
    int max = 0, min=0;
    
    for(int i=0; i<3; i++){
      cin>>a[i];
    }
    
    max = a[0], min=a[0];
    
    for(int i=0; i<3; i++){
      if(a[i]>max) max = a[i];
      if(a[i]<min) min = a[i];
    }
    
    cout<<max-min<<endl;
    
    
    
}