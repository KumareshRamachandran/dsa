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
#define fAll(x, n) for(int x=0; x<n; i++)
#define fRange(x, n) for(int x=1; x<=n; i++)
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


void solve()
{
    ll n, k; cin >> n >> k;
    set<int> v;
    fAll(i, n){
        int value; cin >> value;
        v.emplace(value);
    }
    ll ans = 0;
    while(k--){
        int value = *v.begin();
        v.erase(v.begin());
        ans += (value * 2);
        // cout << value << "->" << ans << "->"<< nline;
        v.emplace((value * 2));
    }
    ll sum = 0;
    for(auto it = v.begin(); it!=v.end(); it++){
        sum += *it;
    }
    cout << sum%MOD << nline;
    // for(auto i: v){
    //     cout << i << nline;
    // }
    // vector<ll> suffixSum(n);
    // suffixSum[n-1] = (v[n-1]%MOD);
    // for(int i=n-2; i>=0; i--){
    //     suffixSum[i] = ((v[i]%MOD + suffixSum[i+1]%MOD)%MOD);
    // } int idx = 0;
    // ll ans = 0;
    // if(k==0){
    //     cout << suffixSum[0] << nline;
    //     return;
    // }
    // while (k--)
    // {
    //     debug(ans)
    //     if((v[idx]*2ll)%MOD < (v[idx+1]*2ll)%MOD){
    //         ans += (v[idx]*2ll)%MOD;
    //     }else{
    //         idx++;
    //         ans += (v[idx]*2ll)%MOD;
    //     }
    // }
    // debug(suffixSum) 
    // cout << ans+suffixSum[idx+1] << nline;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
	fastio();
	int t = 1;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		solve();
	}
	return 0;
}
