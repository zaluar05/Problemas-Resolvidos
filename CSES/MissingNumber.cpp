#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll res_ideal = (n *(1 + n)) / 2;
    ll sum_atual = 0;
    for (ll i = 1; i < n;i++){
        ll ent;
        cin >> ent;
        sum_atual += ent;
    }
    cout << res_ideal - sum_atual << '\n';
    return 0;
}
    