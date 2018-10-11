#include <iostream>
using namespace std;
float pow1(float base, float ex);
float nth_root(float A, int n)
{
    const int K = 6;
    float x[K] = {1};
    for (int k = 0; k < K - 1; k++)
        x[k + 1] = (1.0 / n) * ((n - 1) * x[k] + A / pow1(x[k], n - 1));
    return x[K - 1];
}
float pow1(float base, float ex)
{
    if (base == 0)
        return 0;
    // power of 0
    if (ex == 0)
    {
        return 1;
        // negative exponenet
    }
    else if (ex < 0)
    {
        return 1 / pow1(base, -ex);
        // fractional exponent
    }
    else if (ex > 0 && ex < 1)
    {
        return nth_root(base, 1 / ex);
    }
    else if ((int)ex % 2 == 0)
    {
        float half_pow = pow1(base, ex / 2);
        return half_pow * half_pow;
        //integer exponenet
    }
    else
    {
        return base * pow1(base, ex - 1);
    }
}
int main()
{
    int m;
    long n;
    long k;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> n;
        cin >> k;
        if (n == 0)
        {
            cout << (int)k % 6791 << endl;
        }
        cout << ((int)(pow1((k - 1), n) + (k - 1) * pow1((-1), n))) % 6971 << endl;
    }
    return 0;
}