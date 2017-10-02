#include <iostream>

using namespace std;

main () {
	int member;
	cin >> member;
	cout << endl;
	
	//input
	int score[member];
	for (int i=0; i < member; i++) {
		cin.get(score,10).get();
		
		while (score[i] > 100 || score[i] < 0) {
			cout << "The score is invalid. Please input again." << endl;
			cin >> score[i];
		}
		
	}
	cout << endl;
	
	//排序 
	int top;
	for (int i=1; i < member; i++) {
		while (score[i] < score[i-1]) {
			top = score[i-1];
			score[i-1] = score[i];
			score[i]   = top;
			i-=1;
		}
		 
	}
	
	//output第一行 
	for (int i=0; i < member; i++) {
		cout << score[i] << " "; 
	}
	cout << endl;
	
	//output第二,三行 
	if (score[0] >= 60) {
		cout << score[0] << endl;
		cout <<  "best case" << endl;
	}else if (score[member-1] < 60) {
		cout << score[member-1] << endl;
		cout << "worst case" << endl;
	}else{
	
		for (int i=0; i < member; i++) {
			
			if (score[i] >= 60){
				cout << score[i-1] << " " << score[i] << endl;
				break;
			}
		}	
	}
	
	system ("pause");
} 
