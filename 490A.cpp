#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;

    int a[n];

    int c1=0, c2=0, c3=0;
    vector<int> v1, v2, v3;
    for (int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            c1++;
            v1.push_back(i+1);
        }
        else if(a[i]==2){
            c2++;
            v2.push_back(i+1);
        }
        else {
            c3++;
            v3.push_back(i+1);
        }
    }

    int mn = min(c1, min(c2,c3));

    cout<<mn<<endl;

    for (int i=0; i<mn; i++){
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }

    


}