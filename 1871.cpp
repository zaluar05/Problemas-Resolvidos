#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(cin >> a >> b){
        int res = a+b;
        string resultado = to_string(res);
        auto it = remove(resultado.begin(),resultado.end(),'0');
        resultado.erase(it,resultado.end());
        cout << resultado << '\n';
    }
    return 0;
}