#include <iostream>

using namespace std;

int n, m;
int sum=0;
int tmp, count=0;

main () {
	while (cin >> n >> m) {
		
		int array[n][m];
		int str[n];
		for (int i=0; i < n; i++) {
			for (int j=0; j < m; j++) {
				cin >> array[i][j];
			}
			
			for (int j=1; j < n; j++) {
				while (array[i][j] < array[i][j-1]) {
					tmp = array[i][j];
					array[i][j] = array[i][j-1];
					array[i][j-1] = array[i][j];
					j-=1; 
				}
			}
			
			sum = sum + array[i][m-1];
		}
		
		cout << sum << endl;
		
		for (int i=0; i < n; i++) {
			if ((sum % array[i][m-1]) == 0) {
				str[count] = array[i][m-1];
				count++;
			}
		}
		
		if (count == 0) {
			cout << -1 << endl;
		}else {
			
			
			for (int j=0; j < count-1; j++) {
				cout << str[j] << " ";
			}
		
			cout << str[count-1] << endl;
		
		}
		
	}	
} 
