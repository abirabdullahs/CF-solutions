#include <iostream>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int a,b;
    cin>>a>>b;
    
    for(int i=1; i<=a; i++){
      for(int j=0; j<b;j++){
        if(i%2==1){
            cout<<"#";
        }
        else {
          if(i%4==2){
            if(j==b-1) cout<<"#";
            else cout<<".";
          }
          
          else if(i%4==0){
            if(j==0) cout<<"#";
            else cout<<".";
          }
        }
      }
      
      cout<<"\n"; 
    }
}