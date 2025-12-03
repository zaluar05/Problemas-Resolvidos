#include <bits/stdc++.h>
using namespace std;
int main(){
    float x,y;
    string quadrante;
    cin>>x>>y;
    if (x >= 0.1 && y < 0){
        quadrante = "Q4";
    }else if (y >= 0.1 && x == 0){
        quadrante = "Eixo Y";
    }else if (x >= 0.1 && y == 0){
        quadrante = "Eixo X";
    }else if (x >= 0.1 && y >= 0.1){
        quadrante = "Q1";
    }else if (x <= 0.1 && y >= 0.1){
        quadrante = "Q2";
    }else if (x < 0 && y < 0){
        quadrante = "Q3";
    }else{
    quadrante = "Origem";
    }
    cout<<quadrante<<endl;
    return 0;
}