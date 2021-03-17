#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int ce = 1;
	while(t--){
		int n;
		cin>>n;
		int prev;
		cin>>prev;
		int h=0,l=0;
		for(int i=0;i<n-1;i++){
			int temp;
			cin>>temp;
			if(temp>prev) h++;
			else if(temp<prev)l++;
			prev = temp;
		}
		cout<<"Case "<<ce<<": "<<h<<" "<<l<<endl;
		ce++;
	}
	return 0;
}