#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    double res = (pow((1+sqrt(5))/2,n) - pow((1-sqrt(5))/2,n)) / sqrt(5);
    printf("%.1lf\n",res);
    return 0;
}