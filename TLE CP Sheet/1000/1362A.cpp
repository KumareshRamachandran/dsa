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
#define fall(x, n) for(int x=0; x<n; x++)
#define rall(x, n) for(int x=n-1; x>=0; x--)
#define frange(x, start, end) for(int x=start; x<=end; x++)
#define rrange(x, start, end) for(int x=start; x>=end; x--)
#define set_bits __builtin_popcountll
#define vi vector<int> 
#define vii vector<vector<int>>
#define initValues(i, v) for(auto &i: v) cin >> i;
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
template <class T> void _print(multiset <T> v);
template <class T, class V, class Comp = less<T>> void _print(const map<T, V, Comp> v) {cerr << "[ ";for(auto i : v) {cerr << "{" << i.ff << ", " << i.ss << "} ";}cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}


void solve()
{
	ll a, b;
    cin >> a >> b;
    if(a<b) swap(a, b);
    
    if(a==b){
        cout << 0 << nline;
    }else{
        ll ans = 0;
        while(a>b){
            if((a%8==0) && (a/8)>=b) a /= 8;
            else if((a%4==0) && (a/4)>=b) a /= 4;
            else if((a%2==0) && (a/2)>=b) a /= 2;
            else {
                cout << -1 << nline;
                return;
            }
            ans++;
        }
        cout << ans << nline;
    }
}

signed main()
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
