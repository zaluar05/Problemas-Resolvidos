#include <stdio.h>
int cedula(int num, int *valor, int *quantidade){
    *quantidade = *valor / num;
    *valor -= *quantidade * num;
}
int main(){
    int valor, c100, c50, c20, c10, c5, c2, c1;
    scanf("%d", &valor);
    printf("%d\n",valor);
    cedula(100, &valor, &c100);
    cedula(50, &valor, &c50);
    cedula(20, &valor, &c20);
    cedula(10, &valor, &c10);
    cedula(5, &valor, &c5);
    cedula(2, &valor, &c2);
    cedula(1, &valor, &c1);
    printf("%d nota(s) de R$ 100,00\n",c100);
    printf("%d nota(s) de R$ 50,00\n",c50);
    printf("%d nota(s) de R$ 20,00\n",c20);
    printf("%d nota(s) de R$ 10,00\n",c10);
    printf("%d nota(s) de R$ 5,00\n",c5);
    printf("%d nota(s) de R$ 2,00\n",c2);
    printf("%d nota(s) de R$ 1,00\n",c1);
    return 0;
}