#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n,k;
    cin>>n>>k;
    
    long long a[n];
    
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n, greater<int>());
    
    int count=0;
    for (int j=0;j<n;j++){
        if(a[j]>=a[k-1] && a[j]>0){
            count++;
        }
    }
    
    cout<<count<<endl;
    
}
