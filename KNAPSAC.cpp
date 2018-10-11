#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int x[33], a[22], m[22], n, b, best = -1, cnt=1;
// m[] trong luong
// a[] gia tri
void duyet(int i, int sum, int val)
{
    cout << "Lan thu "<<cnt<< ": i = " << i << "     "
         << "sum = " << sum << "     "
         << "val = " << val << "     best = " << best<<endl;
    cnt++;
    if (i > n)
    {
        if (val > best)
            best = val;
        return;
    }
    else
    {
        duyet(i + 1, sum, val);
    }
    cout << "Tra lai trang thai truoc do: i = " << i << ", sum = " << sum << ", val = " << val << endl;
    if (sum + m[i] <= b)
        duyet(i + 1, sum + m[i], val + a[i]);
}
main()
{
    freopen("knapsac.inp", "r", stdin);
    freopen("knapsac.out", "w", stdout);
    cin >> n >> b;
    for (int i = 1; i <= n; ++i)
    {
        cin >> m[i] >> a[i];
    }
    duyet(1, 0, 0);
    cout << best;
}

