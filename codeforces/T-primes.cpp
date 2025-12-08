#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        long long ent;
        cin >> ent;
        if (ent < 4) {
            cout << "NO\n";
            continue;
        }
        long long root = round(sqrt((double)ent));
        if (root * root == ent && is_prime(root)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}