#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    vector<int> par;
    vector<int> impar;
    for (int i = 0;i < quantidade;i++){
        int valor;
        cin >> valor;
        if(valor % 2 == 0){
            par.push_back(valor);
        }else{
            impar.push_back(valor);
        }
    }
    sort(par.begin(),par.end());
    sort(impar.begin(),impar.end());
    reverse(impar.begin(),impar.end());
    for(auto y : par){
        cout << y <<endl;
    }
    for(auto l : impar){
        cout << l <<endl;
    }
    return 0;
}