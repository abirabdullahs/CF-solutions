#include <iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    
    int h,m;
    
    while (t--){
        cin>>h>>m;
        int hour = 24-h;
        int minute ;
        if (m>0){
            hour--;
            minute = 60-m;
        }
        
        else {
            minute = 0;
        }
        
        int result = (hour*60)+minute;
    cout<<result<<endl;
    }
    
}
