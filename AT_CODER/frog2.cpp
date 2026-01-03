#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int INF = 1e9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> valores(n);
    for(int i = 0; i < n;i++) cin >> valores[i];
    
    vector<int> dp(n,INF);
    dp[0] = 0;
    for(int i = 0; i < n;i++){
        for(int j = 1; j <= k;j++){
            if(i + j < n){
                dp[i + j] = min(dp[i + j], dp[i] + abs(valores[i + j] - valores[i]));
            }
        }
    }
    // for(auto m : dp){
    //     cout << m << ' ';
    // }
    // cout << endl;
    cout << dp[n - 1] << '\n';
    return 0;
}