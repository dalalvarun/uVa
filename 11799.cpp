#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	int ce=1;
	while(t--){
		int n;
		cin>>n;
		int mx =0;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			mx = max(mx,temp);
		}
		cout<<"Case "<<ce<<": "<<mx<<endl;
		ce++;
	}
	return 0;
}