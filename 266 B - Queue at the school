#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string sequence;
    cin>>sequence;
    
    while (t--){
    for (int i = 0; i<n-1; i++){
        if (sequence[i]=='B' && sequence [i+1] == 'G'){
            char temp=sequence[i];
            sequence [i]=sequence[i+1];
            sequence [i+1]=temp;
            i++;
            }
        }
    
    }
    
    cout<<sequence;
}
