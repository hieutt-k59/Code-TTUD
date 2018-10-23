#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int n;
int cnt = 0;
vector<int> x;
int k;
int i;
int mark[10002];
void duyethoanvi(int l)
{
    if (l == n)
    {
        cnt++;
        if (cnt == k)
        {
            for (int j = 0; j < n; ++j)
                cout << x[j] << " ";
        }
        return;
    }
    for (int j = 1; j <= n; ++j)
        if (!mark[j])
        {
            x[l] = j;
            mark[x[l]] = 1;
            duyethoanvi(l + 1);
            mark[x[l]] = 0;
        }
}

int main()

{
    cin >> n;
    unsigned long long a;
    cin>>a;
    cin >> k;
    x.resize(n);
    duyethoanvi(0);
    return 0;
}