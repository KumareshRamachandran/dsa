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

void test()
{
    cout << 500 << nline;
    int t = 333;
    cout << 100 << nline;
	for(int i=1; i<=100; i++){
		cout << i << " ";
	}
	cout << nline;
    cout << 100 << nline;
	for(int i=100; i>0; i--){
		cout << i << " ";
	}
	cout << nline;
	int k = 100;
	while (t-->1)
	{
		if(t&1){
            cout << 100 << nline;
			for(int i=1; i<=100; i++){
				cout << i << " ";
			}
			cout << nline;
            cout << 100 << nline;
			for(int i=100; i>0; i--){
				cout << i << " ";
			}
			cout << nline;
			continue;
		}
        cout << 100 << nline;
		for(int i=100; i>0; i--){
			cout << k << " ";
		}
		cout << nline;
		k--;
		if(k==0) k = 100;
	}
}
void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mpp;
    int cnt = 0;
    for(auto &i: v){
        cin >> i;
        mpp[i]++;
        cnt = max(cnt, mpp[i]);
    }
    cout << n-cnt << nline;
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
		test();
	}
	return 0;
}
