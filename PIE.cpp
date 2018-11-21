#include <bits/stdc++.h>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;
int t, N, F;
double r[10000];

int f(double S)
{
    int cnt = 0;
    for(int i = 0; i < N; i++) cnt += (M_PI*r[i]*r[i])/S;
    if(cnt >= F+1) return 1;
    else return 0;
}

main()
{
    cin>>t;
    while(t--)
    {
        cin>>N>>F;
        double sumOfPie = 0;
        for(int i = 0; i < N; i++)
        {
            cin>>r[i];
            sumOfPie += M_PI*r[i]*r[i];
        }
        double Smax = sumOfPie/(F+1);
        double S = Smax;
        cout<<"Smax = "<< S<<endl;
        double max = 0;
        if(N == 1) max = Smax;
        else{
            double init = 0;
            while(S-init >= 0.000001){
                double m = (init+S)/2;
                if(f(m)){
                    if(m > max) max = m;
                    init = m;
                }
                else S = m;
            }
        }
        printf("%6lf\n", max);
    }
}