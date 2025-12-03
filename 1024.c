#include <stdio.h>
int main(){
  int num,num2;
  float preco;
  scanf(" %d %d",&num,&num2);
  if (num == 1){
    preco = 4;
  }
  else if (num == 2){
    preco = 4.50;
  }
  else if  (num == 3){
    preco = 5;
  }else if  (num == 4){
    preco = 2;
  }
  else 
  preco = 1.50;
  printf("Total: R$ %.2f\n", preco * num2);
  return 0;
}
