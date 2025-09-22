#include <bits/stdc++.h>
using namespace std;
 
int isPrime(int n){
    for (int i=2; i*i<=n; i++){
        if(n%i == 0) return 0;
    }
 
    return 1;
}
 
int main() {
    
    int n;
    cin>>n;
    
    if (n%2 == 0){
        if (!(isPrime(n/2))){
            cout<<n/2<<" "<<n/2<<endl;
        }
 
        
        else{
            int i = 0;
            int m = n/2;
            while(isPrime(m)){
                m++;
                i++;
            }
 
            cout<<m<<" "<<n-m<<endl;
 
        }
    }
 
    else{
         int i = 0;
            int m = n/2;
            int k = n/2+1;
            while(isPrime(m) || isPrime(k)){
                m++;
                k--;
            }
 
            cout<<m<<" "<<k<<endl;
    }
}