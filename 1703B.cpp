#include <iostream>
#include <cstring>

using namespace std;
int main(){
    
    int t;
    cin>>t;
    
    while (t--){
        
        int n;
        cin>>n;
        string A;
        cin>>A;
        int count1=0;
       
        for (int i=0; i<n; i++){
             int count = 0;
            for (int j=0; j<i; j++){
                if (A[i]==A[j]){
                    count ++;
                }
                
            }
            
            if (count>0){
                count1++;
            }
            
            else {
                count1 = count1+2;
            }
        }
        cout << count1 <<endl;
    }
}
