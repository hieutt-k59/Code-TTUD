#include <iostream>
#include <stdio.h>
using namespace std;
long long getNumber()
{
    bool neg = false;
    long long num = 0;
    char c;
    while((c = getchar()) != '-' && (c < '0' || c > '9') && c != '.');
    if(c == '-') neg = true;
    else num = (long long)(c - 48);
    while((c = getchar()) >= '0' && c <= '9') num = num*10.0 + (long long)(c-48); 
    return num * (neg? -1 : 1);
}
main()
{
    long long A, B, M;
    A = getNumber();
    B = getNumber();
    M = getNumber();
    long long sum = 0;
    for(int i = A; i <= B; i++)
    {
        sum += i*i;
    }
    cout<<sum%M;
}