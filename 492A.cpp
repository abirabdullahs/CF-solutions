#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int count = 0;
    int i=1;
    
    while (n>0){
        int sum = (i*(i+1)/2);
        
        
            n=n-sum;
        
        if (n<0){
            break;
        }
        
        
        count ++;
        i++;
    }
    
    cout << count;
}
