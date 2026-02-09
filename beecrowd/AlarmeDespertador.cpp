#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int hr_dormir,min_dormir,hr_acordar,min_acordar;
    while(cin >> hr_dormir >> min_dormir >> hr_acordar >> min_acordar){
            if (hr_dormir == 0 && min_dormir == 0 && hr_acordar == 0 && min_acordar == 0) break;
        
            hr_acordar *= 60;
            hr_dormir *= 60;

            int d = hr_dormir + min_dormir;
            int a = hr_acordar + min_acordar;
            if(a <= d){
                a += 1440;
            }
            cout << a - d << '\n';
        }
        return 0;
    }