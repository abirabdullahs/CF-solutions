#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string A;
    cin>>A;
    
    if (A[0]>='a' && A[0]<='z'){
        A[0] = A[0]-32;
    }
    
    cout<<A;
}