#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int INF = -1e9;
using ll = long long;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, t;
  cin >> n >> t;
  vector<ll> minutos(n);
  for (ll i = 0; i < n; i++)
    cin >> minutos[i];
  vector<ll> dp(t + 1, 0);
  for (ll i = 0; i < n; i++) {
    for (ll j = t; j >= minutos[i]; j--) {
      if (dp[j - minutos[i]] != INF) {
        dp[j] = max(dp[j], dp[j - minutos[i]] + 1);
      }
    }
  }
  cout << dp[t] << '\n';
  return 0;
}
