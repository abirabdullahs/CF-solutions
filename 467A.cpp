#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    
    int p,q,count=0;
    
    while (n--){
        
        cin>>p>>q;
        
        if ((q-p)>=2){
            count ++;
        }
        
    }
    
    cout << count;
}
