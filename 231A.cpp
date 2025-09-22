#include <iostream>
using namespace std;
int main(){
    long long count1=0;
    long long n;
    cin>>n;
    while(n--){
        int count=0;
        int a[3];
        for(int i=0; i<3; i++){
            cin>> a[i];
            if (a[i]==1){
                count++;
            }
            
            }
            if (count >=2){
                count1++;
        }
        
    }
    cout<<count1<<endl;
}
