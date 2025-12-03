#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    float d,vf,vd;
    while (cin >> d >> vf >> vd)
    {
        float hipo = pow(d,2) + 12 * 12;
        hipo = sqrt(hipo);
        char res = hipo/vd <= 12/vf ? 'S' : 'N';
        cout << res << '\n';
    }
    return 0;
}