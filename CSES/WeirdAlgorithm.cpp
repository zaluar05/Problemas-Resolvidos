#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9 + 5;

void solve(long long n){
    if(n == 1) return;
    if(n % 2 == 0){
        cout << " " << n / 2;
        solve(n / 2);
    }else{
        cout << " " << n * 3 + 1;
        solve(n * 3 + 1);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    cout << n;
    solve(n);
    cout << '\n';
    return 0;
}