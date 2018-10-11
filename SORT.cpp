
#include <iostream>
#include <cstdio>
using namespace std;

double getDouble()
{
    bool neg = false;
    double num = 0.0;
    char c;
    while((c = getchar()) != '-' && (c < '0' || c > '9') && c != '.');
    if(c == '-') neg = true;
    else num = (double)(c - 48);
    while((c = getchar()) >= '0' && c <= '9') num = num*10.0 + (double)(c-48);
    if(c != '.') return num * (neg? -1 : 1);
    double x = 0.1;
    while((c = getchar()) >= '0' && c <= '9')
    {
        num+=x*(double)(c-48), x/=10;
    }
    return num*(neg? -1 : 1);
}

void qs(float *p, int l, int r)
{
    int right = r;
    int left = l;
    float k = p[(l + r) / 2];
    while (left <= right)
    {
        while (p[left] < k)
            left++;
        while (p[right] > k)
            right--;
        if (left <= right)
        {
            if (left < right)
            {
                swap(p[left], p[right]);
            }
            left++;
            right--;
        }
    }
    if (l < right)
        qs(p, l, right);
    if (left < r)
        qs(p, left, r);
}

int main()
{
    int n;
    //cin>>n;
    scanf("%d", &n);
    float *a = new float[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = (float)getDouble();
    }

    qs(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", a[i]);
    }
    delete[] a;
    return 0;
}