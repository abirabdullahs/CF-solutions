#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int a[n];
        for (int i=0; i<n; i++){
            cin>>a[i];
        }

        int ce=0, co=0;

        for (int i=0; i<n; i++){
            if (i%2 == 0 && a[i]%2 !=0) ce++;
            else if(i%2==1 && a[i]%2 != 1) co++;
        }

        if (ce==co) cout<<ce<<endl;
        else cout<<-1<<endl;
    }
}