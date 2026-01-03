#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int INF = -1e9;
using ll = long long;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
    int viagens, viagens_t, p1,pm;
    cin >> viagens >> viagens_t >> p1 >> pm;
    int ans = INT_MAX;
    int v = viagens;
    int res1 = round(viagens / p1);
    int res2 = INT_MAX;
    if(viagens % viagens_t == 0){
        res2 = round(viagens / viagens_t) * pm;
    }
    ans = min(res1,res2);
    cout << ans;
}