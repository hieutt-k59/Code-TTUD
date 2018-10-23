/*
 * 1(1,1)
 * 2(1,1)
 * 3(1,1)
 * 4(2,2)
 * 5(1,1)
 * 6(2,2)
 * 7(2,1)
 * 8(2,1)
 * 9(3,3)
 * Doi menh gia max cho den khi 5*10^c <= x* <= 10^(c+1)
 * moi chu so cua x so voi bang liet ke -> ket qua
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int _pow(int a, int n)
{
    for(int i = 0; i < n; i++) a*=10;
    return a;
}

main()
{
    pair<int,int> a[10];
    a[0] = make_pair(0,0);
    a[1] = make_pair(1,1);
    a[2] = make_pair(1,1);
    a[3] = make_pair(1,1);
    a[4] = make_pair(2,2);
    a[5] = make_pair(1,1);
    a[6] = make_pair(2,2);
    a[7] = make_pair(2,1);
    a[8] = make_pair(2,1);
    a[9] = make_pair(3,3);
    int w, c;
    cin>>w>>c;
    int cnt = 0;
    if(w%1000) cout<<0<<endl;
    int l = _pow(5, c);
    int r = _pow(1, c+1);
    while(w > r)
    {
        w -= l;
        cnt++;
    }
}