#include <bits/stdc++.h>
using namespace std;

long long maiorX = INT_MIN, maiorY = INT_MIN;
long long menorX = INT_MAX, menorY = INT_MAX;

long long testa(long long x, long long y){
    long long newMaiorX = max(maiorX, x);
    long long newMenorX = min(menorX, x);
    long long newMaiorY = max(maiorY, y);
    long long newMenorY = min(menorY, y);
    return (newMaiorX - newMenorX + 1) * (newMaiorY - newMenorY + 1);  
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int kings, moves;
    cin >> kings >> moves;
    if(kings == 1){
        cout << 1 << '\n';
        return 0;
    }
    vector<pair<int, int>> pos;
    int x, y;
    while (cin >> x >> y)
    {
        x > maiorX ? maiorX = x : maiorX = maiorX;
        x < menorX ? menorX = x : menorX = menorX;
        y > maiorY ? maiorY = y : maiorY = maiorY;
        y < menorY ? menorY = y : menorY = menorY;
        pos.push_back({x, y});
    }
   long long resposta = 0;
   for(auto &[a,b] : pos){
        resposta = max(resposta,testa(a + moves,b + moves));
        resposta = max(resposta,testa(a + moves,b - moves));
        resposta = max(resposta,testa(a - moves,b + moves));
        resposta = max(resposta,testa(a - moves,b - moves));
   }
   long long difX = maiorX - menorX + 1;
   long long difY = maiorY - menorY + 1;
   for (int i = 0; i <= moves; i++)
   {
     resposta = max(resposta, (difX + i) * (difY + (moves - i)));
   }
   cout << resposta << '\n';
   return 0;
}