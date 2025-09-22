#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int arr[]={a,b,c,d};
    
    sort(arr,arr+4);
    
    (arr[3]<(arr[1]+arr[2]) || arr[2]<(arr[0]+arr[1]) || arr[3]<(arr[0]+arr[1]) || arr[3]<(arr[0]+arr[2]))?
    cout<<"TRIANGLE" : 
    (arr[3]==(arr[1]+arr[2]) || arr[2]==(arr[0]+arr[1]) || arr[3]==(arr[0]+arr[1]) || arr[3]==(arr[0]+arr[2]))?
    cout<<"SEGMENT" : cout << "IMPOSSIBLE";
    
}
