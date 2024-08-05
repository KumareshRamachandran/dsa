#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = (int)(1e9) + 7;

string kthDistinct(vector<string> &arr, int k)
{
    map<string, pair<int, int>> mpp;
    vector<pair<int, string>> ans;
    int idx = 0;

    for (const auto &i : arr)
    {
        if (mpp.find(i) == mpp.end())
        {
            mpp[i] = {idx++, 1};
        }
        else
        {
            mpp[i].second++;
        }
    }

    for (const auto &i : mpp)
    {
        if (i.second.second == 1)
        {
            ans.push_back({i.second.first, i.first});
        }
    }

    sort(ans.begin(), ans.end());

    if (k <= ans.size())
    {
        return ans[k - 1].second;
    }
    else
    {
        return "";
    }
}

void solve()
{
    vector<string> arr = {"d", "b", "c", "b", "c", "a"};
    string ans = kthDistinct(arr, 2);
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin >> t;
    // cin.ignore();
    while (t-- > 0)
    {
        solve();
    }

    return 0;
}
