#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int W;
		scanf("%i\n\n",&W);
		int a,b;
		cin>>a>>b;
		int prev = a-b;
		bool ans = true;
		for(int i=0;i<W-1;i++){
			cin>>a>>b;
			if(a-b!=prev){
				ans = false;
			}
		}
		if(ans) cout<<"yes\n";
		else cout<<"no\n";
		if(t) cout<<"\n";
	}
	return 0;
}