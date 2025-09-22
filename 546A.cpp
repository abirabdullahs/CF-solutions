#include <iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    
    int total =0;
    for (int i=1; i<=w;i++){
        total = total + i*k;
    }
    int due=total-n;
    if(due<0){
        due =0;
    }
    cout<< due ;
}
