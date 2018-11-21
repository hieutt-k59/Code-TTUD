#include <bits/stdc++.h>

using namespace std;

int N, C;
long long x[123456];

void swap(double a, double b)
{
    double temp = a;
    a = b;
    b = temp;
}

int partion(long long *p, int L, int R, int indexPivot)
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

long long int getInt(){
    char c;
    long long int d = 0;
    while((c=getchar()) >= '0' && c <= '9')
        d = d*10 + (long long int)(c-48);
    return d;
}

void quickSort(long long *p, int L, int R)
{
    int index = (L+R)/2;
    index = partion(p, L, R,index);
    if(L < index) quickSort(p, L, index-1);
    if(index < R) quickSort(p, index+1, R);
}

bool f(long long S)
{
    int cnt = 0;
    int cntEqual = 0;
    long temp = x[0];
    for(int i = 1; i < N; i++)
    {
        if(x[i]-temp >= S)
        {
            // if(x[i]-temp == S) cntEqual++;
            temp=x[i];
            cnt++;
        }
    }
    return (cnt == C-1)? true : false;
}

main()
{
    int t;

    // freopen("input.txt", "r", stdin);
    cin>>t;
    for(int testcase = 1; testcase <= t; testcase++)
    {
        cin>>N>>C;
        for(int i = 0; i < N; i++)
        {
            cin>>x[i];
        }
        sort(x, x + N);
        for (int i = 0; i < N; i++) cout << x[i] << " ";
        cout<<endl;
        long long l = 0, r = x[N - 1], mx = -1;
        while(l < r){
            int m = l + (r - l)/2;
            if(f(m)){
                if(m > mx){
                    mx = m;
                }
                l = m + 1;
            }
            else r = m;
        }
        // for(int i = 1; i <= 1000; i++)
        // {
        //     if(f(i)){
        //         ans = i;
        //     }
        // }
        cout << mx << endl;
        // if(f(3)) cout << "OK";
        // else cout << "Smt went wrong :("<<endl;
    }
}
