#include <iostream>
#include <cmath>

using namespace std;
 

main () {
	unsigned long long int X;//input
	int x[1000];//���array 
	int odd=0;//�_�Ʀ�M 
	int twi=0;//���Ʀ�M 
	int ans=0;//���K�t 
	int p;
	
	cin >> X;
	
	for (int i=999; i >= 0; i--){
		p = pow(10,i);
		x[i] = X / p;
		
		if (i%2 == 0) {
			odd += x[i];//�_�Ʀ�[�` 
		} else if (i%2 ==1) {
			twi += x[i];//���Ʀ�[�` 
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
