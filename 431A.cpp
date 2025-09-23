#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  
  
  int a[4];
  for(int i=0; i<4; i++){
    cin>>a[i];
  }
  
  int sum = 0;
  
  string s; 
  cin>>s;
  
  for(char x:s){
    sum = sum + a[(x-'0')-1];
  }
  
  cout<<sum<<endl;
  
}