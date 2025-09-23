#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        string s1 = "Timur";
        string s2;
        cin >> s2;

        int a[5] = {0};

        if (s2.size() != 5) {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < 5; i++) {
            if (s2[i] == 'T') a[0]++;
            else if (s2[i] == 'i') a[1]++;
            else if (s2[i] == 'm') a[2]++;
            else if (s2[i] == 'u') a[3]++;
            else if (s2[i] == 'r') a[4]++;
        }

        bool ok = true;
        for (int i = 0; i < 5; i++) {
            if (a[i] != 1) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
