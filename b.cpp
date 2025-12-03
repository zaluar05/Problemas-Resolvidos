#include <bits/stdc++.h>
using namespace std;
int main(){
    int entrada;
    cin >> entrada;
    for (int  i = 0; i < entrada; i++)
    {
      int tamanho;
      cin >> tamanho;
      vector<int> vet;
      for (int i = 0; i < tamanho; i++)
      {
        int entrada2;
        cin >>  entrada2;
        if(entrada2 > 0){
            vet.push_back(entrada2);
        }
      }
      int menor = vet[0] + vet[1];
      for (int i = 0; i < tamanho - 1; i++)
      {
        int soma = vet[i] + vet[i+1];
        menor = min(menor,soma); 
      }
      
      cout << menor << '\n';
    }
}