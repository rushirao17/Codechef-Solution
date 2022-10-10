#include <iostream>
using namespace std;

int main() {
	int a,b,c,t;
	cin>>t;
	while(t--){
	    cin>>a>>b>>c;
        if(b>=a && b>=c){
            cout<<"Yes"<<endl;}
        else {
            cout<<"No"<<endl;}
	}
	return 0;
}
