#include <bits/stdc++.h>
using namespace std;
int main(){
    int quantidade;
    cin >> quantidade;
    set<string> poke;
    for (int i = 0;i<quantidade;i++){
        string entrada;
        cin >> entrada;
        poke.insert(entrada);
    }
    cout << "Falta(m) " << 151 - poke.size() << " pomekon(s)." << '\n';
    return 0;
}