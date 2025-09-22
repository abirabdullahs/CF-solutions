#include <iostream>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int n;
    cin>>n;
    
    char t[2]={4,5};
    int c=0;
    char a[2];
    
    
    while(n--){
      for (int i=0; i<2; i++){
        cin>>a[i];
      }
      
      if (a[0]!=t[0]) c++;
      
      t[0] = a[0];
      
    }
    
    cout<<c;
}