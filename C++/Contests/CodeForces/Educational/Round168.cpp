#include <iostream>
#include <string>
using namespace std;

int calculate_time(const string& s) {
    if (s.empty()) return 0;
    int time = 2; 
    for (size_t i = 1; i < s.size(); ++i) {
        time += (s[i] == s[i - 1]) ? 1 : 2;
    }
    return time;
}

void solve() {
    string s;
    cin >> s;
    
    int max_time = 0;
    string best_password;
    
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        for (size_t i = 0; i <= s.size(); ++i) {
            string new_password = s.substr(0, i) + ch + s.substr(i);
            int current_time = calculate_time(new_password);
            if (current_time > max_time) {
                max_time = current_time;
                best_password = new_password;
            }
        }
    }
    
    cout << best_password << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
