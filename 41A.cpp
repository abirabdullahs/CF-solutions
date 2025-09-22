#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main (){
    string s,t;
    cin>>s>>t;
    string test = s;
    
    int L = s.length ();
    
    for (int i=0; i<L; i++){
        test [i]=s[L-i-1];
    }
    
    if (test==t){
        cout<<"YES";
    }
    
    else {
        cout <<"NO";
    }
}
