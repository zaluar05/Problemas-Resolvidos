#include <stdio.h>
int main(){
    int valor;
    int quantidade[3];
    int tempo[] = {3600, 60, 1};
    scanf("%d", &valor);
    for(int i = 0; i < 3;i++){
        quantidade[i] = valor / tempo[i];
        valor = valor % tempo[i]; 
    }
    printf("%d:%d:%d\n",quantidade[0],quantidade[1],quantidade[2]);
    return 0;
}