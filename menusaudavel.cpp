#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    int tamanho;
    cin >> quantidade >> tamanho;
    vector<vector<int>> matriz(quantidade, vector<int>(tamanho));
    int sum = 0;
    for (int i = 0; i < quantidade; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        int maior = INT_MIN;
        for (int j = 0; j < quantidade; j++)
        {
            if (matriz[j][i] > maior)
            {
                maior = matriz[j][i];
            }   
        }
        sum += maior;
    }
    cout << sum << '\n';
}