#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    string A;
    cin >> A;

    string B = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string C;

    for(char a : A) {
        size_t index = B.find(a);
        if(index == string::npos) continue; 
        if(ch == 'R') {
            C.push_back(B[index - 1]);  
        } else { 
            C.push_back(B[index + 1]);
        }
    }

    cout << C << endl;

    return 0;
}