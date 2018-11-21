#include <bits/stdc++.h>

using namespace std;
int n, l1, l2;
int a[123456];

int F(int i){
    int max = 0;
    for(int j = i-l1; j >= i-l2 && j >= 0; j--){
        if(F(j) >= max) max = F(j);
    }
    return a[i] + max;
}

main(){
    int t;
    cin>>t;
    for(int tC = 1; tC <= t; tC++){
        cin >> n >> l1 >> l2;
        for(int i = 0; i < n; i++) cin >> a[i];
        int max = F(0);
        int tmp;
        for(int i = 1; i < n; i++){
            tmp = F(i);
            max = max <= tmp ? tmp : max;
        }
        cout<<max<<endl;
    }
}