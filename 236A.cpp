#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string A;
    cin>>A;
    int L = A.length();
    int c=0;
    
    for (int i=0; i<L; i++){
        int count=0;
        for (int j=0; j<i; j++){
            if (A[i]==A[j]) {count++;}
        }
        
        if (count==0) c++;
    }
        
        if (c%2==0){
            cout<<"CHAT WITH HER!";
        } 
        
        else{
            cout<<"IGNORE HIM!";
        }
}