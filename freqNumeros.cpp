#include <bits/stdc++.h>
using namespace std;
int main() {
  int quantidade;
  cin >> quantidade;
  map<int, int> nums;
  for (int i = 0; i < quantidade; i++) {
    int entrada;
    cin >> entrada;
    if (nums.count(entrada)) {
      nums[entrada]++;
    } else {
      nums.insert({entrada, 1});
    }
  }
  for (auto n : nums) {
    cout << n.first << " aparece " << n.second << " vez(es)" << endl;
  }
  return 0;
}
