#include <bits/stdc++.h>
using namespace std;

int main()
{
  int q;
  cin >> q;
  int contador = 0;
  while (q--)
  {
      int cont1 = 0;
      int cont0 = 0;
      int b = 3;
      while (b--)
      {
          int ent;
          cin >> ent;
          ent == 1 ? cont1++ : cont0 ++;
     }
     if(cont1 > cont0) contador ++;
  }
    cout << contador << '\n';
    return 0;
}