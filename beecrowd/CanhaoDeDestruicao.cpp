#include <bits/stdc++.h>
using namespace std;
using ll = long long;

vector<int> poder;
vector<int> pesos;

int projeteis;

int solve(int capacidade, int i){
    if(i == projeteis || capacidade < 0) return 0;
    int res = solve(i+1,capacidade);
    for(int i = 0; i < poder.size();i++){
        res = max(
            res,
            poder[i] + solve(i+1,capacidade - pesos[i])
        );
    }
    return res;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int casos;
    cin >> casos;
    while(casos--){
        cin >> projeteis;
        for(int i = 0; i < projeteis;i++){
            int p,w;
            cin >> p >> w;
            poder.push_back(p);
            pesos.push_back(w);
        }
        int capacidade,resistencia;
        cin >> capacidade >> resistencia;

        cout << solve(capacidade,0) << '\n';
    } 
}