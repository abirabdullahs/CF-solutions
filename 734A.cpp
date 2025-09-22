#include <iostream>
using namespace std;
int main (){
    long long n;
    cin>>n;
    int count = 0;
    long long p = n;
    long long digit;
    while (n>0) {
        digit = n % 10;
        n=n/10;
        count ++;
    }
    
    int count1=0;
    
    while (p>0) {
        digit = p % 10;
        p=p/10;
        if (digit == 4 || digit == 7){
            count1++;
        }
        
    }
    
    if (count1 == 4 || count1 == 7){
        cout << "YES";
    }
    
    else {
        cout << "NO";
    }
}
