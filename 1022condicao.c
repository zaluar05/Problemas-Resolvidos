#include <stdio.h>
#include <stdbool.h>

bool condicao(int a, int b, int c, int d){
    return ((b > c) && (d > a) && (c + d > b + a) && (c > 0) && (d > 0) && (a % 2 == 0));
}
    int main(){
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    printf(condicao(A,B,C,D) ? "Valores aceitos\n" : "Valores nao aceitos");
}