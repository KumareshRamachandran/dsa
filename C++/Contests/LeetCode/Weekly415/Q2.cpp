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
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

long long maxScore(vector<int>& a, vector<int>& b) {
        int i0, i1, i2, i3;
        long long ans = 0;
        int n = b.size();
        i0 = 0, i1 = 1, i2 = n-2, i3 = n-1;
        long long fAns = 0;
        ans =   a[0]*1ll*b[i0]+
                a[1]*1ll*b[i1]+
                a[2]*1ll*b[i2]+
                a[3]*1ll*b[i3];
        fAns = ans;
        if(a[1]<a[2]){
            int di2 = i2, di3 = i3;
            while((i2>i1+1)){
                debug(i2)
                ans = ans - a[2]*1ll*b[i2] + a[2]*1ll*b[i2-1];
                if(fAns<ans) fAns = ans, di2 = i2-1;
                i2--;
            }
            i2 = di2;
            debug(make_pair(i0, i1)) debug(make_pair(i2, i3))
            while((i3>i2+1)){
                ans = ans - a[3]*1ll*b[i3] + a[3]*1ll*b[i3-1];
                debug(make_pair(a[2]*1ll*b[i2], a[2]*1ll*b[i2-1]))
                debug(make_pair(fAns, ans))
                if(fAns<ans) fAns = ans, di3 = i3-1;
                i3--;
            }
            i3 = di3;
        }else{
            int di1 = i1, di0 = i0;
            while((i1+1<i2)){
                ans = ans - a[1]*1ll*b[i1] + a[1]*1ll*b[i1+1];
                if(fAns<ans) fAns = ans, di1 = i1+1;
                i1++;
            }
            i1 = di1; 
            while((i0+1<i1)){
                ans = ans - a[0]*1ll*b[i0] + a[0]*1ll*b[i0+1];
                if(fAns<ans) fAns = ans, di0 = i0+1;
                i0++;
            }
            i0 = di0;
        }
        return fAns;
    }

void solve()
{
    vi a = {3,2,5,6};
    vi b = {2,-6,4,-5,-3,2,-7};
    cout << maxScore(a, b) << nline;

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