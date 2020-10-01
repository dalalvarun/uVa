#include <iostream>
using namespace std;

int main() {
	int i=1;
	while(1)
	{
		int n;
		cin>>n;
		if(!n)
		{
			return 0;
		}
		int temp;
		int Reasons = 0, Treats =0;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			if(!temp)
				Treats++;
			else
				Reasons++;
		}
		cout<<"Case "<<i<<": "<<Reasons-Treats<<endl;
		i++;
	}
	return 0;
}