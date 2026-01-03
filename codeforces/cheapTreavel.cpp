#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int INF = -1e9;
using ll = long long;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m,a,b;
  cin >> n >> m >> a >> b;
  if(a*m <= b) {cout << a * n << '\n'; return 0;}
  if(n % m == 0){cout << (n / m) * b << '\n'; return 0;}
  if(a >= b){cout << round(n / m) * b + b << '\n'; return 0;}
  if(a < b && m > n){a*n > b ? cout << b << '\n' : cout << a * n << '\n'; return 0;}
  if(a < b){cout << (n / m) * b + ((n % m) * a) << '\n'; return 0;}
}