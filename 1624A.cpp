#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        long long maximum = 0;
        long long  minimum = 10000000000;
        for (int i = 0; i<n; i++){
            cin>>arr[i];
            
            if (arr[i]>maximum){
                maximum = arr[i];
            }
            
            if (arr[i]<minimum){
                minimum = arr[i];
            }
        }
        
        cout << maximum - minimum << endl;
    }
}
