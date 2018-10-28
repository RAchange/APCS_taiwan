#include <bits/stdc++.h>

using namespace std;

main(){
    int n;
    int index;
    while(cin>>n){
        int m[n]{0};
        for(int i=0;i<n;i++) cin>>m[i];
        sort(m, m+n);
        for(int i=0;i<n;i++){
            cout<<m[i]<<" ";
            if(m[i]>=60) {
                index=i;
                break;
            }
            if(i==n-1) index=n;
        }
        for(int i=index+1;i<n;i++)  cout<<m[i]<<" ";
        cout<<endl;
        if(index == 0){
            cout<<"best case"<<endl;
        }else{
            cout<<m[index-1]<<endl;
        }

        if(index == n){
            cout<<"worst case"<<endl;
        }else{
            cout<<m[index]<<endl;
        }
        
    }
}
