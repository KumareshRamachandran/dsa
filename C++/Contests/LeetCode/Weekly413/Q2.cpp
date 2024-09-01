#include<bits/stdc++.h>

using namespace std;

vector<int> resultsArray(vector<vector<int>>& queries, int k) {
    priority_queue<int> pq;
    vector<int> ans;
    for(auto i: queries){
        int dis = i[0]+i[1];
        pq.push(dis);
        if(pq.size()>=k){
            while(pq.size()>k){
                pq.pop();
            }
            ans.push_back(pq.top());
        }else{
            ans.push_back(-1);
        }
    }
    return ans;
}

signed main()
{
    vector<vector<int>> quries = {{1,2},{3,4},{2,3},{-3,0}};
    vector<int> ans = resultsArray(quries, 2);
    for(int i: ans){
        cout << i<< " ";
    }
    cout << endl;
	return 0;
}
