#include <bits/stdc++.h>

using namespace std;

unsigned long long int a[2][1123];
int n;
int s[1123];
int cnt;

int min(int num){
    int m = a[num][0];
    for(int i = 1; i < n; i++) if(a[num][i] < m) m = a[num][i];
    return m;
}

// void findMin(int num){
//     cnt = 0;
//     int m = min(num);
//     for(int j = 0; j < n; j++) 
//         if(a[num][j] == m){
//             s[cnt] = j;
//             cnt++;
//         }
// }
bool check(int m1, int m2){
    cnt = 0;
    for(int i = 0; i < n; i++) if(a[0][i] > m1 && a[1][i] > m2) cnt++;
    return cnt>0 ? true : false;
}
int main(){
    scanf("%d", &n);
    int kem = 0;
    for(int j = 0; j < n; j++)
        for(int i = 0; i < 2; i++) scanf("%lld", &a[i][j]);
    for(int i = 0; i < n; i++) if(check(a[0][i], a[1][i])) kem++;
    cout<<n-kem<<endl;
    return 0;
}