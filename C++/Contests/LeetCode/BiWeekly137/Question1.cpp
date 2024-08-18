#include<bits/stdc++.h>

using namespace std;

vector<int> resultsArray(vector<int>& nums, int k) {
    if(nums.size()==1 || k==1){
        return nums;
    }
    vector<int> v; int tCnt = 0, fCnt = 0;
    vector<bool> check(nums.size()); check[0] = nums[1]-nums[0] == 1 ? true : false;
    for(int i=1; i<nums.size()-1; i++){
        if(nums[i]==nums[i+1]-1) check[i] = true;
        else check[i] = false;
    }
    int left = 0, right = k-1;
    for(int i=0; i<right-1; i++){
        if(check[i]) tCnt++;
        else fCnt++;
    }
    while(right<nums.size()){
        if(check[right-1]==true) tCnt++;
        else fCnt++;
        // cout << tCnt << " -> " << fCnt << endl;
        if(fCnt==0){
            v.push_back(nums[right]);
        }else v.push_back(-1);

        if(check[left]==true) tCnt--;
        else fCnt--;
        left++; right++;
    }
    return v;
}

void solve()
{
    vector<int> temp = {3,2,3,2,3,2};
    vector<int> ans = resultsArray(temp, 2);
    for(auto i: ans){
        cout << i << '\n';
    }

}

int main()
{
	int t = 1;
	while (t--)
	{
		solve();
	}
	return 0;
}
