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
	int n; string s;
    cin >> n >> s;
    if(floor(sqrt(n))==ceil(sqrt(n))){
        int k = sqrt(n);
        frange(i, 1, k){
            frange(j, 1, k){
                debug((i-1)*k+j-1)
                if(i==1 || i==k || j==1 || j==k){
                    if(s[(i-1)*k+j-1]!='1'){
                        debug(s[(i-1)*k+j-1])  debug(j)
                        cout << "No" << nline;
                        return;
                    }
                }else{
                    if(s[(i-1)*k+j-1]!='0'){
                        cout << "No" << nline;
                        return;
                    }
                }
            }
        }
        cout << "Yes" << nline;
    }else{
        cout << "No" << nline;
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
