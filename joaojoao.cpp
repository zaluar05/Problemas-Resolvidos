#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int x;
    for(int i= 0;i< 10;i++){
        cin >> x;
        s.insert(x);
    }  
    int tam = s.size();
    int res = 4 - tam;
    cout << res <<'\n';
}