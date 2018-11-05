#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

pair<long long, long long> getLocation()
{
    char c;
    bool isR = false, isC = false;
    int row = 0, col = 0;
    // while((c=getchar()) < '0' || c > '9' && c != 'R' && c != 'C');
    while(((c=getchar()) >= '0') && (c <= '9') || (c == 'R') || (c == 'C'))
    {
        // cout<<c<<endl;
        if(c == 'R')
        {
            isR = true;
            isC = false;
        } 
        if(c == 'C')
        {
            isC = true;
            isR = false;
        }
        if(isR && c != 'R')
        {
            row = 10*row + (long long)(c - 48);
        }
        if(isC && c != 'C') col = 10*col + (long long)(c - 48);
    }
    pair<long long, long long> loc = make_pair(row, col);
    return loc;
}
void printString(int n) 
{ 
    char str[1111111]; // To store result (Excel column name) 
    int i = 0; // To store current index in str which is result 
  
    while (n>0) 
    { 
        // Find remainder 
        int rem = n%26; 
        int len = n/26;
        // If remainder is 0, then a 'Z' must be there in output 
        if (rem==0) 
        { 
            str[i++] = 'Z'; 
            n = (n/26)-1; 
        } 
        else // If remainder is non-zero 
        { 
            str[i++] = (rem-1) + 'A'; 
            n = n/26; 
        } 
    } 
    str[i] = '\0'; 
  
    // Reverse the string and print result 
    int l = 0;
    int r = i;
    while((l!=r)&&(l!=--r))
    {
        char temp;
        temp = str[l];
        str[l] = str[r];
        str[r] = temp;
        ++l;
    }
    cout << str;
  
    return; 
}

main()
{
    pair<long long, long long> loc = getLocation();
    cout<<loc.first<<" "<<loc.second<<endl;
    printString(loc.second);
    cout<<loc.first;
    // char c;
    // while((c=getchar()) < '0' || c > '9');
    // while((c=getchar()) >= '0' && c <= '9')
    // {
    //     cout<<c<<" ";
    // }
    // cout<<endl;
}