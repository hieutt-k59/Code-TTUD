#include <stdio.h>
#include <stdlib.h>
// long algo4(int *a, int n)
// {
//     long max = a[0];
//     int *s = (int *)malloc(n * sizeof(int));
//     s[0] = a[0];
//     max = s[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (s[i - 1] > 0)
//             s[i] = s[i - 1] + a[i];
//         else
//             s[i] = a[i];
//         max = max > s[i] ? max : s[i];
//     }
//     return max;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int *a = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("%ld",algo4(a, n));
//     free(a);
//     return 0;
// }                     
main()
{
    int S, n;
    scanf("%d", &n);
    scanf("%d", &S);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) 
        printf("%d ", a[i]);
        printf("\n");
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += a[j];
            if(sum/(j-i+1) <= S) cnt++;
        }
    }
    printf("%d", cnt);
} 