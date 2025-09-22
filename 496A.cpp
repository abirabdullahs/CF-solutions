#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int n;
    cin>>n;
    vector <int> a;
    
    int p;
    cin>>p;
    
    for(int i=0; i<p; i++){
      int r;
      cin>>r;
      a.push_back(r);
    }
    
    int q;
    cin>>q;
    
    for(int i=0; i<q; i++){
      int r;
      cin>>r;
      a.push_back(r);
    }
    
    set <int> st(a.begin(),a.end());
    
    if(st.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
  
}