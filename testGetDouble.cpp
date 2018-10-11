#include <stdio.h>

double getDouble()
{
    bool neg = false;
    double num = 0.0;
    char c;
    while((c = getchar()) != '-' && (c < '0' || c > '9') && c != '.');
    if(c == '-') neg = true;
    else num = (double)(c - 48);
    while((c = getchar()) >= '0' && c <= '9') num = num*10.0 + (double)(c-48);
    if(c != '.') return num * (neg? -1 : 1);
    double x = 0.1;
    while((c = getchar()) >= '0' && c <= '9')
    {
        num+=x*(double)(c-48), x/=10;
    }
    return num*(neg? -1 : 1);
}

main()
{
	double c = getDouble();
	printf("%lf", c);
}