#include <bits/stdc++.h>

using namespace std;

int nmax = 12345;

vector<int> adj[12345];

int visited[12345];
//bfs var
int level[12345];
bool inQueu[12345];
void dfs(int x){
    visited[x] = 1;
    // for(int y:adj[x]) if(!visited[x]){
    for(int j = 0; j < adj[x].size(); j++){
        int y=adj[x][j];
        if(!visited[y]){
            dfs(y);
        }
    }
}

main(){
    int n, m;
    cin>>n>>m;
    while(m--){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    memset(visited,0,sizeof(visited));
    for(int x = 1; x < n; x++) if(!visited[x]){
        ans++;
        dfs(x);
    }
    cout<<ans;
}