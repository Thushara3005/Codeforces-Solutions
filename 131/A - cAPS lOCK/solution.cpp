#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    bool ok = true;
 
    // Check characters after the first
    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            ok = false;
            break;
        }
    }
 
    // If condition is satisfied, change case of every character
    if (ok) {
        for (char &c : s) {
            if (isupper(c))
                c = tolower(c);
            else
                c = toupper(c);
        }
    }
 
    cout << s;
}