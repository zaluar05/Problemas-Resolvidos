#include <bits/stdc++.h>
using namespace std;
int main(){
    //fazer dessa forma usando uma variavel boolena é bem bacana já que não precisa imprimir em varios lugares do código
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int quantidade;
    cin >> quantidade;
    for (int j = 0; j < quantidade; j++){
        string entrada1;
        string entrada2;
        cin >> entrada1 >> entrada2;
        
        if (entrada2.length() > entrada1.length()){
            cout << "nao encaixa" << endl;
            continue;
        }
        bool encontrou_diferenca = false;
        if (entrada1.length() == entrada2.length()){
            for (int i = 0; i < entrada1.length(); i++){
                if (entrada1[i] != entrada2[i]){
                    encontrou_diferenca = true;
                    break;
                }
            }
        } else {
            for (int i = 0; i < entrada2.length(); i++){
                if (entrada1[(entrada1.length() - entrada2.length()) + i] != entrada2[i]){
                    encontrou_diferenca = true;
                    break;
                }
            }
        }
        if (encontrou_diferenca){
            cout << "nao encaixa" << endl;
        } else {
            cout << "encaixa" << endl;
        }
    }
    return 0;
}