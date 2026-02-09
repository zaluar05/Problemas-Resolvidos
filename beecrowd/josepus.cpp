#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int josephus(int n, int k){
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for (int w = 1; w <= casos; w++)
    {
        int tam_vet, intervalo;
        cin >> tam_vet >> intervalo;
        cout << "Case " << w << ": " << josephus(tam_vet,intervalo) << '\n';
    }
    return 0;
}