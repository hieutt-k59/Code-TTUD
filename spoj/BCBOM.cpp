#include <iostream>
#include <stdio.h>

using namespace std;



main()
{
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
                while(((c=getchar()) == '*' || c == '.' || c == '\n') && j < m)
                {
                    if(c != '\n')
                    {
                        marked[i][j] = c;
                        j++;
                    }
                }
            }
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    int cnt = 0;
                    if(marked[i][j] == '.')
                    {
                        if(i == 0)
                        {
                            if(j == 0)
                            {
                                if(marked[0][1] == '*') cnt++;
                                if(marked[1][0] == '*') cnt++;
                                if(marked[1][1] == '*') cnt++;
                                marked[0][0] = (char)(cnt+48);
                                break;
                            }
                            else if(j == m-1)
                            {
                                if(marked[0][m-2] == '*') cnt++;
                                if(marked[1][m-2] == '*') cnt++;
                                if(marked[1][m-1] == '*') cnt++;
                                marked[0][m-1] = (char)(cnt+48);
                            }
                            else
                            {
                                if(marked[0][j-1] == '*') cnt++;
                                if(marked[1][j-1] == '*') cnt++;
                                if(marked[1][ j ] == '*') cnt++;
                                if(marked[1][j+1] == '*') cnt++;
                                if(marked[0][j+1] == '*') cnt++;
                                marked[0][j] = (char)(cnt+48);
                            }
                        }
                        else if(i == n-1)
                        {
                            if(j == 0)
                            {
                                if(marked[n-1][1] == '*') cnt++;
                                if(marked[n-2][1] == '*') cnt++;
                                if(marked[n-2][0] == '*') cnt++;
                                marked[n-1][0] = (char)(cnt+48);
                            }
                            else if(j == m-1)
                            {
                                if(marked[n-1][m-2] == '*') cnt++;
                                if(marked[n-2][m-2] == '*') cnt++;
                                if(marked[n-2][m-1] == '*') cnt++;
                                marked[n-1][m-1] = (char)(cnt+48);
                            }
                            else
                            {
                                if(marked[n-1][j-1] == '*') cnt++;
                                if(marked[n-2][j-1] == '*') cnt++;
                                if(marked[n-2][ j ] == '*') cnt++;
                                if(marked[n-2][j+1] == '*') cnt++;
                                if(marked[n-1][j+1] == '*') cnt++;
                                marked[n-1][j] = (char)(cnt+48);
                            }
                        }
                        else
                        {
                            if(j == 0)
                            {
                                if(marked[i-1][0] == '*') cnt++;
                                if(marked[i-1][1] == '*') cnt++;
                                if(marked[ i ][1] == '*') cnt++;
                                if(marked[i+1][1] == '*') cnt++;
                                if(marked[i+1][0] == '*') cnt++;
                                marked[i][0] = (char)(cnt+48);
                            }
                            if(j == m-1)
                            {
                                if(marked[i-1][m-1] == '*') cnt++;
                                if(marked[i-1][m-2] == '*') cnt++;
                                if(marked[ i ][m-2] == '*') cnt++;
                                if(marked[i+1][m-2] == '*') cnt++;
                                if(marked[i+1][m-1] == '*') cnt++;
                                marked[i][m-1] = (char)(cnt+48);                                
                            }
                            if(marked[ i ][j-1] == '*') cnt++;
                            if(marked[i-1][j-1] == '*') cnt++;
                            if(marked[i-1][ j ] == '*') cnt++;
                            if(marked[i-1][j+1] == '*') cnt++;
                            if(marked[ i ][j+1] == '*') cnt++;
                            if(marked[i+1][j+1] == '*') cnt++;
                            if(marked[i+1][ j ] == '*') cnt++;
                            if(marked[i+1][j-1] == '*') cnt++;
                            marked[i][j] = (char)(cnt+48);
                        }
                    }
                }
            }
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++) cout<<marked[i][j]<<" ";
                cout<<endl;
            }
        }
    }
}