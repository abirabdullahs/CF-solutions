#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 
    while(n--){
        int a,x,y;
        cin>>a>>x>>y;
 
        if (((a-x)*(a-y))>0){
            cout<<"YES"<<endl;
        }
 
        else cout<<"NO"<<endl;
    }
}