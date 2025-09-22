#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    if(n<0){
        int a = n%10;
    int b = (n/10)%10;

    if (a<b){
        n = n/10;
    }

    else {
        n = (n/100)*10 + a;
    }

    cout<<n<<endl;
    }

    else cout<<n<<endl;
}