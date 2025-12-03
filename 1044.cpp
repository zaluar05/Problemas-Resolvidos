#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin >> a >> b;
if (a % b == 0 || b % a == 0){
    cout<<"Sao multiplos"<<endl;
    return 0;
}
else
cout<<"Nao sao multiplos"<<endl;
return 0;
}

