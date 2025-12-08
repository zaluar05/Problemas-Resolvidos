#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n;
  cin >> n;
  vector<long long> notas = {100, 20, 10, 5, 1};
  long long sum = 0;
  for (auto m : notas) {
    sum += n / m;
    n = n % m;
  }
  cout << sum << '\n';
  return 0;
}
