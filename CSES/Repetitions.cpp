#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string ent;
    cin >> ent;
    int melhor_seq = 0;
    int seq_atual = 1;
    for(int i = 0; i < ent.size() - 1;i++){
        if(ent[i] == ent[i + 1]){
            seq_atual++;
        }else{
            seq_atual = 1;
        }
        melhor_seq = max(seq_atual,melhor_seq);;
    }
    melhor_seq = max(seq_atual,melhor_seq);;
    cout << melhor_seq << '\n';
    return 0;
}