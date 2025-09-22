#include <iostream>
using namespace std;
int main(){
    int a[5][5];
    int col,row;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>a[i][j];
            
            if (a[i][j]==1){
                row=i+1;
                col=j+1;
            }
        }
    }
    
    if (col>3){
        col=col-3;
    }
    
    else if(col<3){
        col=3-col;
    }
    else{
        col=0;
    }
    
    if (row>3){
        row=row-3;
    }
    
    else if(row<3){
        row=3-row;
    }
    else{
        row=0;
    }
    
    cout<<col+row<<endl;
    
}
