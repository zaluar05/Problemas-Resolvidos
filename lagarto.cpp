#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    map<string,set<string>> regras;
    regras["tesoura"] = {"papel", "lagarto"};
    regras["pedra"] = {"tesoura","lagarto"};
    regras["papel"] = {"pedra","spock"};
    regras["spock"] = {"tesoura","pedra"};
    regras["lagarto"] = {"spock","papel"};
    for(int i = 0; i < quantidade;i++){
        string entrada1,entrada2;
        cin >> entrada1 >> entrada2;
        if(entrada1 == entrada2) cout << "empate" <<'\n';
        else if(regras[entrada1].count(entrada2))cout << "rajesh"<<'\n';
        else cout << "sheldon" <<'\n';
    }
    return 0;
}