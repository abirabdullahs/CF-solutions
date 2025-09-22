#include <iostream>
#include <cstring>
#include <cctype>  // for tolower() and toupper()
using namespace std;
 
int main() {
    string word1, word2;
    cin >> word1 >> word2;
 
    // Case insensitive comparison
    // Convert both strings to lowercase (or uppercase)
    for (int i = 0; i < word1.length(); i++) {
        word1[i] = tolower(word1[i]);  // Convert to lowercase
    }
    for (int i = 0; i < word2.length(); i++) {
        word2[i] = tolower(word2[i]);  // Convert to lowercase
    }
 
    // Now compare the strings
    if (word1 > word2) {
        cout << 1 << endl;  // word1 is greater
    } else if (word1 < word2) {
        cout << -1 << endl; // word1 is smaller
    } else {
        cout << 0 << endl;  // both are equal
    }
 
    return 0;
}
