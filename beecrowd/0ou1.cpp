#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    while(cin >> a >> b >> c){
        if(a == b && b == c){
            cout << "*\n";
        }else  if(b == a && c != b){
            cout << "C\n";
        }else if(b == c && a != b){
            cout << "A\n";
        }else{
            cout << "B\n";
        }
    }
    return 0;
}