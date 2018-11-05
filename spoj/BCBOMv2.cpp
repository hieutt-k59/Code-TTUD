#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;



main()
{
    // freopen("BCBOM.inp", "r", stdin);
    // freopen("BCBOM.out", "w", stdout);
    char c;
    while(1)
    {
        int n, m;
        cin>>n>>m;
        if( n == 0 && m == 0) break;
        else
        {
            char marked[n][m];
            for(int i = 0; i < n; i++)
            {
                int j = 0;
                while(j < m)
                {
                    c = getchar();
                    if(c != '\n' && c != ' ')
                    {
                        marked[i][j] = c;
                        j++;
                    }
                }
            }
            // for(int i = 0; i < n; i++)
            // {
            //     for(int j = 0; j < m; j++)
            //     {
            //         cout<<marked[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    int cnt = 0;
                    if(marked[i][j] == '.')
                    {
                        if(marked[ i ][j-1] == '*') cnt += j>0 ? 1 : 0;
                        if(marked[i-1][j-1] == '*') cnt += (i>0 && j>0) ? 1 : 0;
                        if(marked[i-1][ j ] == '*') cnt += i>0 ? 1 : 0;
                        if(marked[i-1][j+1] == '*') cnt += (i>0 && j<m-1) ? 1 : 0;
                        if(marked[ i ][j+1] == '*') cnt += j < m-1 ? 1 : 0;
                        if(marked[i+1][j+1] == '*') cnt += (i<n-1 && j<m-1) ? 1 : 0;
                        if(marked[i+1][ j ] == '*') cnt += i<n-1 ? 1 : 0;
                        if(marked[i+1][j-1] == '*') cnt += (i<n-1 && j>0) ? 1 : 0;
                        marked[i][j] = (char)(cnt+48);
                    }
                }
            }
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++) cout<<marked[i][j];
                cout<<endl;
            }
        }
    }
}
