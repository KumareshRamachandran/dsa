#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    bool isFound = false;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i-1]==s[i]) {
            char toChange;
            if(s[i]=='z') toChange = s[i]-1;
            else toChange = s[i] + 1;
            s.insert(s.begin()+i, toChange);
            isFound = true;
            break;
        }
    }
    if(!isFound) {
        char toChange;
        if(s[0]=='z') toChange = s[0]-1;
        else toChange = s[0] + 1;
        s.insert(s.begin(), toChange);
    }
    cout << s << '\n';
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
