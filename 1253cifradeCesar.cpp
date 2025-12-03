#include <bits/stdc++.h>
using namespace std;
int main(){
    int qtd;
    cin >> qtd;
    for (int i = 0; i< qtd;i++){
        string entrada;
        int avanco;
        cin >> entrada >> avanco;
        for (int j = 0; j < entrada.size();j++)
        {
            entrada[j] = ((entrada[j] - 'A' + avanco) % 26) + 'A';
        }
        cout << entrada <<endl;
    }
    return 0;
}