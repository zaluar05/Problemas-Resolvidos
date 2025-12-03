#include <bits/stdc++.h>
using namespace std;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n, m;
  while(cin >> n >> m && n != 0 && m != 0){
    vector<vector<int>> matriz;  
    for(int i = 0; i < n; i++){
        vector<int> linha;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            linha.push_back(x);
        }
        matriz.push_back(linha);
    }
    int casos;
    cin >> casos;
    while(casos--){
        int x, y;
        cin >> x >> y;
        int ans = 0;
        for(int i = 0; i < n; i++){
            auto it = lower_bound(matriz[i].begin(), matriz[i].end(), x);
            if(it == matriz[i].end()) continue;
            int indice = it - matriz[i].begin();
            if(matriz[i][indice] > y) continue;
            int temp = 1;
            for(int j = i + 1; j < n; j++){
                int col = indice + (j - i);
                if(col >= m) break;
                if(matriz[j][col] > y) break;
                temp++;
            }
            ans = max(ans, temp);
        }
        cout << ans << "\n";
    }
    cout << "-\n";
  }
    return 0;
}