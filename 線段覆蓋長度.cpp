#include <iostream>

using namespace std;

main () {
	//input �Ĥ@�� 
	int num;
	cin >> num;
	
	int total=0;//�`�u�q��
	int st,ed; 
	
	//input�u�q 
	int array[num][2];
	for (int i=0; i < num ; i++) {
		cin >> array[i][0] >> array[i][1];
	} 
	
	//�Ƨǽu�q
	int a[2]; 
	for (int i=1; i < num; i++) {
		
		
		while (array[i-1][0] > array[i][0]) {
			a[0] = array[i-1][0];
			a[1] = array[i-1][1];
			array[i-1][0] = array[i][0];
			array[i-1][1] = array[i][1];
			array[i][0] = a[0];
			array[i][1] = a[1];
			i-=1;
		}
		
		if (array[i-1][0] == array[i][0]) {
			while (array[i-1][1] > array[i][1]) {
				a[0] = array[i-1][0];
				a[1] = array[i-1][1];
				array[i-1][0] = array[i][0];
				array[i-1][1] = array[i][1];
				array[i][0] = a[0];
				array[i][1] = a[1];
				i-=1;
			}
			
		}
	}
	
	//�p��total
	st = array[0][0];
	ed = array[0][1];
	for (int i=1; i < num; i++) {
		if (array[i][0] <= ed) {
		
			if (ed < array[i][1]) {
				ed = array[i][1];
			}
		}else {
			total+=(ed-st);
			st = array[i][0];
			ed = array[i][1];
			
		}
	} 
	
	//output
	total+=(ed-st);
	cout << total << endl;
	
	system("pause");
	
	 
} 
