#include <bits/stdc++.h>
using namespace std;
#define DIM 2

int tabuleiro[DIM][DIM];
int rainhas = 2;

void inicializaTabuleiro(int tabuleiro[DIM][DIM]){
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            tabuleiro[i][j] = 0;
        }
    }
}   
void imprimeTabuleiro(int tabuleiro[DIM][DIM]){
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void visitado(int l, int c){
    tabuleiro[l][c] = 1;
}
void desvisitado(int l, int c){
    tabuleiro[l][c] = 0;
}
void caminho(int linha, int coluna,int prof){
    if(prof == DIM){
        imprimeTabuleiro(tabuleiro);
        return;
    }
    for(int i = linha;i < DIM;i++){
        for(int j = coluna + 1;j < DIM;j++){
            visitado(i,j);
            caminho(i,j,prof + 1);
            desvisitado(i,j);
        }
        coluna = -1;
    }
}
int main(){
    caminho(0,-1,0);
    //colocaRainha(tabuleiro, 0, 0);
}