#include <bits/stdc++.h>
using namespace std;
int main() {
  int vet[] = {4, 7, 47, 74, 447, 474, 744, 774, 4477, 4447, 4774};
  string num;
  cin >> num;
  bool lucky = true;
  for (auto m : num) {
    if (m != '7' && m != '4') {
      lucky = false;
      break;
    }
  }
  if (lucky) {
    cout << "YES\n";
    return 0;
  }
  int numero = stoi(num);
  for (int m : vet) {
    if (numero % m == 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}
