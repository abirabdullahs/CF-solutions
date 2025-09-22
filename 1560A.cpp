#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
 
   while(t--){
        int k;
        cin>>k;
 
        int i = 1;
        int c = 0;
        while(1){
            if((i%3)!=0 && (i%10)!=3){
                c++;
 
                if(c == k) {
                    cout<<i<<endl;
                    break;
                }
                
            }
 
            i++;
        }
   }
}