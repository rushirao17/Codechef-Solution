#include <bits/stdc++.h>


using namespace std;
int main() {
int t;
cin>>t;
while(t--){
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int p,q;
        
        if(w>=x){
            p=w;
            if(y>=z){
                q=y;
                cout<<p+q<<endl;}
            else{
                q=z;
                cout<<p+q<<endl;}}
            
        else{
            p=x;
            if(y>=z){
                q=y;
                cout<<p+q<<endl;}
            else{
                q=z;
                cout<<p+q<<endl;}}
}
	return 0;
}
