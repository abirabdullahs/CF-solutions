#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int a,b;
    int capacity=0, total = 0;
    while (n--){
        cin>>a>>b;
        total = total + b -a;
        (capacity>total)?
        capacity = capacity : capacity = total;
    }
    
    cout << capacity;
}
