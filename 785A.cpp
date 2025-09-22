#include <bits/stdc++.h>
using namespace std;
 
//Compiler version g++ 6.3.0
 
int main()
{
    int n;
    cin>>n;
    vector <string> words(n);
    int c=0;
    
    for (int i=0; i<n; i++){
      cin>>words[i];
      if(words[i]=="Tetrahedron") c=c+4;
      else if(words[i]=="Cube")c=c+6;
      else if(words[i]=="Octahedron")c=c+8;
      else if(words[i]=="Dodecahedron")c=c+12;
      else if(words[i]=="Icosahedron")c=c+20;
    }
    
    cout<<c<<endl;
}