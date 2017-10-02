#include <iostream>
#include <string>

using namespace std;

string hit[9][5];
int out=0;
int a[9];
int b, count=0;
int base[9][2];//base[i][1]=1為在場上,base[i][0]為在壘數 
int score=0;
int c=1;

main () {
	while (c == 1) {
		for (int i=0; i < 9; i++) {
			cin >> a[i];
			
			for (int j=0; j < a[i]; j++) {
				cin >> hit[i][j];
				
				while (hit[i][j].size() != 2) {
					cout << "input error!!!" << endl;
					cin >> hit[i][j];
				}
				
				while (hit[i][j] == "XX") {
					cin >> hit[i][j-1] >> hit[i][j];
				}
			}
			
			for (int j=0; j < 2; j++) {
				base[i][j] = 0;
			}
		}
		
		cin >> b;
		
		for (int i=0; i < a[0]; i++) {
			for (int j=0; j < 9; j++) {
				
				if (hit[j][i] == "1B") {
					
					base[j][1] = 1;
					
					for (int k=0; k < 9; k++) {
						
						if (base[k][1] == 1) {
							base[k][0]++;
						}
						
						if (base[k][0] >= 4 && base[k][1] == 1) {
							score++;
							base[k][0] = 0;
							base[k][1] = 0;
						}
					}		
				}else if (hit[j][i] == "2B") {
					
					base[j][1] = 1;
					
					for (int k=0; k < 9; k++) {
						
						if (base[k][1] == 1) {
							base[k][0]+=2;
						}
						
						if (base[k][0] >= 4 && base[k][1] == 1) {
							score++;
							base[k][0] = 0;
							base[k][1] = 0;
						}
					}
				}else if (hit[j][i] == "3B") {
					
					base[j][1] = 1;
					
					for (int k=0; k < 9; k++) {
						
						if (base[k][1] == 1) {
							base[k][0]+=3; 
						}
						
						if (base[k][0] >= 4 && base[k][1] == 1) {
							score++;
							base[k][0] = 0;
							base[k][1] = 0;
						}
					}
				}else if (hit[j][i] == "HR") {
					
					base[j][1] = 1;
					
					for (int k=0; k < 9; k++) {
						
						if (base[k][1] == 1) {
							base[k][0]+=4; 
						}
						
						if (base[k][0] >= 4 && base[k][1] == 1) {
							score++;
							base[k][0] = 0;
							base[k][1] = 0;
						}
					}
				}else if (hit[j][i] == "SO" || hit[j][i] == "GO" || hit[j][i] == "FO") {
					
					out++;
					count++;
					
					if (out == 3) {
						out = 0;
						
						for (int k=0; k < 9; k++) {
							base[k][1] = 0;
							base[k][0] = 0;
						}
					}
				}
				
				if (count == b) {
					cout << score << endl;
					break;
				}
				
			}
			
			if (count == b) {
				break;
			}
		}
	}
}





