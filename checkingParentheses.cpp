#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;
char stack[100000];
bool check(string a)
{
	int top = -1;
	for (int i = 0; i < a.length(); ++i)
	{
		if(a.at(i) == '(' || a.at(i) == '[' || a.at(i) == '{')
		{
			top++;
			stack[top] = a.at(i);
		}
		else
		{
			if (a.at(i) == ')')
			{
				if(stack[top] == '(') top--;
				// else
				// {
				// 	top++;
				// 	stack[top] = a.at(i);
				// }
			}
			if (a.at(i) == ']')
			{
				if (stack[top] == '[')
				{
					top--;
				}
				// else 
				// {
				// 	top++;
				// 	stack[top] = a.at(i);
				// }
			}
			if (a.at(i) = '}')
			{
				if (stack[top] == '{')
				{
					top--;
				}
				// else 
				// {
				// 	top++;
				// 	stack[top] = a.at(i);
				// }
			}
		}
	}
	cout<<top<<endl;
	return top == -1? true : false;
}

main()
{
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin>>s;
		int r = check(s) ? 1 : 0;
		cout<<r<<endl;
	}
	// string s = "([{()[()]}])";
	// // for (int i = 0; i < s.length(); ++i)
	// // {
	// // 	cout<<a[i]<<endl;
	// // }
	// int r = check(s) ? 1 : 0;
	// cout<<r<<endl;
}