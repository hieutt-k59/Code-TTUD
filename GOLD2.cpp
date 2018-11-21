#include <bits/stdc++.h>

using namespace std;
int n, l1, l2;
int a[123456];
unsigned long long int f[123456];
unsigned long long int F(int i){
        unsigned long long int max = 0;
        for(int j = i-l1; j >= i-l2 && j >= 0; j--){
            unsigned long long int tmp = f[j];
            if(tmp > max) max = tmp;
        }
        f[i] = a[i] + max;
        return f[i];
}

main(){
    int t;
    scanf("%d", &t);
    for(int tC = 1; tC <= t; tC++){
        scanf("%d", &n);
        scanf("%d", &l1);
        
        for(int i = 0; i < n; i++) cin >> a[i];
        unsigned long long int max = 0;
        for(int i = 0; i < n; i++){
            unsigned long long int tmp = F(i);
            if(max < tmp) max = tmp;
        }
        cout<<max<<endl;
    }
}