#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    
    int n, k;
    cin>>n>>k;
 
    int c=0;
    int sum = 0;
 
    while(1){
 
            sum = sum + n;
            c++;
            if(sum%10 == k || sum%10 ==0) break;
    }
 
    cout<<c<<endl;
    
}