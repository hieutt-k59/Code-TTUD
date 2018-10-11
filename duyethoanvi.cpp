#include <stdio.h>
int x[10000];
int n;
int k;
int mark[10002];
int cnt = 0;
void duyethoanvi(int l){
	if (l == n){
		cnt++;
		if(cnt == k)
		{
			for (int j = 0;j<n;++j) printf("%d ", x[j]);
			printf("\n");
		}
		return;
	}
		for(int j = 1; j<= n;++j) if (!mark[j]){
		x[l] = j;
		mark[x[l]]=1;
		duyethoanvi(l+1);
		mark[x[l]] = 0;
	}
}
main()
{
	scanf("%d", &n);
	scanf("%d", &k);
	duyethoanvi(0);
	if(cnt < k) printf("-1");
}