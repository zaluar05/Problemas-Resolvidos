#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;

class Trie
{
public:
    struct Node
    {
        Node *zero;
        Node *um;

        Node()
        {
            zero = nullptr;
            um = nullptr;
        }
    };

    Node *raiz;

    Trie()
    {
        raiz = new Node();
    }

    void insert(ll num)
    {
        Node *curr = raiz;
        for (int i = 63; i >= 0; i--)
        {                              // iterar sobre os bits de num(msb -> lsb)
            bool bit = (num >> i) & 1; // verifica o bit i
            if (bit)
            {
                if (!curr->um)
                { // se o ponteiro for nulo, cria um novo nó
                    curr->um = new Node();
                }
                curr = curr->um;
            }
            else
            {
                if (!curr->zero)
                {
                    curr->zero = new Node();
                }
                curr = curr->zero;
            }
        }
    }

    ll query(ll num)
    {
        Node *curr = raiz;
        ll maxXor = 0;
        for (int i = 63; i >= 0; i--)
        {
            bool bit = (num >> i) & 1; // verifica o bit i
            if (bit)
            { // se o bit for 1, tenta ir para o zero
                if (curr->zero)
                {
                    maxXor |= (1LL << i); // atualiza o maxXor, é a mesma coisa que maxXor += 2^i (liga o bit i de maxXor)
                    curr = curr->zero;
                }
                else
                {
                    curr = curr->um;
                }
            }
            else
            {
                if (curr->um)
                {
                    maxXor |= (1LL << i); // atualiza o maxXor, é a mesma coisa que maxXor += 2^i
                    curr = curr->um;
                }
                else
                {
                    curr = curr->zero;
                }
            }
        }
        return maxXor;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;

    Trie trie;
    vector<ll> vet(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    if (n == 1)
    {
        cout << vet[0] << '\n';
        return 0;
    }
    if (n == 2)
    {
        vet[0] = vet[0] ^ vet[1];
        cout << vet[0] << '\n';
        return 0;
    }

    vector<ll> Prefix(n);
    Prefix[0] = vet[0];
    for (ll i = 1; i < n; i++)
    {
        Prefix[i] = Prefix[i - 1] ^ vet[i];
    }

    ll best = 0;
    trie.insert(0);
    for (ll i = 0; i < n; i++)
    {
        best = max(best, trie.query(Prefix[i]));
        trie.insert(Prefix[i]);
    }
    cout << best << '\n';
    return 0;
}