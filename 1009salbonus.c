#include <stdio.h>

int main()
{
    char nome[10];
    double sal, venda, pc;
    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &venda);
    pc = (venda * 15)/ 100;
    sal += pc;
    printf("TOTAL = %.2lf\n",sal);
    return 0;
}