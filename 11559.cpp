#include <iostream>
#include <climits>
using namespace std;

int main(){
	int N,B,H,W;
	while(cin>>N>>B>>H>>W && N>0){
		int cost = INT_MAX;
		int beds[W];
		for(int i=0;i<H;i++){
			int price;
			cin>>price;
			for(int j=0;j<W;j++){
				cin>>beds[j];
				if(N<=beds[j]){
					int temp = N*price;
					if(temp<cost && temp<=B) cost = temp;
				}
			}
		}
		if(cost>B) cout<<"stay home\n";
		else cout<<cost<<endl;
	}
	return 0;
}