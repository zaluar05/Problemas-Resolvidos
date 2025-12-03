#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<int> s;
    int tamanho;
    cin >> tamanho;
    for(int i = 0; i < tamanho;i++){
        int entrada;
        cin >> entrada;
        s.insert(entrada);
    }
    cout << s.size() << '\n';
    return 0;
}