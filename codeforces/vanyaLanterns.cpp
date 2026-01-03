#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,l;
  cin >> n >> l;
  vector<int> lanternas(n);
  for(int i = 0; i < n;i++)cin >> lanternas[i];
  int maior_dif = 0;
  sort(lanternas.begin(),lanternas.end());
  for(int i = 0; i < n - 1;i++){
    int dif_atual = lanternas[i + 1] - lanternas[i];
    maior_dif = max(maior_dif,dif_atual);
  }
  double raio = (double)maior_dif / 2;
  double res1 = 0, res2 = 0;
  if(lanternas[0] > raio) res1 = lanternas[0];
  if(l - lanternas[n - 1] > raio) res2 = l - lanternas[n-1];
  res1 = max(res1,res2);
  res1 = max(res1,raio);
  printf("%.10lf\n",res1);
  return 0;
}