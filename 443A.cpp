#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    string A;
    getline(cin,A);
    
    vector<char>b;
    
    for (int i=1; i<A.size()-1; i++){
      if(A[i]!=' ' && A[i]!= ',')b.push_back(A[i]);
    }
    
    set<char>st(b.begin(),b.end());
    
    cout<<st.size()<<endl;
}