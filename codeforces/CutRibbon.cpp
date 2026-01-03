#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll tamanho;
    cin >> tamanho;
    vector<int> pecas(3);
    for(int i = 0;i<3;i++) cin >> pecas[i];
    vector<int> dp(tamanho,0);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j > 0; j--)
        {
            if(pecas[j] > tamanho){
                dp[j] = 0;
            }
            dp[j] = max(dp[j],tamanho - dp[j]);
        }
    }
    cout << dp[tamanho - 1] << endl;
}