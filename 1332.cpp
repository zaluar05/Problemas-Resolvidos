#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> vec = {"one","two","three"};
    string entrada;
    int quantidade;
    cin >> quantidade;
    for (int i = 0; i < quantidade;i++){
        int contador = 0;
        cin >> entrada;
        if (entrada.size() == 5){
            for(int j = 0;j < entrada.size();j++){
                if(entrada[j] == vec[2][j]){
                    contador += 1;
                }
            }
                if (contador >= 4){
                    cout << '3' << '\n';
                }
        }
         else{
            int cont1 = 0;
            int cont2 = 0;
            for(int j = 0; j < 3;j++){
                if(entrada[j] == vec[0][j]){
                    cont1 += 1;
                }
                if(entrada[j] == vec[1][j]){
                    cont2 += 1;
                }
            }
        
        if(cont1 >= 2){
            cout << '1' << '\n';
        }else if(cont2 >= 2){
            cout << '2' << '\n';
        }
        }

    }
    return 0;
}