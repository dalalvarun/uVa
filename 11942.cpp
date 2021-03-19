#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin>>t;
	cout<<"Lumberjacks:\n";
	while(t--){
		int temp;
		cin>>temp;
		int prev1 = temp,prev2 = temp;
		bool ans1 = true;
		bool ans2 = true;
		for(int i=0;i<9;i++){
			cin>>temp;
			if(temp<prev1){
				ans1 = false;
			}
			if(temp>prev1){
				ans2 = false;
			}
			prev1 = temp;
		}
		if(ans1|| ans2){
			cout<<"Ordered\n";
		}
		else cout<<"Unordered\n";
	}
	return 0;
}