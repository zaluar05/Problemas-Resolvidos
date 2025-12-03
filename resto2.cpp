#include <bits/stdc++.h>
using namespace std;
int main (int argc, char *argv[]) {
  map<char,int> cobaias;
  int n;
  std::cin >> n;
  int quantidade,total = 0;
  char entrada;
  for (int i = 0; i < n; i++) {
    cin >> quantidade >> entrada;
    total += quantidade;
    if(cobaias.count(entrada)){
      cobaias[entrada] += quantidade;
    }else cobaias.insert({entrada, quantidade});
  }
  for(auto l : cobaias){
    std::cout << l.first << l.second << '\n' << total << '\n';
  }
  return 0;
}
