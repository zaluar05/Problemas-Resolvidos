#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada;
    string vogais;
    cin >> entrada;
    for (auto c : entrada){
        if (c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u'){
            vogais += c;
        }
    }
    string vogais_reversas = vogais;
    reverse(vogais_reversas.begin(),vogais_reversas.end());
    if(vogais_reversas == vogais){
        cout << 'S' << '\n';
    }else{
        cout << 'N' << '\n';
    }
    return 0;
}