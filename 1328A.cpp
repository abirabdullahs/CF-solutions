#include <iostream>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int n;
    cin>>n;
    
   while(n--){
     int a,b;
     cin>>a>>b;
     
     
     
     int f =(((a/b+1)*b)-a)%b;
     cout<<f<<endl;
   }
}