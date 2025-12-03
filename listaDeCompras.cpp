#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    cin.ignore(); //usar .ignore para limpar o buffer
    for (int i = 0; i < quantidade; i++)
    {
        string entrada;
        set<string> lista;
        getline(cin,entrada); //pega a linha como espaços
        stringstream ss(entrada); //funciona como um cin, só que ao invés de ler do teclado, le de uma string que já tenho na memória
        while (ss >> entrada)
        {
            lista.insert(entrada);
        }
        bool primeiro = true;
        for(const auto& m : lista){
            if(primeiro){
            cout << m << ' ';
            }else cout << ' ' << m;
        }
        cout << '\n';
    }
    return 0;
}