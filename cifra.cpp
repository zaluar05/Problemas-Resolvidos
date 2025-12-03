#include <bits/stdc++.h>
using namespace std;
int main(){
    char a = 'a';
    char b = 'b';
    a = ((a - 'a' + 3) % 26) + 'a';
    b = ((b - 'a' + 3) % 26) + 'a';
    cout << a << b << endl;
}