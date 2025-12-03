#include <bits/stdc++.h>

typedef struct node
{
    int number;
    node *next;
}node;

int main(int argc,char *argv[]){
    
    node *list = NULL;
    
    for (int i = 1; i < argc;i++){
        
        int number = atoi(argv[i]);

        node *n = (node*)malloc(sizeof(node));
        if (n == NULL){
            return 1;
        }
        n->number = number; //(*n).number = 1;
        n->next = NULL;
        n->next = list;
        list = n;
    }
    node *ptr = list;
    while(ptr != NULL){
        printf("%i\n",ptr->number);
        ptr = ptr->next;

    }
    ptr = list;
    while (ptr != NULL)
    {
        node *temp = ptr->next;
        free(ptr);
        ptr = temp;
    }
    return 0;
}
//dá para fazer linked lists em um loop? memoria não é continua; | dá sim.
/*o while é uma solução mais simples. dá para fazer da maneira acima.
já com for fica assim;
for (node *ptr = list; ptr != NULL; ptr = ptr->next){
}
*/
//não dá para usar binary search