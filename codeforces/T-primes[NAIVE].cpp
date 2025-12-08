#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        int div = 2;
        long long ent;
        cin >> ent;
        if(ent < 4){
             cout << "NO\n";
             continue;
            }
        for (long long j = 2; j * j <= ent; j++)
        {
            if(ent % j == 0) {
                div++;
                if(j != ent / j)div++;
            }
            if(div > 3){
             cout << "NO\n";
             break;            }
        }
        if(div == 3) cout << "YES\n";
        if(div < 3) cout << "NO\n";
    }
    return 0;
}