#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade,tamanho_string;
    cin >> quantidade;
    cin.ignore(); //limpa o buffer do \n
    string codificar;
    for (int i = 0; i < quantidade;i++){
        getline(cin,codificar); //não precisa limpar buffer
        tamanho_string = codificar.size();
        for(int j = 0; j < tamanho_string;j++){
            if(codificar[j] >= 'A' && codificar[j] <= 'Z' || codificar[j] >= 'a' && codificar[j] <= 'z'){
                codificar[j] = codificar[j] + 3; 
            }
        }
        reverse(codificar.begin(),codificar.end());
        for (int k = tamanho_string/2;k < tamanho_string;k++){
            codificar[k] = codificar[k] - 1;
        }
        cout << codificar <<endl;
    }
    return 0;
}