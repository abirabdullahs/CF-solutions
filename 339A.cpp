#include <iostream>
#include <cstring>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
   string A;
   cin>>A;
   
   
   int l=A.length();
   
   int a=0;
   string B;
   
   for (int i=0; i<l; i++){
     if (A[i]!='+') B[a++] = A[i];
   }
   
   
   for (int i=0; i<a; i++){
     for (int j=i+1; j<a; j++){
       if (B[j]<B[i]){
         char t=B[j];
         B[j]=B[i];
         B[i]=t;
       }
     }
   }
   
   for (int i=0; i<a; i++){
     if (i==a-1) cout<<B[i];
     else cout << B[i]<<"+";
   }
   
}