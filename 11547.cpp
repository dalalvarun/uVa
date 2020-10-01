#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		int ans = (x*63 + 7492)*5 -498;
		int tens = (ans%100)/10;
		cout<<abs(tens)<<endl;;
	}
	return 0;
}