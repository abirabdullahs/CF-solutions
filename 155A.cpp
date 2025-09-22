#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    
    int n;
    cin>>n;
 
    vector<int>a;
    int c=0;
 
    for (int i=0; i<n; i++){
            int r;
            cin>>r;
 
            a.push_back(r);
 
            if(i==0) continue;
 
            int max = a[0], min = a[0];
 
            for (int j=0; j<i; j++){
                        if (a[j]>max) max = a[j];
                        if(a[j]<min) min = a[j];
            }
 
            if(a[i]>max || a[i]<min ) c++;
 
    }
 
    cout<<c<<endl;
}
