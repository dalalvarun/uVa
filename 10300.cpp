#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int f;
		cin>>f;
		float ans=0;
		for(int i=0;i<f;i++){
			int size, noOfAnimals, fact;
			cin>>size>>noOfAnimals>>fact;
			float avg = (float)size/noOfAnimals;
			ans+= (float)avg*fact*noOfAnimals;
		}
		cout<<(int)ans<<endl;
	}
	return 0;
}