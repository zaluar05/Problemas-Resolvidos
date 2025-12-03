#include <stdio.h>
int main(){
    int num, hr;
    float money,sal;
    scanf("%d", &num);
    scanf("%d", &hr);
    scanf("%f", &money);
    sal = money * hr;
    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %.2f\n",sal);
    return 0;
}