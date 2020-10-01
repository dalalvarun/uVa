#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>n>>m;
		int ans_n = ceil(1.0*(n-2)/3);
		int ans_m = ceil(1.0*(m-2)/3);
		cout<<ans_n*ans_m<<endl;
	}
	return 0;
}