#include <bits/stdc++.h>
using namespace std;
int main(){
    int larg, comp,cont = 0;
    cin >> larg >> comp;
    int celulas = larg * comp;
    vector<int> m(celulas);
    for(int i = 0; i < celulas -  1;i++) cin >> m[i];
    sort(m.begin(),m.end());
        while(m[0] < m[celulas - 1]){
            m[celulas -  1] -= 1;
            m[0]++;
            sort(m.begin(),m.end());
            cont ++;
        }
    cout  << cont << ' ' << cont * 10 << ' ' <<  m[celulas -  1] << '\n'; 
    return 0;
}