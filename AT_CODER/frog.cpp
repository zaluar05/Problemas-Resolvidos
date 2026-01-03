#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int INF = 1e9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> valores(n);
    for(int i = 0; i < n;i++) cin >> valores[i];
    
    if(n == 2){cout << abs(valores[0] - valores[1]) << '\n'; return 0;}

   vector<int> dp(n,INF);
   dp[0] = 0;
   for(int i = 0; i < n;i++){
    for(int j : {i + 1, i + 2}){
        if(j < n){
            dp[j] = min(dp[j], dp[i] + abs(valores[j] - valores[i]));
        }
    }
   }
    // for(auto m : dp){
    //        cout << m << ' ';
    //    }
    //     cout << endl;
    cout << dp[n - 1] << '\n';
}
