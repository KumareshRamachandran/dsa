#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, d, cnt = 0;
    cin >> n >> d;
    bool close = true;
    for(int i=0; i<n; i++){
        int value; cin >> value;
        if(value > d){
            if(close){
                cnt++;
                close = false;
            } 
        } else{
            if(!close){
                cnt++; close = true;
            }
        }
    }
    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t-->0){
        solve();
    }
    
    return 0;
}
