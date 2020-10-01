#include <iostream>
using namespace std;
 
int main() {
	int initial, stop1, stop2, stop3;
 
	while(1)
	{
		cin>>initial>>stop1>>stop2>>stop3;
		if(initial==0 && stop1==0 && stop2==0 && stop3==0)
			break;
		int ans = 720 + 9 * ((40 + initial-stop1)%40) + 360 + 9*((40+stop2-stop1)%40) + 9*((40+stop2-stop3)%40);
		cout<<ans<<endl;
	}
	return 0;
}