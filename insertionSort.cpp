#include <stdio.h>
int a[1000000];
void insertionSort(int n)
{
	int t;
	for (int i = 2; i < n; i++)
	{
		int j = i;
		t = a[j];
		while(j> 0 && a[j-1] > t)
		{
			a[j] = a[j-1];
			j--;
		}
		a[j] = t;
	}
}

main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	insertionSort(n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}