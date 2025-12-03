#include <bits/stdc++.h>
using namespace std;

struct no {
  int destino;
  long long pesos;
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;

  vector<vector<no>> grafo;
  for (int i = 0; i < m; i++) {
    int a, b;
    long long c;
    cin >> a >> b >> c;
    grafo[a].push_back({b, c});
    grafo[b].push_back({a, c});
  }

  vector<bool> naARV(n + 1, false);
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>>
      pq;

  long long custoTotal = 0;
  int nosUsados = 0;

  pq.push({0, 1});

  while (!pq.empty()) {
    auto [pesos, u] = pq.top();
    pq.pop();

    if (naARV[u])
      continue;
    naARV[u] = true;
    custoTotal += pesos;
    nosUsados++;

    for (auto [v, w] : grafo[u]) {
      if (!naARV[v]) {
        pq.push({w, v});
      }
    }
  }
  if (nosUsados == n)
    cout << custoTotal << "\n";
  else
    cout << "IMPOSSIBLE\n";

  return 0;
}
