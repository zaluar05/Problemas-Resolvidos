#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, w;
    cin >> n >> w;
    vector<int> pesos(n), valores(n);
    for(int i = 0; i < n; i++) cin >> pesos[i] >> valores[i];
    
    vector<long long> dp(w + 1, 0);
    for(int i = 0; i < n; i++){
        for(int j = w; j >= pesos[i]; j--){
            dp[j] = max(dp[j], dp[j - pesos[i]] + valores[i]);
        }
    }
    cout << dp[w] << "\n";
}