#include<iostream>
using namespace std;

int main(){
	int months,n;
	float dPay, loanAmt;
	while(cin>>months>>dPay>>loanAmt>>n && months>0){
		float rates[102];
		int m;
		float r;
		for(int i=0;i<n;i++){
			cin>>m>>r;
			for(int j=m;j<102;j++) rates[j] = (float)(1.0-r);
		}
		double car = (dPay + loanAmt)*rates[0];
		double owe = loanAmt;
		double installment = (double)loanAmt/months;
		if(owe<car){
			cout<<"0 months\n";
		}
		else{
			int ans=0;
			for(int i=1;i<=months;i++){
				car*= rates[i];
				owe-=installment;
				if(owe<car){
					ans=i;
					break;
				}
			}
			if(ans==1) cout<<"1 month\n";
			else cout<<ans<<" months\n";	
		}
	}
	return 0;
}