#include <stdio.h>
#include <math.h>

main()
{
	int numTest;
	int n;
	long long k;
	scanf("%d", &numTest);
	int r[numTest];
	for (int i = 0; i < numTest; ++i)
	{
		scanf("%d", &n);
		scanf("%lld", &k);
		r[i] = n % 2 == 0 ? ((long long)pow(k-1, n) + (k-1)) % 6971 : ((long long)pow(k-1, n) - (k-1)) % 6971;
	}
	for (int i = 0; i < numTest; ++i)
	{
		printf("%d\n", r[i]);
	}
}