#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c,res;
    cin >> a >> b >> c;
    res = ((a+b) *c) /2 ;
    cout<<fixed<<setprecision(1);
    if (a < b+ c && b < a + c && c < a + b){
        cout<<"Perimetro = "<< (a+b+c) <<endl;
        return 0;
    }
    else{
        cout<<"Area = "<< res <<endl;
    }
    return 0;
}