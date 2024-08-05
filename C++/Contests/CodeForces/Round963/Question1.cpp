#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s; int ans = 0;
    map<char, int> mpp;
    for(auto i: s){
        mpp[i]++;
    }
    for(auto &i: mpp){
        if(i.first!='?'){
            if(i.second>0){
                if(i.second>=n) ans += n;
                else if(i.second>=0) ans += i.second;
            }
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;
    cin.ignore();
    while (t-- > 0)
    {
        solve();
    }

    return 0;
}
