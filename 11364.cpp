#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> pos;
		int n;
		cin>>n;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			pos.push_back(x);
		}
		int l = *min_element(pos.begin(),pos.end());
		int r = *max_element(pos.begin(),pos.end());
		cout<<2*(r-l)<<endl;
		
	}
	return 0;
}