#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int casos;
    cin >> casos;
    for (int w = 0; w < casos; w++)
    {
        int a, b;
        char c;
        cin >> a >> c >> b;
        if (a == b)
        {
            cout << a * b << '\n';
        }
        else if (islower(c))
        {
            cout << a + b << '\n';
        }
        else
        {
            cout << b - a << '\n';
        }
    }
    return 0;
}