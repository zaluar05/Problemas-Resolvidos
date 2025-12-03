#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<float> vetor(3);
    for (int i = 0; i < 3;i++){
        cin>>vetor[i];
    }
    //seria melhor ter usado variaveis 
    sort(vetor.begin(),vetor.end());
    if (vetor[2] >= vetor[1] + vetor[0]){
        cout<<"NAO FORMA TRIANGULO"<<endl;
        return 0;
    }if(pow(vetor[2],2) == pow(vetor[1],2) + pow(vetor[0],2)){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }if(pow(vetor[2],2) > (pow(vetor[1],2) + pow(vetor[0],2))){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }if(pow(vetor[2],2) < (pow(vetor[1],2) + pow(vetor[0],2))){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }if(vetor[2] == vetor[1] && vetor[1] == vetor[0]){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }else if(vetor[2] == vetor[1] || vetor[1] == vetor[0]){
        cout<<"TRIANGULO ISOSCELES"<<endl;}
    return 0;
}
    