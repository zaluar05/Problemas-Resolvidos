#include <stdio.h>
int main(){
    int idade,anos,meses,dias;
    scanf("%d",&idade);
    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;
    printf("%d ano(s)\n%d mes(s)\n%d dia(s)\n",anos,meses,dias);
    return 0;
}