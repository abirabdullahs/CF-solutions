#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    string A;
    cin>>A;
    
    int L = A.length();
    int count = 0;
    
    for (int i=0; i<L ; i++){
        if (isupper(A[i])){
            count++;
        }
    }
    
    if (count>L/2){
        for (int i=0; i<L ; i++){
            A[i]= toupper (A[i]);
        }
    }
    
    else {
        for (int i=0; i<L ; i++){
            A[i]= tolower (A[i]);
        }
    }
    
    cout<<A;
}
