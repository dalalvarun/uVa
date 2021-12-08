#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	while(1)
	{
		cin>>a>>b;
		if(a==-1 && b==-1) break;
		if(a>b) swap(a,b);
		cout<<min((b-a),a+(100-b))<<endl;
	}
}