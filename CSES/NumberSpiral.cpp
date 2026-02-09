#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll cases, x, y;
    cin >> cases;
    for (ll k = 0; k < cases; k++)
    {
        cin >> y >> x;
        ll maior = max(y, x);
        ll menor = min(y, x);
        ll diagonal;
        if (maior % 2 == 0)
        {
            if (y == maior)
                diagonal = maior * maior - (x - 1);
            else
                diagonal = (maior - 1) * (maior - 1) + y;
        }
        else
        {
            if (x == maior)
                diagonal = maior * maior - (y - 1);
            else
                diagonal = (maior - 1) * (maior - 1) + x;
        }
        cout << diagonal << '\n';
    }
    return 0;
}