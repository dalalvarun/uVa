#include <iostream>
using namespace std;

int main() {
	int B,N;
	while(1){
		cin>>B>>N;
		if(B==0 && N==0) break;
		else{
			int reserve[B];
			for(int i=0;i<B;i++) cin>>reserve[i];
			for(int j=0;j<N;j++){
				int a,b,c;
				cin>>a>>b>>c;
				reserve[a-1]-=c;
				reserve[b-1]+=c;
			}
			bool ans = true;
			for(int x: reserve) if(x<0) ans = false;
			if(ans) cout<<"S\n";
			else cout<<"N\n";
		}
	}
	return 0;
}