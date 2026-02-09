#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 5;

class tree
{
public:
    struct No
    {
        vector<No *> filhos;
        int index;
    };

    No *raiz;

    tree()
    {
        raiz = new No;
        raiz->index = 1;
    }

    bool insert(int chefe, int i, No *inicial)
    {
        No *aux = inicial;
        if (aux->index == chefe)
        {
            No *novo = new No;
            novo->index = i;
            aux->filhos.push_back(novo);
            return true;
        }
        for (auto f : aux->filhos)
        {
            if (insert(chefe, i, f))
            {
                return true;
            };
        }
        return false;
    }
    void print(No *inicial, int profundidade = 0)
    {
        No *aux = inicial;
        for (int i = 0; i < profundidade; i++)
        {
            cout << "  "; // 2 espaços por nível
        }
        cout << aux->index << '\n';
        if (aux->filhos.size() > 0)
        {
            for (auto f : aux->filhos)
            {
                print(f, profundidade + 1);
            }
        }
    }
    int subor(No *inicial)
    {
        No *aux = inicial;
        int sub = 0;
        if (aux->filhos.size() == 0)
            return 0;
        else
        {
            sub += aux->filhos.size();
        }
        for (auto i : aux->filhos)
        {
            sub += subor(i);
        }
        return sub;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    tree arv;

    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int ent;
        cin >> ent;
        arv.insert(ent, i, arv.raiz);
    }

    vector<int> res;
    res.push_back(arv.subor(arv.raiz));
    for (auto i : arv.raiz->filhos)
    {
        res.push_back(arv.subor(i));
    }
    int diff = n - res.size();

    bool prim = true;
    if (diff > 0)
    {
        for (auto l : res)
        {
            if (prim)
            {
                cout << l;
                prim = false;
            }
            else
            {
                cout << ' ' << l;
            }
        }
        for (int i = 0; i < diff; i++)
        {
            cout << ' ' << 0;
        }
    }
    else
    {
        for (auto l : res)
        {
            if (prim)
            {
                cout << l << ' ';
                prim = false;
            }
            else
            {
                cout << ' ' << l;
            }
        }
    }
    cout << '\n';
}