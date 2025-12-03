#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n, int &contador){
    contador++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n-1, contador) + fibonacci(n-2, contador);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ent;
    cin >> ent;
    while(ent--){
        int n;
        cin >> n;
        int contador = 0;
        int resultado = fibonacci(n, contador);
        cout << "fib(" << n << ") = " << contador - 1 << " calls = " << resultado  << "\n";
    }
    return 0;
}