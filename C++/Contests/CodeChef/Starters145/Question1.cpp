#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int cubiod = a*b*c, cube = x*x*x;
    if(cube==cubiod) cout << "Equal";
    else if(cube>cubiod) cout << "Cube";
    else cout << "Cuboid";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
