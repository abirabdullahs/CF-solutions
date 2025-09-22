#include <iostream>
using namespace std;
 
int main()
{
    int n,p1,p2,p3,T1,T2,l,r,t=-1;
    cin>>n>>p1>>p2>>p3>>T1>>T2;
    
    int total=0;;
    
    while(n--){
      cin>>l>>r;
      
      if(t>0){
        int d=l-t;
        if(d<=T1) total += p1*d;
      else if(d<=(T1+T2)) total += p1*T1+p2*(d-T1);
      else if(d>(T1+T2)) total += p1*T1+p2*T2+(d-T1-T2)*p3;
      }
      
      total += (r-l)*p1;
      t=r;
    }
    
    cout<<total;
}  