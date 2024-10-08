#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[0] < v2[0];
}

int countGoodNodes(vector<vector<int>>& edges) {
    int cnt = 0, n = edges.size()+1;
    sort(all(edges), sortcol);
    map<int, int, greater<int>> mpp;
    vector<vector<int>> adj;
    debug(edges)
    for(int i=0; i<n; i++) {
        adj.push_back({});
    }
    for(auto i: edges){
        adj[i[0]].push_back(i[1]);
    }
    // debug(adj)
    for(auto i: adj){
        mpp[cnt++] = i.size();
    }
    int ans = 0;
    for(auto i: mpp){
        int cnt = 0;
        for(auto &j: adj[i.first]){
            cnt += mpp[j];
            j = mpp[j];
        }
        mpp[i.first]+=cnt+1;
    }
    for(auto i: adj){
        int prev; bool isEqual = true;
        for (int j = 0; j < i.size(); j++)
        {
            if(j==0) prev = i[j];
            if(prev!=i[j]){
                isEqual = false;
                break; 
            }
        }
        if(isEqual) ans++;
    }
    // debug(adj)
    return ans;
}

void solve()
{
    vector<vector<int>> v = {{0,1},{1,2},{1,3},{1,4},{0,5},{5,6},{6,7},{7,8},{0,9},{9,10},{9,12},{10,11}};
	cout << countGoodNodes(v) << nline;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	fastio();
	int t = 1;
	// cin >> t;
	// cin.ignore();
	while (t--)
	{
		solve();
	}
	return 0;
}