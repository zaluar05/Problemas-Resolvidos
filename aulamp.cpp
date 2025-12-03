#include <bits/stdc++.h>
using namespace std;

#define linhas 4
#define colunas 4
int matriz[linhas][colunas];

void inicializa(int matriz[linhas][colunas]){
    for(int i = 0; i < linhas;i++){
        for(int j = 0; j < colunas;j++){
            matriz[i][j] = 0;
        }
    }
}
void imprime(int matriz[linhas][colunas]){
     for(int i = 0; i < linhas;i++){
        for(int j = 0; j < colunas;j++){
            cout << matriz[i][j];
        }
        cout << '\n';
    }
}
void dps(int linha,int coluna,int matriz[linhas][colunas]){
    if(linha < 0 || linha > linhas || coluna < 0 || coluna > colunas || matriz[linha][coluna] == 1){
        return;
    }
    matriz[linha][coluna] = 1;
    dps(linha + 1,coluna,matriz);
    dps(linha - 1,coluna,matriz);
    dps(linha,coluna + 1,matriz);
    dps(linha,coluna - 1,matriz);
}
int main(){
    inicializa(matriz);
    imprime(matriz);
    dps(linhas,colunas,matriz);
    imprime(matriz);
}
