#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> valores(n);
    for(int i = 0;i<n;i++) cin >> valores[i];
    vector<int> dp(n);
    for (int i = 0; i < n; i++)
    {
        dp[i] = valores[i];
        for (int j = 0; j < i; j++)
        {
            if(dp[j] <= dp[i]){
                dp[i] = max(dp[i],dp[j] + valores[i]);
            }
        }
    }
    cout << dp[n - 1] << endl;
    for(int i = 0;i<n;i++) cout << dp[i] << " ";
    cout << endl;
    sort(dp.begin(),dp.end());
    for(int i = 0;i<n;i++) cout << dp[i] << " ";
    cout << endl;
    cout << dp[n - 1] << endl;
}