#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int X[10000];
int n;
int cnt = 0;
vector <int> x;
int k;
int i;
// void duyet1(int i)
// {
//     if (i == n)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             printf("%d", X[j]);
//             printf(" ");
//         }
//         return;
//     }
//     for (int j = 0; j < 1; ++j)
//     {
//         X[i] = j;
//         duyet(i + 1);
//     }
// }

void duyet(int l, int p)
{
    // cout << "duyet " << l << " " << p << endl;
    // l = chieu sau
    if (cnt > k){
        return;
    }
    if (l == n)
    {
        ++cnt;
        if (cnt == k)
        {
            for (int j = 0; j < n; ++j)
            {
                cout << x[j] << " ";
            }
        }
        return;
    }
    if (p + 1 < i)
    {
        x[l] = 0;
        duyet(l + 1, p + 1);
    }
    x[l] = 1;
    duyet(l + 1, 0);
}

int mark[10002];
void duyethoanvi(int l){
    if (l == n){
        for (int j = 0;j<n;++j) cout<<x[j]<<" ";
        cout<<endl;
        return;
    }
    for(int j = 1; j<= n;++j) if (!mark[j]){
        x[l] = j;
        mark[x[l]]=1;
        duyethoanvi(l+1);
        mark[x[l]] = 0;
    }
}

int main()

{
    cin >> n;
    x.resize(n);
    cin >> k;
    cin >> i;
    duyet (0, 0);
    return 0;
}