#include <bits/stdc++.h>
using namespace std;

class Main {
public:
    static bool canAliceWin(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for(int i: nums){
            if(i<=9) sum1++;
            else sum2++;
        }
        return sum1!=sum2;
    }
    static int nonSpecialCount(int l, int r) {
        int cnt = r - l + 1;
        for(int i=(int) ceil(sqrt(l)); i<ceil(sqrt(r)); i++){
            if(isPrime(i)) {
                cout << i << " ";
                cnt--;
            }
        }
        return cnt;
    }
    static bool isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        if (n <= 3) {
            return true;
        }

        if (n % 2 == 0 || n % 3 == 0) {
            return false;
        }

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }

        return true;
    }
    static bool helper(int i){
        int cnt = 1;
        for(int j=2; j<=(i/2); j++){
            if(i%j==0) {
                cnt++;
            }
        }
        return cnt == 2;
    }
};

int main() {
    // cout << Main::nonSpecialCount(5,7);
    cout << Main :: nonSpecialCount(2749,64224);
    return 0;
}
