#include <iostream>

using namespace std;

int a,b,c;


main () {
	while(cin >> a >> b >> c) {
		int top, mid, btn;
		
		if (a >= b && a >= c) {	
			top = a;
			
			if (b>=c) {
				mid = b;
				btn = c; 
			}else {
				mid = c;
				btn = b;
			}
		}else if (b >= a && b >= c ){
			top = b;
			
			if (a >= c) {
				mid = a;
				btn = c;
			}else {
				mid = c;
				btn = a;
			}
		}else if (c >= a && c >= b) {
			top = c;
			
			if (a >= b) {
				mid = a;
				btn = b;
			}else {
				mid = b;
				btn = a;
			}
		}
		
		cout << btn << " " << mid << " " << top << endl;
		
		if ((btn+mid) <= top) {
			cout << "No" << endl; 
		}else if (top*top > btn*btn + mid*mid) {
			cout << "Obtuse" << endl; 
		}else if (top*top == btn*btn + mid*mid) {
			cout << "Right" << endl;
		}else if (top*top < btn*btn + mid*mid) {
			cout << "Acute" << endl;
		}
	}
}
