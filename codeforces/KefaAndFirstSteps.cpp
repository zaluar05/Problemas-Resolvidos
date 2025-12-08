#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n == 0) {
        cout << 0 << '\n';
        return 0;
    }
    int ans = 1;
    int cur = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            cur++;
            ans = max(ans, cur);
        } else {
            cur = 1;
        }
    }
    cout << ans << '\n';
    return 0;
}