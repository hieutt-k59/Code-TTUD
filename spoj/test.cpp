#include <iostream>
#include <stdio.h>

using namespace std;

main(int argc, char const *argv[])
{
    int a[3][5];
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i = 0 ; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(a[i][j] < 10) cout<<a[i][j]<<"  ";
            else cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
