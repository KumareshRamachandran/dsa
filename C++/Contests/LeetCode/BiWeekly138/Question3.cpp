#include<bits/stdc++.h>

using namespace std;
bool isPalin(string s){
    int left = 0, right = s.size()-1;
    int val[10] = {0};
    while(left<right){
        val[s[left++]-'0']++;
        val[s[right--]-'0']--;
    }
    int cnt = 0;
    for(auto i: val) cnt += abs(i);
    return cnt == 0;
}

long long countGoodIntegers(int n, int k) {
        int l, r;
        if(n==1){
            l = 0, r = 9;
        }else if(n==2){
            l = 10, r = 99;
        }else if(n==3){
            l = 100, r = 999;
        }else if(n==4){
            l = 1000, r = 9999;
        }else if(n==5){
            l = 10000, r = 99999;
        }else if(n==6){
            l = 100000, r = 999999;
        }else if(n==7){
            l = 1000000, r = 9999999;
        }else if(n==8){
            l = 10000000, r = 99999999;
        }else if(n==9){
            l = 100000000, r = 999999999;
        }
        
        return 0;
    }

signed main()
{
    cout << isPalin("01110");
	return 0;
}
