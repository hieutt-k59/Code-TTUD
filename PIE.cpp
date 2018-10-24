#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;
int N, F;
double r[10000];

int f(double S)
{
    int cnt = 0;
    for(int i = 0; i < N; i++) cnt += (M_PI*r[i]*r[i])/S;
    if(cnt>1) return 1;
    else return 0;
}

main()
{
    cin>>N>>F;
    double sumOfPie;
    for(int i = 0; i < N; i++)
    {
        cin>>r[i];
        sumOfPie += M_PI*r[i]*r[i];
    }
    double Smax = sumOfPie/F;
    double S;
    while(1)
    {
        S = S/2;
        if(f(S)) 
    }
}