#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
 
    vector<int> a;
 
    for (int i=0; i<n; i++){
        int r;
        cin>>r;
        a.push_back(r);
    }
 
    int mx = *max_element(a.begin(),a.end());
 
    int sum = 0;
 
    for (int r : a){
            sum += mx - r;
    }
 
    cout<<sum<<endl;
}