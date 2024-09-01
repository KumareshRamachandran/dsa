#include<bits/stdc++.h>

using namespace std;

bool checkTwoChessboards(string coordinate1, string coordinate2) {
     int v1 = (coordinate1[0]-'a')+coordinate1[1]-'9';
     int v2 = (coordinate2[0]-'a')+coordinate2[1]-'9';
     if(((v1&1)&&(v2&1))||(!(v1&1)&&!(v2&1))) return true;
     else return false;
    }

signed main()
{

	return 0;
}
