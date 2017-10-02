#include <iostream>
#include <cmath>

using namespace std;
 

main () {
	unsigned long long int X;//input
	int x[1000];//计array 
	int odd=0;//计㎝ 
	int twi=0;//案计㎝ 
	int ans=0;//盞畉 
	int p;
	
	cin >> X;
	
	for (int i=999; i >= 0; i--){
		p = pow(10,i);
		x[i] = X / p;
		
		if (i%2 == 0) {
			odd += x[i];//计羆 
		} else if (i%2 ==1) {
			twi += x[i];//案计羆 
		}
		
		X = X % p;	
	}
	
	ans = odd - twi;
	
	if (ans < 0) {
		ans = 0-ans;
	}
	
	
	cout << ans << endl;
	
	system ("pause");
} 
