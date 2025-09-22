#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t;
    cin>>t;
    
    while(t--){
      string B;
      
      cin>>B;
      
      vector<char>A;
      A.push_back(B[0]);
      A.push_back(B[1]);
      
      for(int i=3; i<B.size(); i=i+2){
        	A.push_back(B[i]);
      }
      
      
      
      for(char ch : A) cout << ch;
    cout << endl;
    }
}