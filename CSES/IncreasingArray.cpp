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
    ll anterior;
    cin >> anterior;
    ll moves = 0;
    for(ll i = 0; i < n - 1;i++){
        ll ent;
        cin >> ent;
        if(ent < anterior){
            moves += anterior - ent;
            continue;
        }
        anterior = ent;
    }
    cout << moves << '\n';
    return 0;
}