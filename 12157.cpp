#include <bits/stdc++.h>
using namespace std;

void solve(int num)
{
	int n;
	cin>>n;
	int c1 =0, c2 = 0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		c1+= (ceil(x/30.0))*10;
		if(x%30==0) c1+=10;
		c2+= (ceil(x/60.0))*15;
		if(x%60==0) c2+=15;
		// cout<<c1<<" "<<c2<<endl;
	}
	cout<<"Case "<<num<<": ";
	if(c1==c2) cout<<"Mile Juice "<<c1<<endl;
	else if(c1<c2) cout<<"Mile "<<c1<<endl;
	else cout<<"Juice "<<c2<<endl;
	
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++) solve(i+1);
	return 0;
}