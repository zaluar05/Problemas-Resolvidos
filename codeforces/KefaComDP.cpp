#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int q;
  cin >> q;
  vector<int> seq(q);
  for (int i = 0; i < q; i++) {
    cin >> seq[i];
  }
  vector<int> dp(q);
  for (int i = 0; i < q; i++) {
    dp[i] = seq[i];
    for (int j = 0; j < i; j++) {
      if (seq[j] < seq[i]) {
        dp[i] = max(dp[i], dp[j] + seq[i]);
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < q; i++) {
    ans = max(ans, dp[i]);
  }
  cout << ans << '\n';
  return 0;
}