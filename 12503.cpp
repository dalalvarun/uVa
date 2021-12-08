#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	string steps[n];
	cin.ignore();
	int distance[n];
	for(int i=0;i<n;i++)
	{
		getline(cin,steps[i]);
		if(steps[i]=="LEFT")
		{
			distance[i]=-1;
		}
		else if(steps[i]=="RIGHT")
		{
			distance[i] = 1;
		}
		else
		{
			int index = stoi(steps[i].substr(7));
			distance[i] = distance[index-1];
		}
	}
	int ans = 0;
	for(int i=0;i<n;i++) ans+=distance[i];
	cout<<ans<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--) solve();
}