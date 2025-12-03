#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    for (int i = 0; i < quantidade;i++){
        int qtd;
        cin >> qtd;
        int sum = 0;
        for (int j = 0;j < qtd;j++){
            string ent;
            cin >> ent;
            for (int k = 0; k < ent.size();k++){
                sum += ((ent[k] - 65) + k + j);
            }     
        }
        cout << sum << '\n';
    }
    return 0;
}