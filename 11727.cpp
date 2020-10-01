#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int x;
		vector<int> Salaries;
		for(int i=0;i<3;i++)
		{
			cin>>x;
			Salaries.push_back(x);
		}
		sort(Salaries.begin(),Salaries.end());
		cout<<"Case "<<i<<" :  "<<Salaries[1]<<endl;
		
	}
	return 0;
}