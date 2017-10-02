#include <iostream>

using namespace std;

main () {
	//input 第一行 
	int r,c,m,n;
	cin >> r >> c  >> m;
	
	
	//input矩陣 
	int array[m+1][10][10];
	for (int i=0; i < r; i++) {
		for (int j=0; j < c; j++) {
			cin >> array[0][i][j];
			
			
		}
		
		cout << endl;
	}
	
	//input demands & execute demands
	int demand[m];
	for (int i=0; i < m; i++) {
		cin >> demand[i];
		
		
		 
		if (demand[i] == 1) {
			//execute 轉置矩陣	
			for (int j=1; j < r; j++) {
				for (int k=0; k < c; k++) {
					array[i+1][j][k] = array[i][j-1][k];
				}
			}
			
			for (int j=0; j < c; j++) {
				array[i+1][0][j] =  array[i][r-1][j];
			}
		}else if (demand[i] == 0) {
			//execute 旋轉矩陣
			for (int j=0; j < r; j++) {
				for (int k=0; k < c; k++) {
					array[i+1][k][r-1-j] = array[i][j][k];
				}
			}
			n=c;
			c=r;
			r=n;
		}
	}
	
	//output第一行
	cout << r << " " << c << endl;
	 
	//output
	for (int i=0; i < r; i++) {
		for (int j=0; j < c; j++) {
			cout << array[m][i][j] << " " ;
		}
		cout << endl;
	}
	
	system("pause");
	
	
} 
