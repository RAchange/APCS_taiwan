#include <iostream>

using namespace std;

main () {
	//input �Ĥ@�� 
	int r,c,m,n;
	cin >> r >> c  >> m;
	
	
	//input�x�} 
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
			//execute ��m�x�}	
			for (int j=1; j < r; j++) {
				for (int k=0; k < c; k++) {
					array[i+1][j][k] = array[i][j-1][k];
				}
			}
			
			for (int j=0; j < c; j++) {
				array[i+1][0][j] =  array[i][r-1][j];
			}
		}else if (demand[i] == 0) {
			//execute ����x�}
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
	
	//output�Ĥ@��
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
