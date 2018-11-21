#include <bits/stdc++.h>

using namespace std;

int n; 
long long int M;
long long int a[1123456];

int func(){
    // long long int s[1123446];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] <= M) {
            cnt++;
            // s[i] = a[i];
            // for(int j = i; j < n; j++){
            //     if(s[j-1]+a[j] <= M) s[j] = s[j-1]+a[j];
            //     else s[j] = a[i];
            // }
            int sum = a[i];
            for(int j = i+1; j < n; j++){
                if(sum + a[j] <= M){
                    sum += a[j];
                    cnt++;
                }
                else break;
            }
        }
        // cout<<"lan thu i: "<<cnt<<endl;
    }
    return cnt;
}

int main(){
    scanf("%d", &n);
    scanf("%lld", &M);
    for(int i = 0; i < n; i++) scanf("%lld", &a[i]);
    cout<<func()<<endl;
}