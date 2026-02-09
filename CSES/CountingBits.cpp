#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    long long sum = 0;
    for (int k = 0; (1LL << k) <= n; k++) {
        long long cycle = 1LL << (k + 1);
        long long full_cycles = (n + 1) / cycle;
        sum += full_cycles * (1LL << k);

        long long remainder = (n + 1) % cycle;
        sum += max(0LL, remainder - (1LL << k));
    }
    cout << sum << '\n';
    return 0;
}