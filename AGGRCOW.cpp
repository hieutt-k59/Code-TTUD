#include <iostream>

using namespace std;

int N, C;
int x[1000000000];

void swap(double a, double b)
{
    double temp = a;
    a = b;
    b = temp;
}

int partion(int *p, int L, int R, int indexPivot)
{
    int pivot = p[indexPivot];
    swap(p[indexPivot], p[R]);
    int storedIndex = L;
    for(int i = L; i < R; i++)
    {
        if(p[i] < pivot)
        {
            swap(p[storedIndex], p[i]);
            storedIndex++;
        }
    }
    swap(p[storedIndex], p[R]);
    return storedIndex;
}
void quickSort(int *p, int L, int R)
{
    int index = (L+R)/2;
    index = partion(p, L, R,index);
    if(L < index) quickSort(p, L, index-1);
    if(index < R) quickSort(p, index+1, R);
}

int f(int S)
{
    int cnt = 0;
    int temp = x[0];
    for(int i = 1; i < N; i++)
    {
        if(x[i]-temp >= S)
        {
            temp=x[i];
            cnt++;
        }
    }
    return (cnt >= C)? 1 : 0;
}

main()
{
    int t;

    freopen("input.txt", "r", stdin);
    cin>>t;
    for(int testcase = 1; testcase <= t; testcase++)
    {
        cin>>N>>C;
        for(int i = 0; i < N; i++)
        {
            cin>>x[i];
        }
        quickSort(x, 0, N-1);
        // for (int i = 0; i < N; i++) cout << x[i] << " ";
        // cout<<endl;
        int L = 1, R = 1000000000, ans = 0;
        while (L <= R)
        {
            int M = (L + R) / 2;
            if (f(M))
            {
                ans = M;
                L = M + 1;
            }
            else
                R = M - 1;
        }
        cout << ans;
    }
}
