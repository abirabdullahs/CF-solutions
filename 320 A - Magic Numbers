#include <iostream>
#include <cstring>
using namespace std;
 
bool is_magical(string A){
    
    for (int i=0; i<A.length();i++){
        if (A[i]!='1' && A[i]!='4'){
            return 0;
        }
    }
    
    if (A[0]=='4'){
        return 0;
    }
    
    if (A.find("444")!=A.npos){
            return 0;
        }
        
        else {
            return 1;
        }
}
int main(){
    string number;
    cin>> number;
    
    cout<<((is_magical(number))? "YES" : "NO");
}
