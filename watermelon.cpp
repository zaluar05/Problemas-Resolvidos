#include <bits/stdc++.h>
using namespace std;
int main(){
   int w;
   cin >> w;
   string n = (w - 2) % 2 == 0 && (w - 2) != 0 ? "YES" : "NO";
   cout << n << '\n';
   return 0;
}