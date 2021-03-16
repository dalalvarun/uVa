#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	unsigned long long int n;
	while(1){
		cin>>n;
		if(n==0) break;
		else{
			while(n>9){
				int sum = 0;
				while(n){
					sum+= n%10;
					n/=10;
				}
				n = sum;
			}
			cout<<n<<endl;
		}
	}
	return 0;
}