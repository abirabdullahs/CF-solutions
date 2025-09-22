#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int n;
    cin>>n;
    
   string A;
   cin>>A;
   
   int p[26] = {0};
   
   for(char &c : A){
     c = toupper(c);
   }
   
   for (int i=0; i<n; i++){
       
       p[A[i]-'A'] = 1;
   }
   
   int k=0;
   
   for (int i=0; i<26; i++){
     if(p[i]==0){
       k++;
       break;
     }
   }
   
   if(k==0) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}