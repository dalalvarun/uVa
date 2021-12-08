#include <iostream>
using namespace std;

void solve(int num)
{
	string sites[10];
	int rel[10];
	int mxRelevance = 0;
	for(int i=0;i<10;i++)
	{
		cin>>sites[i]>>rel[i];
		if(rel[i] > mxRelevance) mxRelevance = rel[i];
	}
	cout<<"Case #"<<num<<":"<<endl;
	for(int i=0;i<10;i++)
	{
		if(rel[i]==mxRelevance) cout<<sites[i]<<endl;
	}
	
}

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++) solve(i+1);
	return 0;
}