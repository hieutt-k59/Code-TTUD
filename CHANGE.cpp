#include <iostream>
#include <bits/stdc++.h>
/*
n;
ans = 0
while n khac 0:
    k = max{ai | ai <= n}
    n-= k
    ans++
return ans
*/
using namespace std;
main()
{
    int n;
    cin>>n;
    int k = 1000 -n;
    // cout<<k;
    // vector<int> a;
    int ans = 0;
    // a.push_back(500);
    // a.push_back(100);
    // a.push_back(50);
    // a.push_back(10);
    // a.push_back(5);
    // a.push_back(1);
    int a[6] = {500, 100, 50, 10, 5, 1};
    // cout<<a[7]<<endl;
    // for(int i = 0; i < 6; i++)
    // {
    //     cout<<a[i]<< " ";
    // }
    // cout<<endl;
    for(int i = 0; i < 6; i++)
    {
        while(a[i] <= k) 
        {
            k -= a[i];
            ans++;
        }
    }
    cout<<ans;
}