#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long a,b,c,d,t;
 
    cin >> t;
    while(t--) {
        cin >> a >> b >> c >> d;
 
      if (min(a,c)>min(b,d)){
        cout<<"Gellyfish"<<endl;
      }
      else if (min(a,c)<min(b,d)){
        cout<<"Flower"<<endl;
      }
 
      else {
        cout<<"Gellyfish"<<endl;
      }
 
}
    
}