#include <bits/stdc++.h>

using namespace std;

int n, M;
int a[22];

main(){
    scanf("%d%d", &n, &M);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, a+n);
    // for(int i = 0; i < n; i++) cout<<a[i];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int sum = a[i];
        if(sum == M) cnt++;
        else{
            for(int j = i+1; j < n; j++){
                if(sum+a[j] < M) sum += a[j];
                else if( sum+a[j] == M) {cnt++;}
                else{
                    int sub = sum + a[j] - M;
                    for(int k = 0; k <= j; k++){
                        while(a[k] <= sub){
                            sub -= a[j];
                        }
                    }
                    if(sub==0) cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}