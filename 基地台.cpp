#include <iostream>

using namespace std;

unsigned long long int n,k;

int p[50001];

bool ans(int dst) {
	int nxt;//預設最遠基地台作用座標 
	int count=0;//運算基地台數 
	
	for (int i=0; i < n;) {
		nxt = p[i] + dst;
		count++;
		
		if (count > k) {
			return 0;
		}else if (p[n-1] <= nxt){
			return 1;	
		}
		
		do {
			i++;
		} while (p[i] <= nxt);
	}
	
	return 0;
}

main () {
	cin >> n >> k; 
	
	int bst,wst;
	int mid; 
	
	
	for (int i=0; i < n; i++ ) {
		cin >> p[i];
	}//input serve spot location
	
	//排序serve spot location
	int tmp;
	for (int i=1; i < n; i++) {
		while (p[i] < p[i-1]) {
			tmp = p[i];
			p[i] = p[i-1];
			p[i-1] = tmp;
			i-=1;
		}
	} 
	
	
	
	if (k == 1) {
		//if 基地台只有一個 
		cout << p[n-1]-p[0] << endl;
	}else{
		bst = 1;//最好答案 
		wst = ((p[n-1]-p[0])/k)+1;//最糟答案 
		
		while (bst <= wst) {
			mid = (wst+bst)/2;
		
			if (ans(mid)){
				wst = mid;
			}else {
				bst = mid+1;
			}
		
			if (bst == wst) {
				cout << bst << endl;
				break;
			}
		}
	}
	
	system ("pause");
	
	
} 
