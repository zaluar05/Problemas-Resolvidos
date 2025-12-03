#include <stdio.h>  
int main(){
    int a,b,c,maior;
    int vetor[3];
    scanf("%d %d %d",&a, &b, &c);
    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;
    maior = a;
    for(int i = 0; i < 3; i++){
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
    }
    printf("%d eh maior\n", maior);
    return 0;
}