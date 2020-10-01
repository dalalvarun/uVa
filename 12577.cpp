#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int i=1;
	while(1)
	{
		cin>>s;
		if(s=="*")
			break;
		else if(s=="Hajj")
			cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
		else
			cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
			
		i++;
	}
	return 0;
}