#include <iostream>

using namespace std;

main () {
    int n;
    cin >> n;
     
    int lef,rig;
     
    int dmd;
    cin >> dmd;
     
    int array[n][n],vit[n][n];
     
    for (int i=0; i < n; i++) {
        for (int j=0; j < n; j++) {
            cin >> array[i][j];
            vit[i][j] = 0;
        }
        cout << endl;
    }//input array
     
    lef = n/2;
    rig = n/2;
    cout << array[lef][rig];
    vit[lef][rig] = 1;
    
    //fist step
	if (dmd == 0) {
    	rig-=1;	
	}else if (dmd == 1) {
		lef-=1;
	}else if (dmd == 2) {
		rig+=1;
	}else if (dmd == 3) {
		lef+=1;
	}
	 
    for (int i=0; i < n*n-1; i++) {
        
        cout << array[lef][rig];
        vit[lef][rig] = 1;
		
		if (dmd == 0) {
        	
			if (vit[lef-1][rig] == 0) {
        		dmd = 1;
        		lef-=1;
			}else {
				rig-=1;
			}
		}else if (dmd == 1) {
			
			if (vit[lef][rig+1] == 0) {
				dmd = 2;
				rig+=1;
			}else {
				lef-=1;
			}
		}else if (dmd == 2) {
			
			if (vit[lef+1][rig] == 0) {
				dmd = 3;
				lef+=1;
			}else {
				rig+=1;
			}
		}else if (dmd == 3) {
        	
        	if (vit[lef][rig-1] == 0) {
        		dmd = 0;
        		rig-=1;
			}else {
				lef+=1;
			}
		}
        
	}
    
    system("pause");
}
	     
     
     
     
     
     
     
         
