#include <stdio.h>

int a[1000000];
int ta[1000000];

void merge(int l, int m, int r)
{
	int i = l;
	int j = m+1;
	int k = l;
    while((i < m+1) && (j < r+1))
    {
    	if(a[i] < a[j])
    	{
    		ta[k] = a[i];
    		i++;
    		k++;
    	}
    	else
    	{
    		ta[k] = a[j];
    		j++;
    		k++;
    	}
    }
	while(i < m+1)
	{
		ta[k] = a[i];
		i++;
		k++;
	}
	while(j < r+1)
	{
		ta[k] = a[j];
		j++;
		k++;
	}
	for (int i = l; i < r+1; i++)
	{
		a[i] = ta[i]; 
	}
}

void mergeSort(int L, int R)
{
	int M = (L+R)/2;
	if(L < R)
	{
		mergeSort(L, M);
	    mergeSort(M+1, R);
	    merge(L, M, R);
	}
	else return;
	
}

main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	mergeSort(0, n-1);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
}