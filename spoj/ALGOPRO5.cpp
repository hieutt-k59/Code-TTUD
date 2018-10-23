#include <iostream>
using namespace std;
unsigned long long _pow2(int n)
{
    unsigned long long rs = 1;
    for(int i = 0; i < n; i++) rs *= 2;
    return rs;
}

main()
{
    unsigned long long rs = 0;
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        rs += _pow2(i);
    }
    cout<<rs<<endl;
}