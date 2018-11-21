#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int n, k1, k2, X[202],result;
void lietke(int i, int L, int *arr)
{
    if (i == n)
    {
        int sum=0;
        if (L == 0 || L >= k1-1)
        {
            for (int i = 0; i < n; ++i)
            //     cout << X[i];
            if(X[i])sum+=arr[i];
            // cout << endl;
        }
        if(sum>result)result=sum;
        return;
    }
    X[i] = 1;
    if (i == 0 || L >= k1-1)
    {
        lietke(i + 1, 0,arr);
    }
    X[i] = 0;
    if (L < k2-1)
    {
        lietke(i + 1, L + 1,arr);
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {result=-1;
    cin >> n;
    cin >> k1;
    cin >> k2;
    int *arr=new int [n];
    for(int dem=0; dem<n; dem++){
        cin>>arr[dem];
    }
    lietke(0, 0,arr);
    cout<<result<<endl;
    }
}