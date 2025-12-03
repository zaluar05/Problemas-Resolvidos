#include <bits/stdc++.h>
int main(){
  int codigo,nump;
  float valorp, total;
  std::cin >> codigo >> nump >> valorp;
  total = valorp * nump;
  std::cin >> codigo >> nump >> valorp;
  total += valorp * nump;
  printf("VALOR A PAGAR: R$ %.2f\n",total);
  return 0;
}
