#include <bits/stdc++.h>
using namespace std;
int main(){
    int num_casas,num_entregas;
    cin >> num_casas >> num_entregas;
    vector<int> casas(num_casas);
    vector<int> entregas(num_entregas);
    for (int i = 0; i < num_casas;i++){
        cin >> casas[i];
    }
    for (int i = 0; i < num_entregas;i++){
        cin >> entregas[i];
    }
    int casa_atual = 0;
    int moves = 0;
    for (int i = 0; i < num_entregas;i++){
        for (int j = 0; j < num_casas;j++){
            if(entregas[i] == casas[j]){
                moves += abs(j - casa_atual);
                casa_atual = j;
                break;
            }
        }
    }
    cout << moves << '\n';
    return 0;
}