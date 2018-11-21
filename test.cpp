#include <bits/stdc++.h>

using namespace std;

long long int getInt(){
    char c;
    long long int d = 0;
    while((c=getchar()) >= '0' && c <= '9')
        d = d*10 + (long long int)(c-48);
    return d;
}

main(){
    long long int x[100];
    for(int i = 0; i < 3; i++) x[i] = getInt();
    sort(x, x+ 3);
    for(int i = 0; i < 3; i++) cout<<x[i]<<" ";
    // long long int t = getInt();
    // cout<<t<<endl;
}