#include <bits/stdc++.h>
using namespace std;

#define el '\n';

void solve() {
    int n, cnt=0; cin >> n;
    while(cnt++<10){
        if((n+1)%3==0||(n-1)%3==0){
            cout << "First" << el;
            break;
        }else{
            n++;
        }
    }
    if(cnt==10) cout << "Second" << el;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
