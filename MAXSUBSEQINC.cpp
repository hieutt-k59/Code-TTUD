#include <bits/stdc++.h>

using namespace std;

int arr[1000];
int N;
int s[1000];
void func(int i){
    if(i == N) s[i] = 1;
    int cnt = 1;
    int temp = arr[i];
    for(int j = i+1; j <= N; j++){
        if(arr[j] > temp) {
            cnt++;
            temp = arr[j];
        }
    }
    s[i] = cnt;
}

main(){
    cin>>N;
    for(int i = 1; i <= N; i++) cin>>arr[i];
    for(int i = 1; i <= N; i++) {func(i); cout<<s[i]<<" ";}

}