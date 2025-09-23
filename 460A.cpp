#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n,m;
    cin>>n>>m;

    int c = 0, i=1;

    while(n>0){
        n -- ;
        c++;
        if(i%m == 0) n++;
        i++;

    }

   

    cout<<c<<endl;
}