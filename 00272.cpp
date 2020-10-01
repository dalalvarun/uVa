#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	string s;
	int temp = 0;
	while(getline(cin,s))
	{
 
		string y;
		for(char x: s)
		{
			if(x=='\"')
			{
				if(temp==0)
				{
					y.push_back('`');
					y.push_back('`');
					temp++;
					temp%=2;
				}
				else if(temp==1)
				{
					y.push_back('\'');
					y.push_back('\'');
					temp++;
					temp%=2;
				}
			}
			else
				y.push_back(x);
		}
		cout<<y<<endl;
	}
	return 0;
}