#include <iostream>

using namespace std;

int n, m, k;
int count=0;

main () {
	
	while (cin >> n >> m >> k) {
		
		int mem[n], out[n];
		for (int i=0; i < n; i++) {
			mem[i] = i+1;
			out[i] = 0;
		}
		
		for (int i=m-1; i < n; ) {
			out[i] = 1;
			
		
			for (int j=0; j < m; j++) {
				i++;
				
				while (out[i] == 1) {
					
					i++;
					
					if (i >= n) {
						i = i%n;	
					}
				}
				
				while (i >= n) {
					i = i%n;
					
					if (out[i] ==1) {
						i++;
					}
				}
				
				
				
			}
			
			count++;
			
			if (count == k) {
				
				i = i+1;
				
				while (i >= n) {
					i = i%n;
					
					if (out[i] == 1) {
						i+=1;	
					}
				}
				
				while (out[i] == 1) {
					
					i++;
					
					if (i >= n) {
						i = i%n;	
					}
				}
				
				cout << mem[i] << endl;
				break;
				
			}
			 
		}
	}
}
