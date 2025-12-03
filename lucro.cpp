#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int qtd_dias;
    int custo_dia;
    while(cin >> qtd_dias >> custo_dia){
        vector<int> vet(qtd_dias);
        for(int i = 0; i < qtd_dias; i++) cin >> vet[i];
        int melhor = 0, sum = 0;
        for(int i = 0; i < qtd_dias; i++){
            int lucro = vet[i] - custo_dia;
            sum = max(lucro, sum + lucro);
            melhor = max(melhor,sum);
        }
        cout << melhor << '\n';
    }
}