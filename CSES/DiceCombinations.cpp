#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin >> n;
    vector<int> dp(n + 1);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= 6;j++){
            if(i + j <= n){
                dp[i + j] = (dp[i + j] + dp[i]) % MOD;
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}