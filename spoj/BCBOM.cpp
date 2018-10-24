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
                    if(marked[i][j] == '*') break;
                    else
                    {
                        if(i == 0)
                        {
                            if(j == 0)
                            {
                                if(marked[0][1] == '*') cnt++;
                                if(marked[1][0] == '*') cnt++;
                                if(marked[1][1] == '*') cnt++;
                            }
                            else if(j )
                        }
                    }
                }
                cout<<endl;
            }
        }
    }
}