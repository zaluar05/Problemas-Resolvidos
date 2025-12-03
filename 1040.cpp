#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,d,media,exame;
    cin >> a >> b >> c >> d;
    media = (a * 2 + b * 3 + c * 4 + d) / 10.0;
    printf("Media: %.1f\n",media);
    bool exam = false;
    if (media > 6.9){
        printf("Aluno aprovado.\n");
        return 0;
    }
    else if (media < 5.0){
        printf("Aluno reprovado.\n");
        return 0;
    }
    else {
        printf("Aluno em exame.\n");
        exam = true;
    }
    if (exam = true){
        cin >> exame;
        printf("Nota do exame: %.1f\n",exame);
        media = (exame + media) / 2;
        if (media >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",media);
        }
        else 
        printf("Aluno reprovado.\n");
    }
    return 0;
}