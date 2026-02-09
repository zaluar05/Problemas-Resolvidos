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
    if(n == 1){
        cout << 1 << '\n';
        return 0;
    }
    if(n <= 3){
        cout << "NO SOLUTION\n";
        return 0;
    }
    for(ll i = 2; i <= n;i += 2){
        if(i == 2){
            cout << i;
            continue;
        }else{
            cout << " " << i;
        }
    }
    for(ll i = 1; i <= n;i += 2){
        cout << " " << i;
    }
    cout << '\n';
    return 0;
}