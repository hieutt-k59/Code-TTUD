int mark[10002];
void duyethoanvi(int l){
    if (l == n){
        for (int j = 0;j<n;++j) cout<<x[j]<<" ";
        cout<<endl;
        return;
    }
    for(int j = 1; j<= n;++j) if (!mark[j]){
        x[l] = j;
        mark[x[l]]=1;
        duyethoanvi(l+1);
        mark[x[l]] = 0;
    }
}