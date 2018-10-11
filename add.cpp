#include <stdio.h>

unsigned long long f(int n)
{
    if(n == 1) return 0;
    return (f(n - 1) + n*(n-1)/2)%1000000007;
}

main()
{
    // int q;
    // scanf("%d", &q);
    // for(int i = 0; i < q; i++)
    // {
        
    // }
    int n;
    scanf("%d", &n);
    int sum = f(n);
    // for(int i =0; i <=n; i++)
    // {
    //     sum += i*(n-i);
    // }
    printf("%d\n", sum);
}