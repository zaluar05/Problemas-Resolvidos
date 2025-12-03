#include <bits/stdc++.h>
#include <string>
using namespace std;

bool verifica_dist(string num) {
  set<char> num_chars;
  for (auto m : num) {
    num_chars.insert(m);
  }
  if (num_chars.size() != num.size()) {
    return false;
  } else
    return true;
}
int main() {
  string num;
  cin >> num;
  int numero = stoi(num);
  int i = numero + 1;
  while (true) {
    string teste = to_string(i);
    if (verifica_dist(teste)) {
      cout << teste << '\n';
      return 0;
    } else
      i++;
  }
  return 0;
}
