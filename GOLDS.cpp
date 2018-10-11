#include <stdio.h>
int m[22], n, M, cnt=0;
void duyet(int i, int sum)
{
    if (i > n)
    {
        cnt++;
        return;
    }
    else
    {
        duyet(i + 1, sum);
    }
    if (sum + m[i] <= M)
        duyet(i + 1, sum + m[i]);
}
main()
{
    scanf("%d", &n);
    scanf("%d", &M);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &m[i]);
    }
    duyet(1, 0);
    printf("%d", cnt);
}