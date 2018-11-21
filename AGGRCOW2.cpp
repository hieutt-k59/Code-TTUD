#include <bits/stdc++.h>
using namespace std;
long long int x[123456];
long long int N, C;

bool F(long long int S){
  int cnt = 1; long long int temp = x[0];
  for(long long int i = 1; i < N; i++){
    if(x[i] - temp >= S){
      temp = x[i];
      cnt++;
      if(cnt == C){
        return 1;
      }
    }
  }
  return 0;
}

long long int binarySearch(){
  //sort(pos, pos + N);
  long long int l = 0, r = x[N - 1], mx = -1;
  while(l < r){
    int m = l + (r - l)/2;
    if(F(m) == 1){
      if(m > mx){
        mx = m;
      }
      l = m + 1;
    }
    else{
      r = m;
    }
  }
  return mx;
}

int main() {
  long long int T;
  scanf("%lld",&T);
  while(T--){
    scanf("%lld%lld",&N,&C);
    for(long long int i = 0;i<N;i++){
      scanf("%lld",&x[i]);
    }
    //printf("%lld\n",binarySearch());
    sort(x, x + N);
    long long int l = 0, r = x[N - 1], mx = -1;
    while(l<r){
      int m = (l+r)/2;
      if(F(m)){
        if(m > mx) mx = m;
        l = m+1;
      }
      else r = m;
    }
    cout << mx << endl;
  }

  return 0;
}