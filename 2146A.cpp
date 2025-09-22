#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
 
        // Step 1: frequency map
        map<int,int> freq;
        for(int x : a) freq[x]++;
 
        // Step 2: try all possible frequencies from 1 to max frequency
        int maxLen = 0;
        int maxFreq = 0;
        for(auto p : freq) maxFreq = max(maxFreq, p.second);
 
        for(int f = 1; f <= maxFreq; f++){
            int currLen = 0;
            for(auto p : freq){
                if(p.second >= f) currLen += f;
            }
            maxLen = max(maxLen, currLen);
        }
 
        cout << maxLen << endl;
    }
}