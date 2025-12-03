#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long combustivel;
    cin >> combustivel;
    
    long long i = combustivel;
    long long sum = 0;
    long long nums = 0;
    
    while (nums < 10)
    {
        if (isPrime(i))
        {
            sum += i;
            nums++;
        }
        i++;
    }
    long long dist_mars = 60000000;
    long long tempo = dist_mars / sum;
    long long dias = tempo / 24;
    cout << sum << " km/h" << "\n";
    cout << tempo << " h / " << dias << " d\n";
    return 0;
}