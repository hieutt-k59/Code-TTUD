
#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int n, k1, k2, X[202];

void lietKe(int i, int L)
{
	if(i == n)
	{
		if(L == 0 || L>=k1)
		{
			for(int i =0; i < n; i++) cout<<X[i];cout<<endl;
		}
		return;
	}
	//int &ans = f[i][L];
	X[i] = 0;
	if(i==0 || L >=k1) lietKe(i+1,0);
	X[i] = 1;
	if(L<k2) lietKe(i+1, L+1);
}

main()
{
	cin>>n>>k1>>k2;
	lietKe(0,0);
}