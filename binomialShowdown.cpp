#include <bits/stdc++.h>
using namespace std;

long long binomial(long long n, long long k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    
    if (k > n - k) k = n - k;
    
    long long resultado = 1;
    for (long long i = 0; i < k; ++i) {
        resultado *= (n - i);
        resultado /= (i + 1);
    }
    return resultado;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, k;
    while(cin >> n >> k && (n != 0 || k != 0)){
        long long resultado = binomial(n, k);
        cout << resultado << "\n";
    }
    return 0;
}